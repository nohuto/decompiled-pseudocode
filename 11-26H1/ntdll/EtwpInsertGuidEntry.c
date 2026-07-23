/*
 * XREFs of EtwpInsertGuidEntry @ 0x18010235C
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x1801022EC (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

void __fastcall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  void *UniqueThread; // rbx
  unsigned __int64 Root; // rbx
  BOOLEAN v4; // r8
  int v5; // edi
  unsigned __int64 v6; // rax

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 && EtwpGuidEntryTable.Root )
    Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
  v4 = 0;
  v5 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( memcmp(&Node[1], (const void *)(Root + 24), 0x10uLL) >= 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
        if ( v5 )
        {
          if ( !v6 )
          {
LABEL_12:
            v4 = 1;
            break;
          }
          v6 ^= Root;
        }
        if ( !v6 )
          goto LABEL_12;
      }
      else
      {
        v6 = *(_QWORD *)Root;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_16;
          v6 ^= Root;
        }
        if ( !v6 )
        {
LABEL_16:
          v4 = 0;
          break;
        }
      }
      Root = v6;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, v4, Node);
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

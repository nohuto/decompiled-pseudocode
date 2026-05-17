/*
 * XREFs of EtwpInsertGuidEntry @ 0x180102FDC
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180102F6C (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

struct _TEB *__fastcall EtwpInsertGuidEntry(unsigned __int64 a1, __int64 a2)
{
  void *UniqueThread; // rbx
  __int64 v4; // rbx
  bool v5; // r8
  int v6; // edi
  __int64 v7; // rax

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  v4 = EtwpGuidEntryTable;
  if ( (qword_1801CB1F8 & 1) != 0 && EtwpGuidEntryTable )
    v4 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
  v5 = 0;
  v6 = qword_1801CB1F8 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( memcmp((const void *)(a1 + 24), (const void *)(v4 + 24), 0x10uLL) >= 0 )
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          if ( !v7 )
          {
LABEL_12:
            v5 = 1;
            break;
          }
          v7 ^= v4;
        }
        if ( !v7 )
          goto LABEL_12;
      }
      else
      {
        v7 = *(_QWORD *)v4;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= v4;
        }
        if ( !v7 )
        {
LABEL_16:
          v5 = 0;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpGuidEntryTable, v4, v5, a1);
  EtwpProvLockOwner = 0;
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

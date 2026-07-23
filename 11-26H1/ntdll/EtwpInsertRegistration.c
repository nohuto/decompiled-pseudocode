/*
 * XREFs of EtwpInsertRegistration @ 0x18008D400
 * Callers:
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18008CB50 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  void *UniqueThread; // rbx
  unsigned __int16 v3; // r14
  unsigned __int64 Root; // rbx
  BOOLEAN v5; // r8
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v3 = WORD2(Node[3].Right);
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable.Root )
    {
      v5 = 0;
      goto LABEL_15;
    }
    Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
  }
  v5 = 0;
  v6 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v7 = memcmp(&Node[1].Right, (const void *)(Root + 32), 0x10uLL);
      if ( v7 )
      {
        if ( v7 >= 0 )
          goto LABEL_12;
      }
      else if ( v3 <= *(_WORD *)(Root + 84) )
      {
LABEL_12:
        v8 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_14:
            v5 = 1;
            break;
          }
          v8 ^= Root;
        }
        if ( !v8 )
          goto LABEL_14;
        goto LABEL_10;
      }
      v8 = *(_QWORD *)Root;
      if ( v6 )
      {
        if ( !v8 )
          goto LABEL_18;
        v8 ^= Root;
      }
      if ( !v8 )
      {
LABEL_18:
        v5 = 0;
        break;
      }
LABEL_10:
      Root = v8;
    }
  }
LABEL_15:
  RtlRbInsertNodeEx(&EtwpRegistrationTable, (PRTL_BALANCED_NODE)Root, v5, Node);
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

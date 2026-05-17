/*
 * XREFs of EtwpInsertRegistration @ 0x18006CFB0
 * Callers:
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

struct _TEB *__fastcall EtwpInsertRegistration(unsigned __int64 a1, __int64 a2)
{
  void *UniqueThread; // rbx
  unsigned __int16 v4; // r14
  __int64 v5; // rbx
  bool v6; // r8
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v4 = *(_WORD *)(a1 + 84);
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  v5 = EtwpRegistrationTable;
  if ( (qword_1801CB210 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable )
    {
      v6 = 0;
      goto LABEL_15;
    }
    v5 = (unsigned __int64)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  }
  v6 = 0;
  v7 = qword_1801CB210 & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = memcmp((const void *)(a1 + 32), (const void *)(v5 + 32), 0x10uLL);
      if ( v8 )
      {
        if ( v8 >= 0 )
          goto LABEL_12;
      }
      else if ( v4 <= *(_WORD *)(v5 + 84) )
      {
LABEL_12:
        v9 = *(_QWORD *)(v5 + 8);
        if ( v7 )
        {
          if ( !v9 )
          {
LABEL_14:
            v6 = 1;
            break;
          }
          v9 ^= v5;
        }
        if ( !v9 )
          goto LABEL_14;
        goto LABEL_10;
      }
      v9 = *(_QWORD *)v5;
      if ( v7 )
      {
        if ( !v9 )
          goto LABEL_18;
        v9 ^= v5;
      }
      if ( !v9 )
      {
LABEL_18:
        v6 = 0;
        break;
      }
LABEL_10:
      v5 = v9;
    }
  }
LABEL_15:
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpRegistrationTable, v5, v6, a1);
  EtwpProvLockOwner = 0;
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}

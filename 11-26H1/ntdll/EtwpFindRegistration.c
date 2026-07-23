/*
 * XREFs of EtwpFindRegistration @ 0x18003B0A0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18003B260 (RtlTryAcquireSRWLockShared.c)
 *     EtwpRegistrationCompare @ 0x1800CA790 (EtwpRegistrationCompare.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(void *Buf1, unsigned __int16 a2)
{
  void *UniqueThread; // rbx
  unsigned __int64 Root; // rbx
  _RTL_SRWLOCK *j; // r14
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  _RTL_SRWLOCK **Value; // rcx
  _RTL_SRWLOCK *v12; // rax
  _RTL_SRWLOCK *i; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v14[0] = Buf1;
  v14[1] = a2;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  Root = (unsigned __int64)EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( !EtwpRegistrationTable.Root )
    {
LABEL_21:
      EtwpProvLockOwner = 0;
      RtlReleaseSRWLockExclusive(&EtwpProvLock);
      return 0LL;
    }
    Root = (unsigned __int64)&EtwpRegistrationTable ^ (unsigned __int64)EtwpRegistrationTable.Root;
  }
  j = 0LL;
  v7 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v8 = memcmp(Buf1, (const void *)(Root + 32), 0x10uLL);
      if ( v8 )
        break;
      if ( a2 < *(_WORD *)(Root + 84) )
        goto LABEL_6;
      if ( a2 > *(_WORD *)(Root + 84) )
        goto LABEL_13;
      v9 = *(_QWORD *)Root;
      j = (_RTL_SRWLOCK *)Root;
      if ( v7 && v9 )
      {
LABEL_15:
        Root ^= v9;
        goto LABEL_9;
      }
LABEL_8:
      Root = v9;
LABEL_9:
      if ( !Root )
        goto LABEL_10;
    }
    if ( v8 < 0 )
LABEL_13:
      v9 = *(_QWORD *)Root;
    else
LABEL_6:
      v9 = *(_QWORD *)(Root + 8);
    if ( v7 && v9 )
      goto LABEL_15;
    goto LABEL_8;
  }
LABEL_10:
  if ( !j )
    goto LABEL_21;
  while ( !RtlTryAcquireSRWLockShared(j + 9) )
  {
    Value = (_RTL_SRWLOCK **)j[1].Value;
    v12 = j;
    if ( Value )
    {
      j = (_RTL_SRWLOCK *)j[1].Value;
      for ( i = *Value; i; i = (_RTL_SRWLOCK *)i->Value )
        j = i;
    }
    else
    {
      for ( j = (_RTL_SRWLOCK *)(j[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
            j;
            j = (_RTL_SRWLOCK *)(j[2].Value & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_RTL_SRWLOCK *)j->Value == v12 )
          break;
        v12 = j;
      }
    }
    if ( !j || (unsigned int)EtwpRegistrationCompare(v14, j) )
      goto LABEL_21;
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return j;
}

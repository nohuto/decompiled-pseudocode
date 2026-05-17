/*
 * XREFs of EtwpGetNextRegistration @ 0x180050820
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpDisableTraceProviders @ 0x1800E8BDC (EtwpDisableTraceProviders.c)
 *     EtwEnumerateProcessRegGuids @ 0x180158BD0 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 */

unsigned __int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1, __int64 a2)
{
  void *UniqueThread; // rbx
  __int64 v3; // rsi
  char v4; // bp
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v10; // rcx
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v3 = 0LL;
  v4 = 0;
  v6 = 0LL;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock, a2);
  EtwpProvLockOwner = (int)UniqueThread;
  if ( a1 )
  {
    i = *(_QWORD *)(a1 + 8);
    v8 = a1;
    if ( i )
    {
      v10 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v8 )
          break;
        v8 = i;
      }
    }
  }
  else if ( (qword_1801CB210 & 1) != 0 )
  {
    if ( qword_1801CB210 == 1 )
      i = 0LL;
    else
      i = qword_1801CB210 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    i = qword_1801CB210;
  }
  while ( i )
  {
    v6 = i;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(i + 72) )
    {
      v4 = 1;
      break;
    }
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    if ( v11 )
    {
      v13 = *v11;
      for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
        i = (unsigned __int64)v13;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v12 )
          break;
        v12 = i;
      }
    }
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  if ( v4 )
    return v6;
  return v3;
}

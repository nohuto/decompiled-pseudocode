/*
 * XREFs of EtwpGetNextRegistration @ 0x18003ADA0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     EtwpDisableTraceProviders @ 0x1800E7DEC (EtwpDisableTraceProviders.c)
 *     EtwEnumerateProcessRegGuids @ 0x180158AA0 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18003B260 (RtlTryAcquireSRWLockShared.c)
 */

unsigned __int64 __fastcall EtwpGetNextRegistration(_RTL_SRWLOCK *a1)
{
  void *UniqueThread; // rbx
  __int64 v2; // rsi
  char v3; // bp
  unsigned __int64 v5; // r14
  unsigned __int64 Value; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v9; // rcx
  _QWORD **v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v2 = 0LL;
  v3 = 0;
  v5 = 0LL;
  if ( EtwpProvLockOwner == (_DWORD)UniqueThread )
    __fastfail(0x24u);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  EtwpProvLockOwner = (int)UniqueThread;
  if ( a1 )
  {
    Value = a1[1].Value;
    v7 = (unsigned __int64)a1;
    if ( Value )
    {
      v9 = *(_QWORD **)Value;
      if ( *(_QWORD *)Value )
      {
        do
        {
          Value = (unsigned __int64)v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
    }
    else
    {
      for ( Value = a1[2].Value & 0xFFFFFFFFFFFFFFFCuLL; Value; Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)Value == v7 )
          break;
        v7 = Value;
      }
    }
  }
  else if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Min == (_RTL_BALANCED_NODE *)1 )
      Value = 0LL;
    else
      Value = (unsigned __int64)EtwpRegistrationTable.Min ^ ((unsigned __int64)&EtwpRegistrationTable.Root + 1);
  }
  else
  {
    Value = (unsigned __int64)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v5 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 72)) )
    {
      v3 = 1;
      break;
    }
    v10 = *(_QWORD ***)(Value + 8);
    v11 = Value;
    if ( v10 )
    {
      v12 = *v10;
      for ( Value = *(_QWORD *)(Value + 8); v12; v12 = (_QWORD *)*v12 )
        Value = (unsigned __int64)v12;
    }
    else
    {
      for ( Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            Value;
            Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)Value == v11 )
          break;
        v11 = Value;
      }
    }
  }
  EtwpProvLockOwner = 0;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  if ( v3 )
    return v5;
  return v2;
}

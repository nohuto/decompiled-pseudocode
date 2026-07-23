/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18008F730
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 */

__int64 *__fastcall RtlpCreateSerializationGroup(int a1)
{
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 *result; // rax
  __int64 *v5; // r14
  _RTL_SRWLOCK *v6; // rcx
  _RTL_SRWLOCK *v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rdx

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 48));
  for ( i = *(__int64 **)(qword_1801C6200 + 32); i != (__int64 *)(qword_1801C6200 + 32); i = (__int64 *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i + 8) == a1 )
    {
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 48));
  result = (__int64 *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v5 = result;
  if ( result )
  {
    *(__int64 *)((char *)result + 4) = 0LL;
    *(__int64 *)((char *)result + 12) = 0LL;
    *((_DWORD *)result + 5) = 0;
    *((_DWORD *)result + 11) = 0;
    *(_DWORD *)result = 3148051;
    result[3] = 0LL;
    v6 = (_RTL_SRWLOCK *)(qword_1801C6200 + 48);
    *((_DWORD *)result + 10) = a1;
    result[4] = 1LL;
    RtlAcquireSRWLockExclusive(v6);
    v7 = (_RTL_SRWLOCK *)qword_1801C6200;
    v8 = *(__int64 **)(qword_1801C6200 + 32);
    v9 = qword_1801C6200 + 32;
    while ( v8 != (__int64 *)v9 )
    {
      v10 = v8 - 1;
      if ( *((_DWORD *)v8 + 8) == a1 )
      {
        if ( _InterlockedIncrement64(v10 + 4) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 48));
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
        return v10;
      }
      v8 = (__int64 *)*v8;
    }
    v11 = *(__int64 ***)(qword_1801C6200 + 40);
    v12 = v5 + 1;
    if ( *v11 != (__int64 *)v9 )
      __fastfail(3u);
    *v12 = v9;
    v5[2] = (__int64)v11;
    *v11 = v12;
    *(_QWORD *)(v9 + 8) = v12;
    RtlReleaseSRWLockExclusive(v7 + 6);
    return v5;
  }
  return result;
}

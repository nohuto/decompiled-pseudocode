/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18006F2E0
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpCreateSerializationGroup(int a1)
{
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  volatile signed __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 **v12; // rax
  __int64 *v13; // rdx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 48));
  for ( i = *(__int64 **)(qword_1801C7200 + 32); i != (__int64 *)(qword_1801C7200 + 32); i = (__int64 *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i + 8) == a1 )
    {
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 48));
      return (__int64)v3;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 48));
  result = RtlAllocateHeap_0();
  v6 = result;
  if ( result )
  {
    *(_QWORD *)(result + 4) = 0LL;
    *(_QWORD *)(result + 12) = 0LL;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)result = 3148051;
    *(_QWORD *)(result + 24) = 0LL;
    v7 = (volatile signed __int64 *)(qword_1801C7200 + 48);
    *(_DWORD *)(result + 40) = a1;
    *(_QWORD *)(result + 32) = 1LL;
    RtlAcquireSRWLockExclusive(v7, v5);
    v8 = qword_1801C7200;
    v9 = *(__int64 **)(qword_1801C7200 + 32);
    v10 = qword_1801C7200 + 32;
    while ( v9 != (__int64 *)v10 )
    {
      v11 = v9 - 1;
      if ( *((_DWORD *)v9 + 8) == a1 )
      {
        if ( _InterlockedIncrement64(v11 + 4) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 48));
        RtlFreeHeap_0();
        return (__int64)v11;
      }
      v9 = (__int64 *)*v9;
    }
    v12 = *(__int64 ***)(qword_1801C7200 + 40);
    v13 = (__int64 *)(v6 + 8);
    if ( *v12 != (__int64 *)v10 )
      __fastfail(3u);
    *v13 = v10;
    *(_QWORD *)(v6 + 16) = v12;
    *v12 = v13;
    *(_QWORD *)(v10 + 8) = v13;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 48));
    return v6;
  }
  return result;
}

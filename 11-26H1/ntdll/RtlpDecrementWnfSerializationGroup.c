/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x18008E764
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18008E680 (RtlpDereferenceWnfUserSubscription.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpDecrementWnfSerializationGroup(volatile signed __int64 *BaseAddress)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  volatile signed __int64 **v5; // rdx
  PVOID *v6; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 48));
  v2 = _InterlockedExchangeAdd64(BaseAddress + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (volatile signed __int64 **)*((_QWORD *)BaseAddress + 1);
    if ( v5[1] != BaseAddress + 1 || (v6 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v6 != BaseAddress + 1) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (volatile signed __int64 *)v6;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 48));
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 48));
  }
}

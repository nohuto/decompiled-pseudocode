/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x180013650
 * Callers:
 *     RtlpHeapTrkFindStack @ 0x180012C10 (RtlpHeapTrkFindStack.c)
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180014484 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1801084B4 (RtlpHeapTrkDumpStacks.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

char __fastcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  char *v1; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rax
  volatile signed __int32 **v4; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v4 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = &SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = a1;
        break;
      }
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  if ( v1 )
  {
    *v1 |= 2u;
    if ( v1[7] < 0 )
    {
      v6[1] = 0LL;
      v6[0] = (v1 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))NtSetInformationThread)(-2LL, 56LL, v6, 16LL);
    }
    *(_QWORD *)v1 = 0LL;
  }
  return 0;
}

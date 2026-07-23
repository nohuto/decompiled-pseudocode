/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x18005ED80
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpHeapTrkFindStack @ 0x18005E340 (RtlpHeapTrkFindStack.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18005FBB4 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x180107EB4 (RtlpHeapTrkDumpStacks.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rax
  PRTL_SRWLOCK *v4; // r8
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v4 = (PRTL_SRWLOCK *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = &SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = SRWLock;
        break;
      }
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
    return 1;
  if ( v1 )
  {
    *v1 |= 2u;
    if ( v1[7] < 0 )
    {
      ThreadInformation[1] = 0LL;
      ThreadInformation[0] = (v1 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
    }
    *(_QWORD *)v1 = 0LL;
  }
  return 0;
}

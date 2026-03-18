/*
 * XREFs of PspScheduleEnforcementWorker @ 0x14077BE1C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100000u);
  _m_prefetchw(&PsAltSystemCallRegistrationLock.ExpectedRunTime);
  if ( (_InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ExpectedRunTime, 6u) & 4) == 0 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SchedulingGroup, DelayedWorkQueue);
}

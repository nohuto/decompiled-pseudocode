/*
 * XREFs of PspScheduleEnforcementWorker @ 0x14077EA5C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140A05C20 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100000u);
  _m_prefetchw(&PsAltSystemCallRegistrationLock.ApcStateFill[8]);
  if ( (_InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ApcStateFill[8], 6u) & 4) == 0 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.Teb, DelayedWorkQueue);
}

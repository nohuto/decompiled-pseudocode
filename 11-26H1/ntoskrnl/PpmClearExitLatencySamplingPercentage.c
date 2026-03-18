/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140512208
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 */

LONG __fastcall PpmClearExitLatencySamplingPercentage(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, a2, a3);
  if ( stru_140E66FF0.ResourceIndex )
  {
    stru_140E66FF0.ResourceIndex = 0;
    HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) = 0;
  }
  return PpmReleaseLock(&qword_140F123A0);
}

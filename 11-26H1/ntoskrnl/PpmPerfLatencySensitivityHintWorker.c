/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x1404BBCD0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmPerfLatencySensitivityHintWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  HIDWORD(stru_140F11D08.UserWaitTime) = 0;
  return PpmCheckCustomRun(3LL);
}

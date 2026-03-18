/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x1404C7670
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C76FC (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckPausePpmEngineForSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC0938 = 1;
  PopSleepstudySessionLock.WaitBlockFill6[96] = 1;
  PpmCheckReInit();
  return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
}

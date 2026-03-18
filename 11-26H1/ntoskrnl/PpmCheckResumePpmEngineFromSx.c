/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x1404C76B4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C76FC (PpmPerfUpdateQosDisableReasons.c)
 *     PpmHeteroReinitializeHgsSupport @ 0x1404C7794 (PpmHeteroReinitializeHgsSupport.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckResumePpmEngineFromSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PpmHeteroReinitializeHgsSupport();
  PopSleepstudySessionLock.WaitBlockFill6[96] = 0;
  PpmCheckReInit();
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC0938 = 0;
  return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
}

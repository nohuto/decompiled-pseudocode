/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C100C (PpmPerfUpdateQosDisableReasons.c)
 *     PpmHeteroReinitializeHgsSupport @ 0x1404C10A4 (PpmHeteroReinitializeHgsSupport.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckResumePpmEngineFromSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PpmHeteroReinitializeHgsSupport();
  PpmCheckForceDisarm = 0;
  PpmCheckReInit();
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC1938 = 0;
  return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
}

/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x1404C0F80
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C100C (PpmPerfUpdateQosDisableReasons.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckPausePpmEngineForSx(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140FC1938 = 1;
  PpmCheckForceDisarm = 1;
  PpmCheckReInit();
  return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
}

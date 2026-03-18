/*
 * XREFs of EtwpTimeProfileStart @ 0x1408280C8
 * Callers:
 *     EtwTimeProfileReset @ 0x1408277CC (EtwTimeProfileReset.c)
 *     EtwpEnableKernelTrace @ 0x14095ACA0 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeStartProfile @ 0x1405F32A8 (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x1407BAD28 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1407BAEC8 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(&EtwpSecurityLock.CurrentRunTime, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)&EtwpSecurityLock.CurrentRunTime);
}

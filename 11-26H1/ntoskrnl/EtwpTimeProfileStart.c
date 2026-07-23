/*
 * XREFs of EtwpTimeProfileStart @ 0x14082E308
 * Callers:
 *     EtwTimeProfileReset @ 0x14082DA0C (EtwTimeProfileReset.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x1407BDD88 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1407BDF28 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(&stru_140F03830.1008, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)&stru_140F03830.1008);
}

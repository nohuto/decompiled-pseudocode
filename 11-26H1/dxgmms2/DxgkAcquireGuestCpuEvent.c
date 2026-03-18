/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x14004CAE0
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[93])();
}

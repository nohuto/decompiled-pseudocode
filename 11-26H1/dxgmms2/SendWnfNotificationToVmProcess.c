/*
 * XREFs of SendWnfNotificationToVmProcess @ 0x1400448C4
 * Callers:
 *     SendWnfNotificationToProcess @ 0x14010CA18 (SendWnfNotificationToProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendWnfNotificationToVmProcess(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, void *, __int64))DxgCoreInterface[84])(
           a1,
           &WNF_DX_VIDMM_TRIM_NOTIFICATION,
           24LL);
}

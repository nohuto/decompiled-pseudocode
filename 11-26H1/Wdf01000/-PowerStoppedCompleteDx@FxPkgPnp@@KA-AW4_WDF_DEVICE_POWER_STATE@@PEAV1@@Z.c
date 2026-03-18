/*
 * XREFs of ?PowerStoppedCompleteDx@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerStoppedCompleteDx(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  return 842LL;
}

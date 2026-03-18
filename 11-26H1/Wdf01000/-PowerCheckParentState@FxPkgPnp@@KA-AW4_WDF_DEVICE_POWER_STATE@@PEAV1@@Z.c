/*
 * XREFs of ?PowerCheckParentState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140074740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerCheckParentState(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  unsigned __int8 waitForParentOn; // [rsp+30h] [rbp+8h] BYREF

  v1 = This->__vftable;
  waitForParentOn = 0;
  if ( v1->PowerCheckParentOverload(This, &waitForParentOn) < 0 )
    return 851LL;
  else
    return waitForParentOn != 0 ? 815 : 819;
}

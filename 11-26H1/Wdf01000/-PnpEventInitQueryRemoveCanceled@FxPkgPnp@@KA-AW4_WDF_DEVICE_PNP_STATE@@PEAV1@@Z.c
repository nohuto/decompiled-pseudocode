/*
 * XREFs of ?PnpEventInitQueryRemoveCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitQueryRemoveCanceled(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  irp.m_Irp = This->m_PendingPnPIrp;
  v1 = This->__vftable;
  This->m_PendingPnPIrp = 0LL;
  v1->FireAndForgetIrp(This, &irp);
  return 261LL;
}

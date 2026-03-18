/*
 * XREFs of ?PnpEventInitQueryRemove@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A39B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitQueryRemove(FxPkgPnp *This)
{
  _IRP *m_Irp; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  irp.m_Irp = This->m_PendingPnPIrp;
  m_Irp = irp.m_Irp;
  This->m_PendingPnPIrp = 0LL;
  m_Irp->IoStatus.Status = 0;
  This->FireAndForgetIrp(This, &irp);
  return 314LL;
}

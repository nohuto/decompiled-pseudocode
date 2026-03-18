/*
 * XREFs of ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140022238
 * Callers:
 *     ?_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140022220 (-_PnpSurpriseRemoval@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400233B0 (-_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x140022274 (-SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpSurpriseRemoval(FxPkgPnp *this, FxIrp *Irp)
{
  unsigned __int8 v3; // r8

  Irp->m_Irp->IoStatus.Status = 0;
  FxPkgPnp::SetPendingPnpIrp(this, Irp, 1u);
  FxPkgPnp::PnpProcessEvent(this, PnpEventSurpriseRemove, v3);
  return 259LL;
}

/*
 * XREFs of ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400233B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140022238 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1400233EC (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::_PnpSurpriseRemoval(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceDescriptionEntry::DeviceSurpriseRemoved((FxDeviceDescriptionEntry *)This[1].m_Globals);
  return FxPkgPnp::PnpSurpriseRemoval(This, Irp);
}

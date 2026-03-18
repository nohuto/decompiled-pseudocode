/*
 * XREFs of ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x140039960
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x140039540 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x14007E080 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6DB8 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x140039B18 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::DeleteDevice(FxPkgPnp *this)
{
  FxDevice::Destroy(this->m_Device);
  this->m_DeviceBase->DeleteObject(this->m_DeviceBase);
}

/*
 * XREFs of ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x14006E314
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DCE0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DFE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x14006E1A4 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDeviceInterface::SetState(FxDeviceInterface *this, unsigned __int8 State)
{
  _UNICODE_STRING *p_m_SymbolicLinkName; // rcx

  this->m_State = State;
  p_m_SymbolicLinkName = &this->m_SymbolicLinkName;
  if ( p_m_SymbolicLinkName->Buffer )
    IoSetDeviceInterfaceState(p_m_SymbolicLinkName, State);
}

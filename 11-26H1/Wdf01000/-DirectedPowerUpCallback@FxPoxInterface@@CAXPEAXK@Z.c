/*
 * XREFs of ?DirectedPowerUpCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1400AB490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x1400416B4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1400419C8 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::DirectedPowerUpCallback(FxPoxInterface *Context, unsigned int Flags)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8

  m_PkgPnp = Context->m_PkgPnp;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  m_Globals = m_PkgPnp->m_Globals;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_DeviceBase->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(
    m_Globals,
    4u,
    0xCu,
    0x14u,
    WPP_PoxInterfaceKm_cpp_Traceguids,
    _a1,
    m_DeviceBase->m_DeviceObject.m_DeviceObject);
  _InterlockedExchange(&Context->m_DirectedTransitionActive, 1);
  FxPkgPnp::SaveRequestD0IrpReasonHint(Context->m_PkgPnp, 13);
  FxPoxInterface::DprProcessEventFromPoxCallback(Context, DprEventPoxDirectedPowerUp);
}

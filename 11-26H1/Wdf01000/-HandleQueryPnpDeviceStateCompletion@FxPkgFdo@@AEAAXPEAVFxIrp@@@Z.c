/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1400698A4
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140069810 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqdq @ 0x140069AAC (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x140069BE8 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a3; // rdx
  bool v8; // zf
  _DEVICE_OBJECT *_a4; // rax
  _FX_DRIVER_GLOBALS *v10; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  globals = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information);
  Irp->m_Irp->IoStatus.Information = globals;
  m_DeviceBase = this->m_DeviceBase;
  _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v8 = m_DeviceBase->m_ObjectSize == 0;
  _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( v8 )
    _a3 = 0LL;
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    (unsigned __int8)_a3,
    globals,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    _a4,
    globals,
    Irp->m_Irp);
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
    WPP_IFR_SF_(v10, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}

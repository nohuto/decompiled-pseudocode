/*
 * XREFs of ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x140079D88
 * Callers:
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x140064520 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 *     ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x140079D70 (-QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::AllocateWorkItemForSetDeviceFailed(
        FxPkgPnp *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  signed int _a1; // eax
  unsigned int v7; // edi

  if ( this->m_SetDeviceFailedAttemptRestartWorkItem )
  {
    WPP_IFR_SF_(this->m_Globals, 4u, 0xCu, 0xAu, WPP_FxPkgPnp_cpp_Traceguids);
    return 0LL;
  }
  else
  {
    _a1 = FxSystemWorkItem::_Create(
            this->m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SetDeviceFailedAttemptRestartWorkItem,
            a4);
    v7 = _a1;
    if ( _a1 < 0 )
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxPkgPnp_cpp_Traceguids, _a1);
    return v7;
  }
}

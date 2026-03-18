/*
 * XREFs of ?InvokeClient@FxPowerDeviceArmWakeFromS0@@MEAAJXZ @ 0x140070790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int (__fastcall *__fastcall FxPowerDeviceArmWakeFromS0::InvokeClient(FxPowerDeviceArmWakeFromS0 *this))(WDFDEVICE__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *); // rax
  signed int _a3; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    if ( _a3 < 0 )
      WPP_IFR_SF_qqd(
        this->m_PkgPnp->m_Globals,
        2u,
        0xCu,
        0x1Cu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
  }
  return result;
}

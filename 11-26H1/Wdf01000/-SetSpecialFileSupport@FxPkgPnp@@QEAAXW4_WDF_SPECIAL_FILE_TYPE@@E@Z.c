/*
 * XREFs of ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x140081A38
 * Callers:
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140081070 (imp_WdfDeviceSetSpecialFileSupport.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x140081AC0 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 */

void __fastcall FxPkgPnp::SetSpecialFileSupport(FxPkgPnp *this, unsigned int FileType, unsigned __int8 Supported)
{
  _DEVICE_USAGE_NOTIFICATION_TYPE v3; // ecx
  _WDF_SPECIAL_FILE_TYPE v4; // eax
  char v5; // r8
  __int64 v6; // r10

  if ( FileType == 1 || FileType == 2 || FileType == 3 || FileType == 4 || FileType == 5 || FileType == 6 )
  {
    v3 = FileType;
  }
  else
  {
    if ( FileType != 7 || !unk_1400C90DB )
    {
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x24u, WPP_FxPkgPnp_cpp_Traceguids, FileType);
      return;
    }
    v3 = DeviceUsageTypeInlineCryptoEngine;
  }
  v4 = FxPkgPnp::_UsageToSpecialType(v3);
  *(_BYTE *)((unsigned int)(v4 - 1) + v6 + 273) = v5;
}

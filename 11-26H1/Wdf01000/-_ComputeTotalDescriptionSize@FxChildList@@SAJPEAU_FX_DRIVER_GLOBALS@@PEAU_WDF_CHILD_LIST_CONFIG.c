/*
 * XREFs of ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x140022490
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140022370 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x14008CCBC (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1400A7970 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int16 v10; // r9

  _a1 = Config->IdentificationDescriptionSize;
  *TotalDescriptionSize = 0LL;
  v5 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < _a1 )
  {
    v10 = 56;
LABEL_10:
    v8 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, v10, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return v8;
  }
  _a1 = Config->AddressDescriptionSize;
  v6 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 < _a1 )
  {
    v10 = 57;
    goto LABEL_10;
  }
  v7 = -1LL;
  if ( v5 + 88 >= 0x58 )
    v7 = v5 + 88;
  v8 = v5 >= 0xFFFFFFFFFFFFFFA8uLL ? 0xC0000095 : 0;
  *TotalDescriptionSize = v7;
  if ( v5 + 88 < 0x58 )
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0x3Au, WPP_FxChildList_cpp_Traceguids, v8);
    return v8;
  }
  if ( v7 + v6 < v7 )
  {
    *TotalDescriptionSize = -1LL;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0x3Bu, WPP_FxChildList_cpp_Traceguids, 0xC0000095);
    return 3221225621LL;
  }
  else
  {
    *TotalDescriptionSize = v7 + v6;
    return 0LL;
  }
}

/*
 * XREFs of ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x14008CCBC
 * Callers:
 *     imp_WdfChildListCreate @ 0x14008B4F0 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x140091130 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 * Callees:
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x140022490 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 */

__int64 __fastcall FxChildList::_ValidateConfig(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int16 v3; // r9

  if ( !Config )
  {
    v3 = 52;
LABEL_3:
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, v3, WPP_FxChildList_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  if ( Config->Size == 96 )
  {
    if ( !Config->IdentificationDescriptionSize )
    {
      v3 = 54;
      goto LABEL_3;
    }
    if ( !Config->EvtChildListCreateDevice )
    {
      v3 = 55;
      goto LABEL_3;
    }
    return FxChildList::_ComputeTotalDescriptionSize(FxDriverGlobals, Config, TotalDescriptionSize);
  }
  else
  {
    WPP_IFR_SF_DDd(
      FxDriverGlobals,
      (unsigned __int8)Config,
      0xCu,
      0x35u,
      WPP_FxChildList_cpp_Traceguids,
      0x60u,
      Config->Size,
      -1073741820);
    return 3221225476LL;
  }
}

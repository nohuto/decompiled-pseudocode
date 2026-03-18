/*
 * XREFs of imp_WdfDmaEnablerConfigureSystemProfile @ 0x1400A2200
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140089C08 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 */

__int64 __fastcall imp_WdfDmaEnablerConfigureSystemProfile(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *ProfileConfig,
        unsigned int ConfigDirection)
{
  unsigned __int8 v6; // dl
  unsigned int v7; // ebx
  _FX_DRIVER_GLOBALS *v8; // rdi
  unsigned int Size; // eax
  _WDF_DMA_SYSTEM_PROFILE_CONFIG *_a1; // [rsp+28h] [rbp-20h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDmaEnabler = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  if ( !ProfileConfig )
  {
    v7 = -1073741811;
    v8 = pFxDriverGlobals;
    WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xFu, 0x18u, WPP_FxDmaEnablerAPI_cpp_Traceguids, 0xC000000D);
LABEL_7:
    FxVerifierDbgBreakPoint(v8);
    return v7;
  }
  Size = ProfileConfig->Size;
  if ( ProfileConfig->Size != 32 )
  {
    v8 = pFxDriverGlobals;
    v7 = -1073741820;
    WPP_IFR_SF_DDd(pFxDriverGlobals, v6, 0xFu, 0x19u, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, 0x20u, -1073741820);
    goto LABEL_7;
  }
  if ( !ProfileConfig->DmaDescriptor )
  {
    v7 = -1073741811;
    _a1 = ProfileConfig;
    v8 = pFxDriverGlobals;
    WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 0xFu, 0x1Au, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1, -1073741811);
    goto LABEL_7;
  }
  if ( ConfigDirection > 1 )
  {
    v7 = -1073741811;
    WPP_IFR_SF_Dd(pFxDriverGlobals, 2u, 0xFu, 0x1Bu, WPP_FxDmaEnablerAPI_cpp_Traceguids, ConfigDirection, -1073741811);
    return v7;
  }
  return FxDmaEnabler::ConfigureSystemAdapter(pDmaEnabler, ProfileConfig, (_WDF_DMA_DIRECTION)ConfigDirection);
}

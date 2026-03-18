/*
 * XREFs of imp_WdfDmaEnablerGetFragmentLength @ 0x1400A2720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_dq @ 0x140080778 (WPP_IFR_SF_dq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v4; // rbx
  $E4A3ECB67F2D0678F53DA0B3123C8A42 *v6; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  pDmaEnabler = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.MaximumFragmentLength;
  if ( DmaDirection == 1 )
  {
    v6 = ($E4A3ECB67F2D0678F53DA0B3123C8A42 *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v6 = &pDmaEnabler->184;
    return v6->m_SimplexAdapterInfo.MaximumFragmentLength;
  }
  else
  {
    WPP_IFR_SF_dq(pFxDriverGlobals, 2u, 0xFu, 0x16u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
  return v4;
}

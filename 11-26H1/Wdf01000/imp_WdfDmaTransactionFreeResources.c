/*
 * XREFs of imp_WdfDmaTransactionFreeResources @ 0x140086D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140059D40 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1400877F8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _WDF_DMA_PROFILE _a2; // ecx
  int v4; // edx
  __int64 v5; // r8
  FxDmaPacketTransaction *v6; // r9
  __int16 v7; // ax
  const void *v8; // r8
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaPacketTransaction *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( _a2 != WdfDmaProfilePacket && (((_a2 - 3) & 0xFFFFFFFA) != 0 || _a2 == WdfDmaProfileScatterGather64) )
  {
    WPP_IFR_SF_qL(pFxDriverGlobals, 2u, 0xFu, 0x24u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
LABEL_5:
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    return;
  }
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    v7 = *(_WORD *)(v5 + 10);
    v8 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      v8 = 0LL;
    WPP_IFR_SF_qq(pFxDriverGlobals, 2u, v4 + 15, v4 + 37, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v8);
    goto LABEL_5;
  }
  FxDmaPacketTransaction::ReleaseAdapter(v6);
}

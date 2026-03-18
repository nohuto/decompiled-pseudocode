/*
 * XREFs of imp_WdfDmaTransactionStopSystemTransfer @ 0x14007AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qL @ 0x140059D40 (WPP_IFR_SF_qL.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x14007B054 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _WDF_DMA_PROFILE _a2; // ecx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+60h] [rbp+18h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( _a2 == WdfDmaProfileSystem || _a2 == WdfDmaProfileSystemDuplex )
  {
    FxDmaSystemTransaction::StopTransfer((FxDmaSystemTransaction *)pDmaTrans);
  }
  else
  {
    WPP_IFR_SF_qL(pFxDriverGlobals, 2u, 0xFu, 0x27u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}

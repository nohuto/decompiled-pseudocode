/*
 * XREFs of imp_WdfDmaTransactionCancel @ 0x14001E620
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x14001DB58 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall imp_WdfDmaTransactionCancel(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  int v3; // edx
  FxDmaTransactionBase *v4; // r8
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+18h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version == 3 )
    return FxDmaTransactionBase::CancelResourceAllocation(v4);
  WPP_IFR_SF_q(pFxDriverGlobals, 2u, v3 + 15, v3 + 38, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction);
  FxVerifierDbgBreakPoint(pFxDriverGlobals);
  return 0;
}

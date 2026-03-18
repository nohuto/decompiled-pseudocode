/*
 * XREFs of imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x140087390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 RequireSingleTransfer)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 v7; // ax
  const void *_a2; // rcx
  int v9; // eax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+68h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pDmaTrans = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      v7 = *(_WORD *)(v5 + 10);
      _a2 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v7 )
        _a2 = 0LL;
      WPP_IFR_SF_qq(pFxDriverGlobals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
      goto LABEL_6;
    }
    v9 = *(_DWORD *)(v6 + 120);
    if ( v9 != 1 && v9 != 7 && v9 != 2 )
    {
      WPP_IFR_SF_ql(pFxDriverGlobals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v9);
LABEL_6:
      FxVerifierDbgBreakPoint(pFxDriverGlobals);
      return;
    }
    *(_BYTE *)(v6 + 248) = RequireSingleTransfer;
  }
}

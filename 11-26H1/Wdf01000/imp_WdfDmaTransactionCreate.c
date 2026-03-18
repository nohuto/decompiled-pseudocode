/*
 * XREFs of imp_WdfDmaTransactionCreate @ 0x14001DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x14001F144 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140087D14 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1400889F8 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 */

int __fastcall imp_WdfDmaTransactionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMATRANSACTION__ **DmaTransactionHandle)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+58h] [rbp+20h] BYREF

  pDmaEnabler = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler,
    &pFxDriverGlobals);
  v6 = pFxDriverGlobals;
  if ( !DmaTransactionHandle )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  *DmaTransactionHandle = 0LL;
  result = FxValidateObjectAttributes(v6, Attributes, 1u);
  if ( result >= 0 )
  {
    switch ( pDmaEnabler->m_Profile )
    {
      case WdfDmaProfilePacket:
        return FxDmaPacketTransaction::_Create(pFxDriverGlobals, Attributes, pDmaEnabler, DmaTransactionHandle);
      case WdfDmaProfileScatterGather:
        return FxDmaScatterGatherTransaction::_Create(pFxDriverGlobals, Attributes, pDmaEnabler, DmaTransactionHandle);
      case WdfDmaProfilePacket64:
        return FxDmaPacketTransaction::_Create(pFxDriverGlobals, Attributes, pDmaEnabler, DmaTransactionHandle);
      case WdfDmaProfileScatterGather64:
      case WdfDmaProfileScatterGatherDuplex:
      case WdfDmaProfileScatterGather64Duplex:
        return FxDmaScatterGatherTransaction::_Create(pFxDriverGlobals, Attributes, pDmaEnabler, DmaTransactionHandle);
      default:
        if ( (unsigned int)(pDmaEnabler->m_Profile - 7) < 2 )
          return FxDmaSystemTransaction::_Create(pFxDriverGlobals, Attributes, pDmaEnabler, DmaTransactionHandle);
        else
          return -1073741823;
    }
  }
  return result;
}

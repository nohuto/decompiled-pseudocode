/*
 * XREFs of imp_WdfDmaTransactionGetRequest @ 0x140086E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFREQUEST__ *__fastcall imp_WdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  unsigned __int64 v2; // rax
  __int16 v3; // cx
  WDFREQUEST__ *result; // rax
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v2 = (unsigned __int64)pDmaTrans->m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v2 )
    return 0LL;
  v3 = *(_WORD *)(v2 + 10);
  result = (WDFREQUEST__ *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v3 )
    return 0LL;
  return result;
}

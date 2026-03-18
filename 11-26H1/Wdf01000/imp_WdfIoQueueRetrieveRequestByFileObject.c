/*
 * XREFs of imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140011D60 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveRequestByFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFFILEOBJECT__ *FileObject,
        WDFREQUEST__ **OutRequest)
{
  int result; // eax
  WDFREQUEST__ *v7; // rcx
  FxIoQueue *pQueue; // [rsp+30h] [rbp-10h] BYREF
  FxRequest *pOutputRequest; // [rsp+38h] [rbp-8h] BYREF
  void *retaddr; // [rsp+58h] [rbp+18h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+20h] BYREF
  FxFileObject *pFO; // [rsp+78h] [rbp+38h] BYREF

  pQueue = 0LL;
  pOutputRequest = 0LL;
  pFO = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue,
    &pFxDriverGlobals);
  if ( !OutRequest )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
  result = FxIoQueue::GetRequest(pQueue, pFO->m_FileObject.m_FileObject, 0LL, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v7 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  *OutRequest = v7;
  return result;
}

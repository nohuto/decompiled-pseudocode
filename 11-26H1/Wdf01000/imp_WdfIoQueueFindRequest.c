/*
 * XREFs of imp_WdfIoQueueFindRequest @ 0x1400548B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x140054A08 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *TagRequest,
        WDFFILEOBJECT__ *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  _FILE_OBJECT *m_FileObject; // r14
  WDFREQUEST__ **v9; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  unsigned __int64 v12; // rcx
  unsigned int _a1; // eax
  FxFileObject *pFO; // [rsp+40h] [rbp-20h] BYREF
  FxRequest *pTagRequest; // [rsp+48h] [rbp-18h] BYREF
  FxRequest *pOutputRequest; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxIoQueue *pQueue; // [rsp+90h] [rbp+30h] BYREF

  pQueue = 0LL;
  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  pFO = 0LL;
  m_FileObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  v9 = OutRequest;
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( TagRequest )
    FxObjectHandleGetPtr(pQueue->m_Globals, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
  if ( FileObject )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
    m_FileObject = pFO->m_FileObject.m_FileObject;
  }
  if ( Parameters && (_a1 = Parameters->Size, _a1 < 0x28) )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxIoQueueApi_cpp_Traceguids, _a1, -1073741582);
    return -1073741582;
  }
  else
  {
    result = FxIoQueue::PeekRequest(pQueue, pTagRequest, m_FileObject, Parameters, &pOutputRequest);
    if ( result >= 0 && pOutputRequest->m_ObjectSize )
      v12 = (unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v12 = 0LL;
    *v9 = (WDFREQUEST__ *)v12;
  }
  return result;
}

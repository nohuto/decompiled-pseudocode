/*
 * XREFs of imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1400E00A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14004FCF0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008FC24 (McTemplateK0upp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *FoundRequest,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int16 *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v11; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _MCGEN_TRACE_CONTEXT *Context; // rcx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v5 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveFoundRequest)(
         DriverGlobals,
         Queue,
         FoundRequest);
  if ( !v5 )
  {
    v6 = (unsigned __int64)*OutRequest;
    v7 = (unsigned __int64)*OutRequest;
    PPObject = 0LL;
    v8 = (unsigned __int16 *)(~v7 & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (v6 & 1) != 0 )
      v8 = (unsigned __int16 *)((char *)v8 - *v8);
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v8 + 2);
    if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v9, v6, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        Context = (_MCGEN_TRACE_CONTEXT *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          Context = 0LL;
        McTemplateK0upp_EtwWriteTransfer(
          Context,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v5;
}

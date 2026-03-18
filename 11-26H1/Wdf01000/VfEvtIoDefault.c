/*
 * XREFs of VfEvtIoDefault @ 0x1400E4100
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14004FCF0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x14008FC24 (McTemplateK0upp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x14009010C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x140090140 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1400901A8 (VerifyIrqlExit.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoDefault(WDFQUEUE__ *Queue, unsigned __int64 Request)
{
  char *TypedContext; // r15
  void (__fastcall *v5)(WDFQUEUE__ *, unsigned __int64); // rsi
  unsigned __int16 *v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *Context; // r8
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64))*((_QWORD *)TypedContext + 3);
  if ( v5 )
  {
    PPObject = 0LL;
    v6 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (Request & 1) != 0 )
      v6 = (unsigned __int16 *)((char *)v6 - *v6);
    v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v6 + 2);
    if ( (v7->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v7->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v7, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceExtension & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        Context = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          Context = 0LL;
        McTemplateK0upp_EtwWriteTransfer(
          v9,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(v9[2].Logger + 184),
          _Arg2,
          Context);
      }
      v5(Queue, Request);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v5(Queue, Request);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (ULONG_PTR)v5);
    }
  }
}

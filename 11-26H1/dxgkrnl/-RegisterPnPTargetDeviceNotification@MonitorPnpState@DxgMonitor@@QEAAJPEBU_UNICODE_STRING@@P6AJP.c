/*
 * XREFs of ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1403E251C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkGetDeviceObjectPointerSessionAware @ 0x140061A58 (DxgkGetDeviceObjectPointerSessionAware.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x14006A830 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 *     ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x14006D288 (-reset@-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wi.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x140098C30 (--$-9V-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@Y.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x140422F38 (-UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
        DxgMonitor::MonitorPnpState *this,
        PCUNICODE_STRING SourceString,
        struct _DEVICE_OBJECT *a3)
{
  _WORD *v5; // rsi
  __int64 *v6; // rbx
  void *v7; // rcx
  unsigned __int16 v8; // ax
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int DeviceObjectPointerSessionAware; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct _DEVICE_OBJECT *Context; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  NTSTATUS v18; // eax
  unsigned int v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // rbx
  unsigned int v22; // eax
  int updated; // eax
  __int64 v24; // rbx
  unsigned int v25; // eax
  NTSTATUS v26; // eax
  __int64 v27; // rbx
  unsigned int v28; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp+18h] BYREF

  DeviceObject = a3;
  v5 = (_WORD *)((char *)this + 64);
  v6 = (__int64 *)((char *)this + 72);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString) + 24) = this;
  v7 = (void *)*v6;
  WdLogGlobalForLineNumber = 343;
  if ( v7 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    *v6 = 0LL;
  }
  *v5 = 0;
  v8 = SourceString->Length + 2;
  *((_WORD *)this + 33) = v8;
  v9 = operator new[](v8, 0x4D677844u, 256LL);
  *v6 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 363;
    return result;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)this + 4, SourceString);
  if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
         v11,
         (_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(7LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 379;
    return result;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 5,
    0LL);
  DeviceObjectPointerSessionAware = DxgkGetDeviceObjectPointerSessionAware(
                                      (struct _UNICODE_STRING *)this + 4,
                                      v12,
                                      (PVOID *)this + 5,
                                      &DeviceObject);
  LODWORD(v15) = DeviceObjectPointerSessionAware;
  if ( DeviceObjectPointerSessionAware == -1073741772 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 402;
  }
  else if ( DeviceObjectPointerSessionAware >= 0 )
  {
    if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
            v14,
            (_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 417;
    }
    Context = DeviceObject;
    if ( !DeviceObject )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 418;
    }
    AttachedDeviceReference = IoGetAttachedDeviceReference(Context);
    wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 4,
      (__int64)AttachedDeviceReference);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 3,
      0LL);
    v18 = IoRegisterPlugPlayNotification(
            EventCategoryTargetDeviceChange,
            0,
            *((PVOID *)this + 5),
            (PDRIVER_OBJECT)g_pDriverObject,
            (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DXGMONITOR::_PnPTargetDeviceChangeNotification,
            Context,
            (PVOID *)this + 3);
    v15 = v18;
    if ( v18 >= 0 )
    {
      v20 = IoRegisterDeviceInterface(
              *((PDEVICE_OBJECT *)this + 1),
              &GUID_DEVINTERFACE_MONITOR,
              0LL,
              (PUNICODE_STRING)this + 3);
      if ( v20 >= 0 )
      {
        updated = DxgMonitor::MonitorPnpState::UpdatePnPDeviceInterfaceProperties(this);
        if ( updated >= 0 )
        {
          v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)this + 3, 1u);
          if ( v26 < 0 )
          {
            v27 = v26;
            v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
            WdLogSingleEntry2(2LL, v28, v27);
            WdLogGlobalForLineNumber = 499;
          }
        }
        else
        {
          v24 = updated;
          v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
          WdLogSingleEntry2(2LL, v25, v24);
          WdLogGlobalForLineNumber = 482;
        }
      }
      else
      {
        v21 = v20;
        v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
        WdLogSingleEntry2(2LL, v22, v21);
        WdLogGlobalForLineNumber = 467;
      }
      LODWORD(v15) = 0;
      return (unsigned int)v15;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry2(2LL, v19, v15);
    WdLogGlobalForLineNumber = 448;
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
      (DxgkCompositionObject **)this + 5,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, *v6, DeviceObjectPointerSessionAware);
    WdLogGlobalForLineNumber = 412;
  }
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 3);
  return (unsigned int)v15;
}

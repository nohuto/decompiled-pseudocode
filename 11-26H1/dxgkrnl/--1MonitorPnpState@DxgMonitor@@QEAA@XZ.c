/*
 * XREFs of ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1402799D0
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorPnpState@DxgMonitor@@U?$default_delete@VMonitorPnpState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorPnpState@DxgMonitor@@@Z @ 0x14006CAB4 (-reset@-$unique_ptr@VMonitorPnpState@DxgMonitor@@U-$default_delete@VMonitorPnpState@DxgMonitor@@.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140064CAC (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400651AC (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 */

void __fastcall DxgMonitor::MonitorPnpState::~MonitorPnpState(DxgMonitor::MonitorPnpState *this)
{
  void *v2; // rcx
  char *v3; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v4)(PUNICODE_STRING); // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (char *)this + 48;
  v4 = RtlFreeUnicodeString;
  ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v4, &v3);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)this + 5);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)this + 4);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this + 3);
}

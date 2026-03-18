/*
 * XREFs of ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x140277E80
 * Callers:
 *     ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x140275744 (-_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x140277514 (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     _lambda_2fbe1e6675968e3c1c931614a5d80f9c_::operator() @ 0x1402777EC (_lambda_2fbe1e6675968e3c1c931614a5d80f9c_--operator().c)
 *     ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x140279890 (-_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ @ 0x1402782A4 (-OnCleanup@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(
        DxgMonitor::MonitorUsb4State *this,
        char a2)
{
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v3; // rcx

  if ( !a2 )
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 11,
      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 4,
    0LL);
  v3 = (DxgMonitor::Usb4HostRouterPoFxRefv2 *)*((_QWORD *)this + 10);
  if ( v3 )
    DxgMonitor::Usb4HostRouterPoFxRefv2::OnCleanup(v3);
}

/*
 * XREFs of ?IsOemPanelDriverPresent@MonitorPnpState@DxgMonitor@@QEBA_NXZ @ 0x1403E3670
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

bool __fastcall DxgMonitor::MonitorPnpState::IsOemPanelDriverPresent(DxgMonitor::MonitorPnpState *this)
{
  struct _DEVICE_OBJECT *v1; // rax
  bool v2; // bl
  NTSTATUS v3; // eax
  void *DeviceRegKey; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-28h] BYREF

  v1 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 1);
  v2 = 0;
  DeviceRegKey = 0LL;
  if ( v1 && *((_BYTE *)this + 16) && IoOpenDeviceRegistryKey(v1, 2u, 0x20019u, &DeviceRegKey) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"LowerFilters");
    ResultLength = 0;
    v3 = ZwQueryValueKey(
           DeviceRegKey,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    if ( (int)(v3 + 0x80000000) >= 0 )
      v2 = v3 != -1073741772;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 176;
    if ( DeviceRegKey )
      ZwClose(DeviceRegKey);
    return 0;
  }
}

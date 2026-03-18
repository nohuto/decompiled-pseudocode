/*
 * XREFs of ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x14027808C
 * Callers:
 *     ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x140273A04 (-CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064FF4 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::Initalize(USB4_HOSTROUTER_MGR *this)
{
  PVOID Context; // rbx
  NTSTATUS v2; // ebx
  GUID EventCategoryData; // [rsp+40h] [rbp-28h] BYREF

  Context = MONITOR_MGR::_pUsb4Manager;
  EventCategoryData = GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (__int64 *)MONITOR_MGR::_pUsb4Manager,
    0LL);
  v2 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         1u,
         &EventCategoryData,
         (PDRIVER_OBJECT)g_pDriverObject,
         USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification,
         Context,
         (PVOID *)Context);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 487;
  }
  return (unsigned int)v2;
}

/*
 * XREFs of ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403E3788
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1403E1EE0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140006F14 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_a.c)
 *     ?reset@?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x140007020 (-reset@-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@Dxg.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403E398C (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(
        struct _ERESOURCE *this,
        __int64 a2)
{
  __int64 *SharedWaiters; // rcx
  __int64 v4; // rax
  NTSTATUS v5; // ebx
  ULONG v6; // esi
  char i; // r15
  ULONG v8; // edx
  int SubkeyInfoFromRegistry; // edi
  struct _KEY_BASIC_INFORMATION *v10; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v13; // [rsp+38h] [rbp-38h] BYREF
  struct _KEY_BASIC_INFORMATION *v14; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+60h] [rbp-10h]

  SharedWaiters = (__int64 *)this[2].SharedWaiters;
  v17 = *(_DWORD *)L"S";
  LOBYTE(a2) = 1;
  Handle = 0LL;
  v15.Buffer = (wchar_t *)&v16;
  v16 = *(_QWORD *)L"MODES";
  *(_QWORD *)&v15.Length = 786442LL;
  v4 = *SharedWaiters;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, HANDLE *))(v4 + 16))(SharedWaiters, a2, 2LL, &v13);
  if ( v5 >= 0 )
  {
    v5 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, v13, &v15);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 1197;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
      return (unsigned int)v5;
    }
    MonitorResourceLock::AcquireExclusive(this);
    v6 = 0;
    for ( i = 0; ; i = 1 )
    {
      v8 = v6;
      v14 = 0LL;
      ++v6;
      SubkeyInfoFromRegistry = DxgkRetrieveSubkeyInfoFromRegistry(Handle, v8, (void **)&v14);
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v10 = v14;
      SubkeyInfoFromRegistry = DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
                                 (DxgMonitor::MonitorModes *)this,
                                 Handle,
                                 v14);
      if ( SubkeyInfoFromRegistry < 0 )
      {
        wistd::unique_ptr<_KEY_BASIC_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_BASIC_INFORMATION>>::reset(
          (void **)&v14,
          0LL);
        goto LABEL_13;
      }
      if ( v10 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    }
    if ( v14 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
LABEL_13:
    v5 = 0;
    if ( !i )
      v5 = SubkeyInfoFromRegistry;
    ExReleaseResourceLite(this);
    KeLeaveCriticalRegion();
  }
  else
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 1188;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v5;
}

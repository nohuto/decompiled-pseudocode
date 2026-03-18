/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x140419308
 * Callers:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14018CBB4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  NTSTATUS v7; // eax
  PVOID v8; // rcx
  ULONG ValueLength; // [rsp+40h] [rbp+10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp+18h] BYREF
  PVOID ValueData; // [rsp+50h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return 3223126017LL;
  ValueLength = 0;
  (*(void (__fastcall **)(__int64, PVOID *, ULONG *))(*(_QWORD *)v2 + 232LL))(v2, &ValueData, &ValueLength);
  v4 = (__int64 *)*((_QWORD *)this + 15);
  v5 = *v4;
  Path = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, PCWSTR *))(v5 + 16))(v4, 0LL, 1LL, &Path);
  if ( v6 >= 0 )
  {
    if ( ValueLength )
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"BAD_EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"EDID", 3u, ValueData, ValueLength);
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"EDID");
      v7 = RtlWriteRegistryValue(0x40000000u, Path, L"BAD_EDID", 3u, 0LL, 0);
    }
    v6 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1743;
    }
    if ( Path )
      ZwClose((HANDLE)Path);
    v8 = ValueData;
    ValueData = 0LL;
    if ( v8 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1710;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&ValueData);
  }
  return (unsigned int)v6;
}

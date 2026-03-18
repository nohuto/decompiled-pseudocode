/*
 * XREFs of ?WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140270F54
 * Callers:
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1402704C0 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z @ 0x140270A74 (-OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::WriteEdidToRegistry(
        unsigned int a1,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a3)
{
  __int64 v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rdx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  PCWSTR Path[3]; // [rsp+50h] [rbp-18h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v10 = a3;
  v4 = a1;
  Path[0] = 0LL;
  v11 = 0;
  v5 = DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(a1, 0xF003Fu, (void **)Path, &v11);
  if ( v5 >= 0 )
  {
    v6 = Path[0];
    if ( !Path[0] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 148;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"InternalMonEdidHandle", 148LL, 0LL, 0LL, 0LL, 0LL);
      v6 = Path[0];
    }
    v7 = RtlWriteRegistryValue(0x40000000u, v6, L"EDID", 3u, a2, 0x80u);
    if ( v7 >= 0 )
    {
      v8 = RtlWriteRegistryValue(0x40000000u, Path[0], L"Origin", 4u, &v10, 4u);
      if ( v8 < 0 )
      {
        WdLogSingleEntry3(3LL, v8, v4, L"Origin");
        WdLogGlobalForLineNumber = 184;
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, v7, v4, L"EDID");
      WdLogGlobalForLineNumber = 165;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, v5, (unsigned int)v4);
    WdLogGlobalForLineNumber = 145;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)Path);
}

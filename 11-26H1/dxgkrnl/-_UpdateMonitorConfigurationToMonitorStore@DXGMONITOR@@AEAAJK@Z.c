/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x14027FA6C
 * Callers:
 *     ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1402763EC (-_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x140404710 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1403C3A20 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(DXGMONITOR *this, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // edi
  const WCHAR *v5; // r8
  NTSTATUS v6; // eax
  int ValueData; // [rsp+40h] [rbp+8h] BYREF
  PCWSTR Path; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  Path = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&Path,
    0LL);
  v4 = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)((char *)this + 24), 0, (void **)&Path);
  if ( v4 >= 0 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v2, *((unsigned int *)this + 45));
    WdLogGlobalForLineNumber = 1336;
    v5 = (const WCHAR *)*((_QWORD *)this + 4 * v2 + 100);
    ValueData = *(_DWORD *)((char *)this + *((int *)this + 8 * (unsigned int)v2 + 203));
    v6 = RtlWriteRegistryValue(0x40000000u, Path, v5, 4u, &ValueData, 4u);
    v4 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry3(2LL, (unsigned int)v2, *((unsigned int *)this + 45), v6);
      WdLogGlobalForLineNumber = 1353;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
  return (unsigned int)v4;
}

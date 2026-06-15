/*
 * XREFs of DllMain @ 0x180086B0C
 * Callers:
 *     dllmain_dispatch @ 0x1800B1E6C (dllmain_dispatch.c)
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800B84F0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180122CC4 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     WppCleanupUm @ 0x180152CF0 (WppCleanupUm.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // edi
  const struct _GUID *v4; // rcx
  const struct wil::FailureInfo *v5; // rdx
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    g_hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( wil::details::g_pfnTelemetryCallback
      && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioSrvTelemetryProvider::FallbackTelemetryCallback )
    {
      memset_0(v7, 0, 0x98uLL);
      wil::details::WilFailFast((wil::details *)v7, v5);
    }
    wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))AudioSrvTelemetryProvider::FallbackTelemetryCallback;
    dword_1801D6A8C = 1;
    if ( ATL::CAtlBaseModule::m_bInitFailed )
    {
      v3 = 0;
      dword_1801D6A88 = 0;
      dword_1801D6A8C = 0;
    }
    else
    {
      dword_1801D6A88 = 1;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1801D6A8C = 0;
    dword_1801D6A88 = 0;
    if ( g_fEventTracingEnabled )
    {
      EtwUnregisterTraceGuids(qword_18016F020);
      qword_18016F020 = 0LL;
      g_hAEWMITraceHandle = 0LL;
    }
    WppCleanupUm(hinstDLL);
  }
  return v3;
}

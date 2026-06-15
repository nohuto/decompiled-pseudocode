/*
 * XREFs of DllMain @ 0x180027E6C
 * Callers:
 *     dllmain_dispatch @ 0x18002F69C (dllmain_dispatch.c)
 * Callees:
 *     McGenEventRegister_EventRegister @ 0x18002E9FC (McGenEventRegister_EventRegister.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180035C5C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     McGenEventUnregister_EventUnregister @ 0x180047C54 (McGenEventUnregister_EventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v5[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    if ( wil::details::g_pfnTelemetryCallback
      && (void (__fastcall *)(bool, const struct wil::FailureInfo *))wil::details::g_pfnTelemetryCallback != AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback )
    {
      memset_0(v5, 0, 0x98uLL);
      wil::details::WilFailFast((wil::details *)v5, v4);
    }
    wil::details::g_pfnTelemetryCallback = (__int64)AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback;
    McGenEventRegister_EventRegister();
  }
  else if ( !fdwReason )
  {
    McGenEventUnregister_EventUnregister(hinstDLL, fdwReason, lpvReserved);
  }
  return 1;
}

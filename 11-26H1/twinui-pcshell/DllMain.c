/*
 * XREFs of DllMain @ 0x18015E7F8
 * Callers:
 *     dllmain_dispatch @ 0x1802C8D0C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800BD898 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18015E910 (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x18015E93C (McGenEventUnregister_EventUnregister.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     SHFusionUninitialize @ 0x1802C4FBC (SHFusionUninitialize.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator_void_(__cdecl_)(wil::FailureInfo_const_&)_noexcept @ 0x1802D4EA0 (_lambda_778e7cadc9522a09bdc10f3336b42b6d_--operator_void_(__cdecl_)(wil--FailureInfo_const_-)_no.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  __int64 v5; // rax
  REGHANDLE v6; // rcx
  const struct wil::FailureInfo *v7; // rdx
  _QWORD v8[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister_EventRegister(
        hinstDLL,
        fdwReason,
        MICROSOFT_TWINUI_PUBLISHER_Context,
        MICROSOFT_TWINUI_PUBLISHER_Context);
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        v8[0],
        v8[1]);
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1808D4E58);
      hModule = hinstDLL;
      dword_1808DAA10 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      v5 = lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator_void____cdecl___wil::FailureInfo_const____noexcept();
      if ( wil::details::g_pfnLoggingCallback && v5 && wil::details::g_pfnLoggingCallback != v5 )
      {
        memset_0(v8, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v8, v7);
      }
      wil::details::g_pfnLoggingCallback = v5;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    v6 = RegHandle;
    RegHandle = 0LL;
    dword_1808D4E58 = 0;
    EventUnregister(v6);
    SHFusionUninitialize();
  }
  return 1;
}

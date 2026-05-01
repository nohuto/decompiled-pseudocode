/*
 * XREFs of DllMain @ 0x18016EEF0
 * Callers:
 *     dllmain_dispatch @ 0x1802D2088 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180038778 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x18016F038 (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x18016F064 (McGenEventUnregister_EventUnregister.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180295924 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator_void_(__cdecl_)(wil::FailureInfo_const_&)_noexcept @ 0x1802DC290 (_lambda_778e7cadc9522a09bdc10f3336b42b6d_--operator_void_(__cdecl_)(wil--FailureInfo_const_-)_no.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  __int64 (__fastcall *v5)(_QWORD); // rax
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
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180894DC8);
      hModule = hinstDLL;
      dword_18089A340 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      v5 = (__int64 (__fastcall *)(_QWORD))lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator_void____cdecl___wil::FailureInfo_const____noexcept();
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
    dword_180894DC8 = 0;
    EventUnregister(v6);
    if ( g_hActCtx != (HANDLE)-1LL )
    {
      ReleaseActCtx(g_hActCtx);
      g_hActCtx = (HANDLE)-1LL;
    }
    if ( hModule )
      hModule = (HMODULE)-1LL;
  }
  return 1;
}

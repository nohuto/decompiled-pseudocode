/*
 * XREFs of _dynamic_initializer_for__g_fWilCallbacksInstalled__ @ 0x180006770
 * Callers:
 *     <none>
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18020FB1C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void (__fastcall __noreturn *dynamic_initializer_for__g_fWilCallbacksInstalled__())(const struct wil::FailureInfo *)
{
  const struct wil::FailureInfo *v0; // rdx
  void (__fastcall __noreturn *result)(const struct wil::FailureInfo *); // rax
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::details::g_pfnLoggingCallback
    && (void (__fastcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback != WilResultLoggingCallback_MaybeFailFast )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v0);
  }
  result = WilFailFastHook;
  wil::details::g_pfnLoggingCallback = (__int64)WilResultLoggingCallback_MaybeFailFast;
  wil::g_pfnWilFailFast = (__int64)WilFailFastHook;
  return result;
}

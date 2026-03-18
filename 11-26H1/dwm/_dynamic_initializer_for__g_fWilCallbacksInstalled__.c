/*
 * XREFs of _dynamic_initializer_for__g_fWilCallbacksInstalled__ @ 0x140001F40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140005978 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000B7D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void (__fastcall __noreturn *dynamic_initializer_for__g_fWilCallbacksInstalled__())(const struct wil::FailureInfo *)
{
  void (__fastcall __noreturn *result)(const struct wil::FailureInfo *); // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::details::g_pfnLoggingCallback
    && (void (__fastcall *)(const struct wil::FailureInfo *))wil::details::g_pfnLoggingCallback != WilResultLoggingCallback_MaybeFailFast )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  result = WilFailFastHook;
  wil::details::g_pfnLoggingCallback = (__int64)WilResultLoggingCallback_MaybeFailFast;
  wil::g_pfnWilFailFast = (__int64)WilFailFastHook;
  return result;
}

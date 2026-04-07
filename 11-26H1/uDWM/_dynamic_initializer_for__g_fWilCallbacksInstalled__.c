/*
 * XREFs of _dynamic_initializer_for__g_fWilCallbacksInstalled__ @ 0x1800028A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *dynamic_initializer_for__g_fWilCallbacksInstalled__())(const struct wil::FailureInfo *)
{
  void (__fastcall __noreturn *result)(const struct wil::FailureInfo *); // rax

  result = WilFailFastHook;
  wil::g_pfnWilFailFast = (__int64)WilFailFastHook;
  return result;
}

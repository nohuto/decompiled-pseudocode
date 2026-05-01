/*
 * XREFs of IsGamingFullScreenExperienceSupported$catch$4 @ 0x180010699
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000B370 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall IsGamingFullScreenExperienceSupported_catch_4(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 40), (void *)0xDE, a3, a4);
  return 0LL;
}

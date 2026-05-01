/*
 * XREFs of _GamingOverlayExperienceManager::WndProc_::_1_::catch$3 @ 0x1806E590D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18034DCEC (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WndProc_::_1_::catch_3(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 280),
    (unsigned __int16 *)0x33E,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    "Exception in WM_HOOKWINEVENT handler",
    v3);
  return 0LL;
}

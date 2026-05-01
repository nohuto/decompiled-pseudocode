/*
 * XREFs of _CStartExperienceManager::SetDockedStartController_::_1_::catch$18 @ 0x1806E7290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$DockedStartController_CallbackRegistrationFailed@AEAY0BK@$$CBGAEAJ@StartExperienceManagerLogging@@SAXAEAY0BK@$$CBGAEAJ@Z @ 0x180386A24 (--$DockedStartController_CallbackRegistrationFailed@AEAY0BK@$$CBGAEAJ@StartExperienceManagerLogg.c)
 */

__int64 __fastcall CStartExperienceManager::SetDockedStartController_::_1_::catch_18(wil *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx

  v3 = wil::ResultFromCaughtException(a1);
  *(_DWORD *)(a2 + 96) = v3;
  StartExperienceManagerLogging::DockedStartController_CallbackRegistrationFailed<unsigned short const (&)[26],long &>(v4);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 88),
      (void *)0x601,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}

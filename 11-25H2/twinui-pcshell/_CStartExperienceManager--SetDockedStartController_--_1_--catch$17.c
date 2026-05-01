/*
 * XREFs of _CStartExperienceManager::SetDockedStartController_::_1_::catch$17 @ 0x1806BF35B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$DockedStartController_CallbackRegistrationFailed@AEAY09$$CBGAEAJ@StartExperienceManagerLogging@@SAXAEAY09$$CBGAEAJ@Z @ 0x18037EA00 (--$DockedStartController_CallbackRegistrationFailed@AEAY09$$CBGAEAJ@StartExperienceManagerLoggin.c)
 */

__int64 __fastcall CStartExperienceManager::SetDockedStartController_::_1_::catch_17(wil *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx

  v3 = wil::ResultFromCaughtException(a1);
  *(_DWORD *)(a2 + 96) = v3;
  StartExperienceManagerLogging::DockedStartController_CallbackRegistrationFailed<unsigned short const (&)[10],long &>(v4);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 88),
      (void *)0x617,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}

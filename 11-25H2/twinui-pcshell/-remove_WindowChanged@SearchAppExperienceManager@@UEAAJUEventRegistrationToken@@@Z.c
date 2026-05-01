/*
 * XREFs of ?remove_WindowChanged@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18039DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::remove_WindowChanged(
        SearchAppExperienceManager *this,
        struct EventRegistrationToken a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A9,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}

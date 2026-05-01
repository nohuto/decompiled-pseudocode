/*
 * XREFs of ?IsViewVisible@CUndockedSearchAppExperienceManagerConfig@@UEAA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180218CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall CUndockedSearchAppExperienceManagerConfig::IsViewVisible(
        CUndockedSearchAppExperienceManagerConfig *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v2; // rax
  HRESULT WindowAttribute; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  v2 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
  if ( !v2 )
    return 0;
  pvAttribute = 1;
  WindowAttribute = DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)WindowAttribute);
  return pvAttribute == 0;
}

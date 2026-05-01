/*
 * XREFs of ?ExcludeFromPeek@CUndockedSearchAppExperienceManagerConfig@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A7CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CUndockedSearchAppExperienceManagerConfig::ExcludeFromPeek(
        CUndockedSearchAppExperienceManagerConfig *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v2; // rax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+40h] [rbp+18h] BYREF

  pvAttribute = 1;
  v2 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
  if ( !v2 )
    return 0LL;
  v3 = DwmSetWindowAttribute(v2, 0xCu, &pvAttribute, 4u);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x297,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

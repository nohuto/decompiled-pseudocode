/*
 * XREFs of ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x18036E3C0
 * Callers:
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D670 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801F9848 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetZBand(ExperienceManagerUtils **this)
{
  char *v2; // rcx
  int v3; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  unsigned int v5; // ebx
  HWND v7; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)(this + 15);
  if ( !*((_QWORD *)v2 + 3) )
    return 0LL;
  v3 = CSingleViewShellExperience::SetWindowBand((__int64)v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[18], v4);
  if ( v7 && !SetWindowPos(v7, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6BA,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
             v8);
  else
    return 0LL;
}

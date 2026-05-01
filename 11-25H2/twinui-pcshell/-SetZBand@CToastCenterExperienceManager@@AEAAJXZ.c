/*
 * XREFs of ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802C6C9C
 * Callers:
 *     ?OnIdleStateFlagsChanged@CToastCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1802012B0 (-OnIdleStateFlagsChanged@CToastCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375620 (-OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180011D7C (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetZBand(CToastCenterExperienceManager *this)
{
  int v2; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  unsigned int v4; // edi
  HWND v6; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_QWORD *)this + 16) )
    return 0LL;
  v2 = CSingleViewShellExperience::SetWindowBand((__int64)this + 104);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x500,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 16), v3);
  if ( v6 && !SetWindowPos(v6, (HWND)1, 0, 0, 0, 0, 0x13u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x506,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
             v7);
  else
    return 0LL;
}

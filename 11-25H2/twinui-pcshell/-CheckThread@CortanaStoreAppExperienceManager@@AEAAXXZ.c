/*
 * XREFs of ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x180398E1C
 * Callers:
 *     ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x180399300 (-HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z.c)
 *     ?InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803993F0 (-InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180399450 (-InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_.c)
 *     ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x180399CB0 (-WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CortanaStoreAppExperienceManager::CheckThread(CortanaStoreAppExperienceManager *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 84) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      v1);
}

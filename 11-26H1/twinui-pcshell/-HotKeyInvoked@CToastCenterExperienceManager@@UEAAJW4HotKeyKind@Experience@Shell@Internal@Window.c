/*
 * XREFs of ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18037C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18001BB64 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E1C (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  CToastCenterExperienceManager *v2; // rbx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 1 )
  {
    v2 = (CToastCenterExperienceManager *)(a1 - 16);
    if ( *(_DWORD *)(a1 - 16 + 144) == 2 )
    {
      v3 = CSingleViewShellExperience::BringToForeground((CSingleViewShellExperience *)(a1 + 88));
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x230,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      v4 = CToastCenterExperienceManager::RaisePropertyChangedEvent(v2, L"Active", 1);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x231,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  return 0LL;
}

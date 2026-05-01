/*
 * XREFs of ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1802067D4 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18037972C (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18037AB6C (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18037AD90 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewHidden(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CPeopleBarFlyoutExperienceManager *v2; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CPeopleBarFlyoutExperienceManager *)((char *)this - 64);
  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    0);
  CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(v2, 0);
  updated = CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(v2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CPeopleBarFlyoutExperienceManager *)((char *)this + 600));
  return 0LL;
}

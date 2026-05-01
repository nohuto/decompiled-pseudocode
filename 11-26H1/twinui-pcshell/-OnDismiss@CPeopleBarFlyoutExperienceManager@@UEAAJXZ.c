/*
 * XREFs of ?OnDismiss@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1803816C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1803810B0 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  CPeopleBarFlyoutExperienceManager *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CPeopleBarFlyoutExperienceManager *)((char *)this - 16);
  *((_DWORD *)v1 + 178) = 2;
  v2 = CPeopleBarFlyoutExperienceManager::HideFlyout(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

/*
 * XREFs of ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18035EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803609C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 136) == 2 )
    {
      v2 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)(a1 - 32));
      if ( v2 < 0 )
      {
        v3 = 488LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v3,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
        return (unsigned int)v2;
      }
    }
    else
    {
      v2 = CActionCenterExperienceManager::Show((CActionCenterExperienceManager *)(a1 - 32));
      if ( v2 < 0 )
      {
        v3 = 492LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}

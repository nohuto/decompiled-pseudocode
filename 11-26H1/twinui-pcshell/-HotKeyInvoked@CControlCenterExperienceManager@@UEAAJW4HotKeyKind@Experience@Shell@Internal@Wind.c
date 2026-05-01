/*
 * XREFs of ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18036CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180112D10 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180172130 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 128) == 2 )
    {
      if ( *(_BYTE *)(a1 + 730) )
      {
        v2 = CControlCenterExperienceManager::Show(
               (CControlCenterExperienceManager *)a1,
               0LL,
               0,
               1,
               1u,
               1u,
               0LL,
               0LL,
               0LL);
        if ( v2 < 0 )
        {
          v3 = 513LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v3,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v2);
          return (unsigned int)v2;
        }
      }
      else
      {
        v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)a1, 0LL, 0);
        if ( v2 < 0 )
        {
          v3 = 517LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v2 = CControlCenterExperienceManager::Show(
             (CControlCenterExperienceManager *)a1,
             0LL,
             0,
             1,
             1u,
             1u,
             0LL,
             0LL,
             0LL);
      if ( v2 < 0 )
      {
        v3 = 522LL;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}

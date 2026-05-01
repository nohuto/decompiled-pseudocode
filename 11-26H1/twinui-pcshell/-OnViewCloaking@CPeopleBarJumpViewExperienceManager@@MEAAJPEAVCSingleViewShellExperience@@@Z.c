/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180383A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B0370 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180383850 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v2; // edx
  const RECT *v4; // rcx
  int v5; // ebx
  int v6; // edx
  int v7; // edx
  int MonitorWorkArea; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  struct tagRECT v15; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_DWORD *)this + 65);
  v4 = (const RECT *)((char *)this - 48);
  v5 = 92;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          v5 = 91;
      }
      else
      {
        v5 = 89;
      }
    }
    else
    {
      v5 = 90;
    }
  }
  else
  {
    v5 = 88;
  }
  v15 = 0LL;
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(v4, &v15);
  if ( MonitorWorkArea < 0 )
  {
    v10 = 247LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                      (__int64)this + 352,
                      *((ExperienceManagerUtils **)this + 4),
                      v5 | 0x200000u,
                      v9,
                      v12,
                      v13,
                      v14,
                      (__int64)&v15);
  if ( MonitorWorkArea < 0 )
  {
    v10 = 250LL;
    goto LABEL_13;
  }
  return 0LL;
}

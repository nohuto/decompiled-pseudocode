/*
 * XREFs of ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C3A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B0370 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x1803C55C8 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewCloaking(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CBaseTrayFlyoutExperienceManager *v2; // rbx
  int v3; // edx
  int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (CBaseTrayFlyoutExperienceManager *)((char *)this - 48);
  v3 = *((_DWORD *)this + 80);
  v4 = 81;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 = 80;
      }
      else
      {
        v4 = 78;
      }
    }
    else
    {
      v4 = 79;
    }
  }
  else
  {
    v4 = 77;
  }
  v7 = CExperienceManagerAnimationHelper::Begin(
         (__int64)this + 288,
         *((ExperienceManagerUtils **)this + 6),
         v4 | 0x20000000u,
         (__int64)this,
         v9,
         v10,
         v11,
         (__int64)this + 360);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v7);
  CBaseTrayFlyoutExperienceManager::SetBorderAccent(v2, 0);
  return 0LL;
}

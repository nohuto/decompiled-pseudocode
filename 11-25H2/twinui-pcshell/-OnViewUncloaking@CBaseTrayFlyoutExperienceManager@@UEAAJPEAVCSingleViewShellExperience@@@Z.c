/*
 * XREFs of ?OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BB420
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B92A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x1803BC560 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewUncloaking(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // edx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_DWORD *)this + 80);
  v6 = 81;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          v6 = 79;
      }
      else
      {
        v6 = 77;
      }
    }
    else
    {
      v6 = 80;
    }
  }
  else
  {
    v6 = 78;
  }
  v9 = CExperienceManagerAnimationHelper::Begin(
         (__int64)this + 256,
         *((ExperienceManagerUtils **)this + 6),
         v6 | 0x200000u,
         a4,
         v11,
         v12,
         v13,
         (__int64)this + 360);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18E,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v9);
  CBaseTrayFlyoutExperienceManager::SetBorderAccent((CBaseTrayFlyoutExperienceManager *)((char *)this - 48), 1);
  return 0LL;
}

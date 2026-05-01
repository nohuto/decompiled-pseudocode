/*
 * XREFs of ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180322818
 * Callers:
 *     ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x180231370 (-PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18026C320 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180331270 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180331270.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x1804518CC (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x18052FF44 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B277C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<int>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v4; // bl
  unsigned int v7; // edi
  int v9; // eax
  int v10; // ecx
  const char *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  v15 = HIDWORD(a4);
  v14 = 4;
  v4 = 0;
  *a2 = 0;
  v13 = 0;
  v7 = NtQueryWnfStateData(a1, 0LL, 0LL, &v13, a3, &v14) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    v9 = v13;
    if ( v13 )
    {
      v10 = v14;
      if ( v14 != 4 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x271,
          (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)0x8000FFFFLL,
          (unsigned __int64)"Inconsistent state data size in wnf_query",
          v11);
        v10 = v14;
        *a3 = 0;
        v9 = v13;
      }
      if ( v9 )
      {
        if ( v10 == 4 )
          v4 = 1;
      }
    }
    *a2 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7);
    return v7;
  }
}

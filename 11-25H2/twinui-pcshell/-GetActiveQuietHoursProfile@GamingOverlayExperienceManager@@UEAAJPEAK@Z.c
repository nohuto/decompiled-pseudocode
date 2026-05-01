/*
 * XREFs of ?GetActiveQuietHoursProfile@GamingOverlayExperienceManager@@UEAAJPEAK@Z @ 0x1803447A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18032AFF0 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetActiveQuietHoursProfile(
        GamingOverlayExperienceManager *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v9 = 0;
    v6 = wil::wnf_query_nothrow<unsigned long>((__int64)&WNF_SHEL_QUIETHOURS_ACTIVE_PROFILE_CHANGED, &v9, a2, a4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( !v9 )
        *a2 = 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10BD,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10BA,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

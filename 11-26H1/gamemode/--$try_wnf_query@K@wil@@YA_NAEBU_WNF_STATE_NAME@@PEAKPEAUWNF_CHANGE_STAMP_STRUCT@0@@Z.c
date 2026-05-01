/*
 * XREFs of ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008C88
 * Callers:
 *     IsGamingFullScreenExperienceActive @ 0x18000E500 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800055E4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18000B3B8 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

char __fastcall wil::try_wnf_query<unsigned long>(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // eax
  int v5; // eax
  char v6; // bl
  int v7; // ecx
  char v8; // al
  const char *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  int v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+54h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v13 = HIDWORD(a1);
  v14 = 4;
  v12 = 0;
  v4 = NtQueryWnfStateData(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, 0LL, 0LL, &v12, a2, &v14) | 0x10000000;
  if ( v4 < 0 && v4 != -805306333 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v4);
    return 0;
  }
  v5 = v12;
  v6 = 1;
  if ( !v12 )
    goto LABEL_10;
  v7 = v14;
  if ( v14 != 4 )
  {
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x271,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      (int)"Inconsistent state data size in wnf_query",
      v10);
    v7 = v14;
    *a2 = 0;
    v5 = v12;
  }
  if ( v5 && v7 == 4 )
    v8 = 1;
  else
LABEL_10:
    v8 = 0;
  if ( !v8 )
    return 0;
  return v6;
}

/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800067C8
 * Callers:
 *     MsixvcUpdatePolicyInternal @ 0x1800071EC (MsixvcUpdatePolicyInternal.c)
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000ADF8 (-HasHandheldScreenSize@@YA_NXZ.c)
 *     CanSetGamingFullScreenExperience @ 0x18000E370 (CanSetGamingFullScreenExperience.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000E500 (IsGamingFullScreenExperienceActive.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180002E70 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, (int)a2, a3, 0LL, 0LL, retaddr, v4);
}

/*
 * XREFs of ?SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z @ 0x18035AF58
 * Callers:
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x18035B1C8 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall NexusPolicyManager::SetNexusShellExclusiveWnf(NexusPolicyManager *this, unsigned __int8 a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  v2 = RtlPublishWnfStateData(WNF_GIP_IS_NEXUS_RESTRICTED, 0LL, &v3, 4LL, 0LL) | 0x10000000;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x82,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\NexusPolicyManager.cpp",
      (const char *)(unsigned int)v2);
}

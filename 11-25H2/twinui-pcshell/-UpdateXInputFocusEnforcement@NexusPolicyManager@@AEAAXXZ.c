/*
 * XREFs of ?UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ @ 0x18035B21C
 * Callers:
 *     ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE4C (-OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x18035AFD4 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall NexusPolicyManager::UpdateXInputFocusEnforcement(NexusPolicyManager *this)
{
  int v1; // eax
  BOOL v2; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = IsGamingFullScreenExperienceActive(this) != 0;
  v1 = RtlPublishWnfStateData(WNF_GIP_ENABLE_XINPUT_FOCUS, 0LL, &v2, 4LL, 0LL) | 0x10000000;
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC2,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\NexusPolicyManager.cpp",
      (const char *)(unsigned int)v1);
}

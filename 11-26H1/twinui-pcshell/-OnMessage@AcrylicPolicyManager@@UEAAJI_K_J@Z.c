/*
 * XREFs of ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1802DAEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802A3E84 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1802BF1E0 (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnMessage(AcrylicPolicyManager *this, int a2)
{
  AcrylicPolicyManager *v2; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (AcrylicPolicyManager *)((char *)this - 128);
  if ( a2 == 794 )
    *((_BYTE *)v2 + 353) = AcrylicPolicyManager::_IsHighContrast();
  updated = AcrylicPolicyManager::UpdateAcrylicState(v2, 0);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x100,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}

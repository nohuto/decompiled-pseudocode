/*
 * XREFs of ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x1802DAE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ @ 0x18010A650 (-_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802A3E84 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnCompositionCapabilitiesChanged(AcrylicPolicyManager *this)
{
  AcrylicPolicyManager *v1; // rbx
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (AcrylicPolicyManager *)((char *)this - 144);
  *((_BYTE *)this + 212) = AcrylicPolicyManager::_IsDeviceCapableOfAcrylic();
  updated = AcrylicPolicyManager::UpdateAcrylicState(v1, 0);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}

/*
 * XREFs of ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x1802E1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ @ 0x180214508 (-_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802AB950 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnCompositionCapabilitiesChanged(AcrylicPolicyManager *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 212) = AcrylicPolicyManager::_IsDeviceCapableOfAcrylic();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 144), 0);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}

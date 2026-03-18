/*
 * XREFs of IsAnyDelegationEnabled @ 0x1400B9CA0
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 *     UpdateDelegationTargetForMouseInput @ 0x140216FA0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

bool IsAnyDelegationEnabled()
{
  return *((_DWORD *)InputDelegation::CInputDelegationInfo::GetInstance() + 2) != 0;
}

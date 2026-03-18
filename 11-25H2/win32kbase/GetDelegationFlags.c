/*
 * XREFs of GetDelegationFlags @ 0x1400B9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

__int64 GetDelegationFlags()
{
  return *((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
}

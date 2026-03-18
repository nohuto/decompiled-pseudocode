/*
 * XREFs of GetSavedCursorPosition @ 0x1400BA580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

__int64 __fastcall GetSavedCursorPosition(__int64 a1, __int64 a2)
{
  return *(_QWORD *)((char *)InputDelegation::CInputDelegationInfo::GetInstance(a1, a2) + 12);
}

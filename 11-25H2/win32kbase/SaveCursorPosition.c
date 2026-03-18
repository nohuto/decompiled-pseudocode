/*
 * XREFs of SaveCursorPosition @ 0x140216B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

struct InputDelegation::CInputDelegationInfo *__fastcall SaveCursorPosition(__int64 a1, __int64 a2)
{
  struct InputDelegation::CInputDelegationInfo *result; // rax

  result = InputDelegation::CInputDelegationInfo::GetInstance(a1, a2);
  *(_QWORD *)((char *)result + 12) = a1;
  return result;
}

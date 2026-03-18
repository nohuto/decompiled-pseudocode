/*
 * XREFs of rimOutOfBoundsPolicyUpdateStateAndApply @ 0x14013F4F0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 */

_DWORD *__fastcall rimOutOfBoundsPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *result; // rax

  if ( a3 )
  {
    result = (_DWORD *)RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 8u);
    *(_QWORD *)(a2 + 36) = a4;
  }
  else
  {
    result = (_DWORD *)*(unsigned int *)(a2 + 8);
    if ( ((unsigned __int8)result & 8) != 0 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 8u);
      *(_QWORD *)(a2 + 36) = 0LL;
      result = a5;
      *a5 = 1;
    }
  }
  return result;
}

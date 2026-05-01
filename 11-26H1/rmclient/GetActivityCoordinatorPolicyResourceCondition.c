/*
 * XREFs of GetActivityCoordinatorPolicyResourceCondition @ 0x180019DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetActivityCoordinatorPolicyResourceCondition(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a2 > 7 )
    return 2147942487LL;
  result = 0LL;
  *a3 = *(_DWORD *)(a1 + 4LL * (int)a2);
  return result;
}

/*
 * XREFs of sub_140048068 @ 0x140048068
 * Callers:
 *     sub_1400B2DCF @ 0x1400B2DCF (sub_1400B2DCF.c)
 * Callees:
 *     sub_140006AD0 @ 0x140006AD0 (sub_140006AD0.c)
 */

__int64 __fastcall sub_140048068(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_140006AD0(result);
  return result;
}

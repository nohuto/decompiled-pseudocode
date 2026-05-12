/*
 * XREFs of sub_14006B3C4 @ 0x14006B3C4
 * Callers:
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 *     sub_14006C668 @ 0x14006C668 (sub_14006C668.c)
 *     sub_14006CBC0 @ 0x14006CBC0 (sub_14006CBC0.c)
 *     sub_1400FAFF0 @ 0x1400FAFF0 (sub_1400FAFF0.c)
 *     sub_14010F090 @ 0x14010F090 (sub_14010F090.c)
 *     sub_14012E120 @ 0x14012E120 (sub_14012E120.c)
 *     sub_14012F9F4 @ 0x14012F9F4 (sub_14012F9F4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_14006B3C4(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1314278989 )
      return v2;
  }
  return result;
}

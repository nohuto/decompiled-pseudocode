/*
 * XREFs of sub_1400897B4 @ 0x1400897B4
 * Callers:
 *     sub_1400B3EBA @ 0x1400B3EBA (sub_1400B3EBA.c)
 * Callees:
 *     sub_140089DA0 @ 0x140089DA0 (sub_140089DA0.c)
 */

__int64 __fastcall sub_1400897B4(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_140089DA0(result);
  }
  return result;
}

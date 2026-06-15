/*
 * XREFs of sub_14003ED9C @ 0x14003ED9C
 * Callers:
 *     sub_1400AEF84 @ 0x1400AEF84 (sub_1400AEF84.c)
 * Callees:
 *     sub_140017560 @ 0x140017560 (sub_140017560.c)
 */

__int64 __fastcall sub_14003ED9C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_140017560(result);
  }
  return result;
}

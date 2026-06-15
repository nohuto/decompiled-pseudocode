/*
 * XREFs of sub_140087320 @ 0x140087320
 * Callers:
 *     sub_1400B3E96 @ 0x1400B3E96 (sub_1400B3E96.c)
 * Callees:
 *     sub_140053D30 @ 0x140053D30 (sub_140053D30.c)
 */

__int64 __fastcall sub_140087320(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_140053D30(result);
  }
  return result;
}

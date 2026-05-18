/*
 * XREFs of sub_180095C80 @ 0x180095C80
 * Callers:
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 * Callees:
 *     sub_180095BDC @ 0x180095BDC (sub_180095BDC.c)
 */

__int64 *__fastcall sub_180095C80(__int64 a1)
{
  unsigned int i; // ebx
  __int64 *result; // rax

  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    result = (__int64 *)*(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, i) )
      result = sub_180095BDC((__int64 *)(((unsigned __int64)i << 8) + a1 + 8), ((unsigned __int64)i << 8) + a1 + 3080);
  }
  return result;
}

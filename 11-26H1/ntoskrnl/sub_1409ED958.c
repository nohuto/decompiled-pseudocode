/*
 * XREFs of sub_1409ED958 @ 0x1409ED958
 * Callers:
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     sub_1409EE860 @ 0x1409EE860 (sub_1409EE860.c)
 *     sub_1409EEBF4 @ 0x1409EEBF4 (sub_1409EEBF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409ED958(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}

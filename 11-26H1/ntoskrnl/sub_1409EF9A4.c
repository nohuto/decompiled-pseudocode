/*
 * XREFs of sub_1409EF9A4 @ 0x1409EF9A4
 * Callers:
 *     sub_14088063C @ 0x14088063C (sub_14088063C.c)
 *     sub_1409EF598 @ 0x1409EF598 (sub_1409EF598.c)
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409EF9A4(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}

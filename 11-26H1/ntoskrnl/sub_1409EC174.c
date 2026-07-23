/*
 * XREFs of sub_1409EC174 @ 0x1409EC174
 * Callers:
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 *     sub_1409EBD68 @ 0x1409EBD68 (sub_1409EBD68.c)
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409EC174(volatile signed __int64 *a1)
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

/*
 * XREFs of sub_1409E1478 @ 0x1409E1478
 * Callers:
 *     sub_1409E0B70 @ 0x1409E0B70 (sub_1409E0B70.c)
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409E1478(volatile signed __int64 *a1)
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

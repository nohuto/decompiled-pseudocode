/*
 * XREFs of sub_1800BF890 @ 0x1800BF890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800BF800 @ 0x1800BF800 (sub_1800BF800.c)
 */

__int64 *__fastcall sub_1800BF890(__int64 *lpMem, char a2)
{
  sub_1800BF800(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

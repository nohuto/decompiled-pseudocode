/*
 * XREFs of sub_1800C2EF0 @ 0x1800C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C2A6C @ 0x1800C2A6C (sub_1800C2A6C.c)
 */

__int64 *__fastcall sub_1800C2EF0(__int64 *lpMem, char a2)
{
  sub_1800C2A6C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

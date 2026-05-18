/*
 * XREFs of sub_180025FD0 @ 0x180025FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 */

LPVOID __fastcall sub_180025FD0(LPVOID lpMem, char a2)
{
  sub_180025C5C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

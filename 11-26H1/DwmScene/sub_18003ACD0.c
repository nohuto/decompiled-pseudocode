/*
 * XREFs of sub_18003ACD0 @ 0x18003ACD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 */

LPVOID __fastcall sub_18003ACD0(LPVOID lpMem, char a2)
{
  sub_18003A924((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

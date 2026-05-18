/*
 * XREFs of sub_18002B760 @ 0x18002B760
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18002B48C @ 0x18002B48C (sub_18002B48C.c)
 */

LPVOID __fastcall sub_18002B760(LPVOID lpMem, char a2)
{
  sub_18002B48C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

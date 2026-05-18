/*
 * XREFs of sub_180025F90 @ 0x180025F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180025C28 @ 0x180025C28 (sub_180025C28.c)
 */

LPVOID __fastcall sub_180025F90(LPVOID lpMem, char a2)
{
  sub_180025C28((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}

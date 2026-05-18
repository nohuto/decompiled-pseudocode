/*
 * XREFs of sub_18001025C @ 0x18001025C
 * Callers:
 *     sub_18000E1E4 @ 0x18000E1E4 (sub_18000E1E4.c)
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001025C(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}

/*
 * XREFs of sub_180010238 @ 0x180010238
 * Callers:
 *     sub_18000E16C @ 0x18000E16C (sub_18000E16C.c)
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010238(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 1LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  return v2 + 1;
}

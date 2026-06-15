/*
 * XREFs of sub_14007DCA0 @ 0x14007DCA0
 * Callers:
 *     sub_14007BEA4 @ 0x14007BEA4 (sub_14007BEA4.c)
 *     sub_14007CBB4 @ 0x14007CBB4 (sub_14007CBB4.c)
 * Callees:
 *     sub_14007EA94 @ 0x14007EA94 (sub_14007EA94.c)
 */

__int64 __fastcall sub_14007DCA0(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1[64] )
    result = sub_14007EA94(a2);
  if ( a1[128] )
    result = sub_14007EA94(a2 + 64);
  if ( a1[192] )
    return sub_14007EA94(a2 + 128);
  return result;
}

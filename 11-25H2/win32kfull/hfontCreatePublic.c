/*
 * XREFs of hfontCreatePublic @ 0x1402180C0
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x14008F860 (hfontCreate.c)
 */

__int64 __fastcall hfontCreatePublic(char *a1, int a2)
{
  return hfontCreate(a1, a2, 2, 0LL, 8);
}

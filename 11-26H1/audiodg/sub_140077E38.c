/*
 * XREFs of sub_140077E38 @ 0x140077E38
 * Callers:
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 * Callees:
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14004CF78 @ 0x14004CF78 (sub_14004CF78.c)
 *     sub_140078090 @ 0x140078090 (sub_140078090.c)
 */

BOOL __fastcall sub_140077E38(__int64 a1)
{
  BOOL result; // eax
  void *v3; // rcx

  sub_140078090(a1 + 32);
  result = sub_14004CF78(a1 + 16);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    return sub_14001D6A8(v3);
  return result;
}

/*
 * XREFs of sub_14001DDFC @ 0x14001DDFC
 * Callers:
 *     sub_14001DDC0 @ 0x14001DDC0 (sub_14001DDC0.c)
 * Callees:
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 */

BOOL __fastcall sub_14001DDFC(__int64 a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    result = sub_14001D6A8(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}

/*
 * XREFs of sub_14005B75C @ 0x14005B75C
 * Callers:
 *     sub_14005B7D0 @ 0x14005B7D0 (sub_14005B7D0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

void __fastcall sub_14005B75C(__int64 a1)
{
  sub_140056130((__int64 *)(a1 + 64));
  sub_140003238((__int64 *)(a1 + 56));
  sub_140008C08((void **)(a1 + 48), 0LL);
  *(_DWORD *)(a1 + 44) = -1073741823;
}

/*
 * XREFs of sub_14001003C @ 0x14001003C
 * Callers:
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 *     sub_14000EA58 @ 0x14000EA58 (sub_14000EA58.c)
 */

__int64 __fastcall sub_14001003C(__int64 a1)
{
  __int64 v2; // rdx

  sub_14000E144((_QWORD *)a1);
  sub_14000E334((__int64 *)(a1 + 248));
  sub_140003238((__int64 *)(a1 + 240));
  CoTaskMemFree(*(LPVOID *)(a1 + 192));
  *(_QWORD *)(a1 + 192) = 0LL;
  sub_140003238((__int64 *)(a1 + 184));
  sub_140003238((__int64 *)(a1 + 176));
  sub_140003238((__int64 *)(a1 + 152));
  sub_14000EA58((__int64 *)(a1 + 64));
  return sub_14000DE78(a1 + 16, v2);
}

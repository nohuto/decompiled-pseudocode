/*
 * XREFs of sub_140037E4C @ 0x140037E4C
 * Callers:
 *     sub_140037E04 @ 0x140037E04 (sub_140037E04.c)
 *     sub_1400703E8 @ 0x1400703E8 (sub_1400703E8.c)
 * Callees:
 *     sub_140037EE8 @ 0x140037EE8 (sub_140037EE8.c)
 */

__int64 __fastcall sub_140037E4C(__int64 a1)
{
  sub_140037EE8();
  *(_QWORD *)a1 = off_1400B9BA8;
  *(_QWORD *)(a1 + 8) = off_1400B9C68;
  *(_QWORD *)(a1 + 16) = off_1400B9B68;
  *(_QWORD *)(a1 + 24) = off_1400B9B48;
  *(_QWORD *)(a1 + 152) = &off_1400B9B88;
  *(_QWORD *)(a1 + 160) = &off_1400B9A70;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 212) = -1;
  *(_DWORD *)(a1 + 216) = -1;
  return a1;
}

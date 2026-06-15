/*
 * XREFs of sub_140037E04 @ 0x140037E04
 * Callers:
 *     sub_140037D8C @ 0x140037D8C (sub_140037D8C.c)
 *     sub_140071864 @ 0x140071864 (sub_140071864.c)
 * Callees:
 *     sub_140037E4C @ 0x140037E4C (sub_140037E4C.c)
 */

__int64 __fastcall sub_140037E04(__int64 a1)
{
  *(_DWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_OWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_BYTE *)(a1 + 272) = 0;
  sub_140037E4C();
  return a1;
}

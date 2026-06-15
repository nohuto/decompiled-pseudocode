/*
 * XREFs of sub_1400033B8 @ 0x1400033B8
 * Callers:
 *     sub_14000335C @ 0x14000335C (sub_14000335C.c)
 *     sub_1400599D0 @ 0x1400599D0 (sub_1400599D0.c)
 * Callees:
 *     sub_140003424 @ 0x140003424 (sub_140003424.c)
 */

__int64 __fastcall sub_1400033B8(__int64 a1)
{
  *(_DWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 352) = 0LL;
  *(_OWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_BYTE *)(a1 + 392) = 0;
  sub_140003424(a1 + 24);
  return a1;
}

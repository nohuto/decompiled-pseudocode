/*
 * XREFs of sub_1400960EC @ 0x1400960EC
 * Callers:
 *     sub_1400954C0 @ 0x1400954C0 (sub_1400954C0.c)
 * Callees:
 *     sub_140095F3C @ 0x140095F3C (sub_140095F3C.c)
 */

__int64 __fastcall sub_1400960EC(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_BYTE *)(a1 + 568) = 0;
  sub_140095F3C(a1, 1);
  *(_QWORD *)(a1 + 488) = &off_1400F5658;
  *(_QWORD *)(a1 + 496) = a1;
  *(_QWORD *)(a1 + 504) = 3LL;
  *(_DWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 624) = 0LL;
  return a1;
}

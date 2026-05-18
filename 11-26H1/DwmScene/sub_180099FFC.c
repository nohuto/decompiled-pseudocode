/*
 * XREFs of sub_180099FFC @ 0x180099FFC
 * Callers:
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_180099FB0 @ 0x180099FB0 (sub_180099FB0.c)
 */

__int64 __fastcall sub_180099FFC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  sub_180099FB0((__int64 *)(a1 + 136), (__int64 *)(a2 + 136));
  return a1;
}

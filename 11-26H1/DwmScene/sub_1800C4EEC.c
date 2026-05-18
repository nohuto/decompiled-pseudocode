/*
 * XREFs of sub_1800C4EEC @ 0x1800C4EEC
 * Callers:
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 *     sub_1800C63E0 @ 0x1800C63E0 (sub_1800C63E0.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 */

__int64 *__fastcall sub_1800C4EEC(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 168);
  sub_180012440(a2);
  return a2;
}

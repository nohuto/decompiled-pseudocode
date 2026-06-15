/*
 * XREFs of sub_140096CA8 @ 0x140096CA8
 * Callers:
 *     sub_1400953E0 @ 0x1400953E0 (sub_1400953E0.c)
 *     sub_140095600 @ 0x140095600 (sub_140095600.c)
 *     sub_1400956E0 @ 0x1400956E0 (sub_1400956E0.c)
 *     sub_1400957C0 @ 0x1400957C0 (sub_1400957C0.c)
 *     sub_1400A4F30 @ 0x1400A4F30 (sub_1400A4F30.c)
 *     sub_1400A5010 @ 0x1400A5010 (sub_1400A5010.c)
 *     sub_1400A50F0 @ 0x1400A50F0 (sub_1400A50F0.c)
 *     sub_1400A51D0 @ 0x1400A51D0 (sub_1400A51D0.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 */

__int64 __fastcall sub_140096CA8(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // r8d

  v2 = sub_14000DA4C();
  return sub_14000DF30(a1, v2, v3);
}

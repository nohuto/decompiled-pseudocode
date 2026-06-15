/*
 * XREFs of sub_14000C2D0 @ 0x14000C2D0
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082240 @ 0x140082240 (sub_140082240.c)
 *     sub_140082410 @ 0x140082410 (sub_140082410.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140083A90 @ 0x140083A90 (sub_140083A90.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 */

__int64 __fastcall sub_14000C2D0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_14000C2F8(a1);
  return a1;
}

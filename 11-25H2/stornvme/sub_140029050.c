/*
 * XREFs of sub_140029050 @ 0x140029050
 * Callers:
 *     sub_14001F8F8 @ 0x14001F8F8 (sub_14001F8F8.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_140029050(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r8

  sub_140009580(a1, a1 + 1008);
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_BYTE *)(v6 + 4225) & 0xFD;
  *(_DWORD *)(v6 + 4100) = a2;
  *(_BYTE *)(v6 + 4096) = 26;
  *(_BYTE *)(v6 + 4225) = v7 | 1;
  *(_WORD *)(v6 + 4140) = 259;
  *(_QWORD *)(v6 + 4192) = sub_140028C60;
  *(_WORD *)(v6 + 4144) = a3;
  sub_1400042C0(a1, a1 + 1016);
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v8) = 1;
  sub_140008130(a1, a1 + 1016, v8);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}

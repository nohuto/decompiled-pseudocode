/*
 * XREFs of sub_140006580 @ 0x140006580
 * Callers:
 *     sub_14000B280 @ 0x14000B280 (sub_14000B280.c)
 *     sub_14000D0D0 @ 0x14000D0D0 (sub_14000D0D0.c)
 *     sub_14000D250 @ 0x14000D250 (sub_14000D250.c)
 *     sub_140011210 @ 0x140011210 (sub_140011210.c)
 *     sub_140011670 @ 0x140011670 (sub_140011670.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_140020894 @ 0x140020894 (sub_140020894.c)
 *     sub_14002256C @ 0x14002256C (sub_14002256C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140023450 @ 0x140023450 (sub_140023450.c)
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_140024E80 @ 0x140024E80 (sub_140024E80.c)
 *     sub_140026C60 @ 0x140026C60 (sub_140026C60.c)
 *     sub_14002C7E8 @ 0x14002C7E8 (sub_14002C7E8.c)
 * Callees:
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 */

__int64 __fastcall sub_140006580(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int16 a8)
{
  unsigned __int64 v8; // rsi
  __int64 v12; // rbp
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 result; // rax
  int v17; // edx

  v8 = a4;
  v12 = *(_QWORD *)(a1 + 1560);
  if ( (unsigned __int8)a3 <= 9u && (v13 = 954, _bittest(&v13, a3))
    || (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)(a3 + 64) <= 9u && (v17 = 823, _bittest(&v17, a3 + 64)) )
  {
    a6 = -1;
  }
  *(_DWORD *)(a2 + 4100) = a6;
  *(_BYTE *)(a2 + 4136) = a3;
  v14 = *(_DWORD *)(a2 + 4136) & 0xFFFF7FFF;
  v15 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v14 ^ (v14 ^ (((a4 >> 2) - 1) << 16)) & 0xFFF0000;
  sub_1400066B0(a1, a2, a5, a4);
  result = a8;
  *(_WORD *)(a2 + 4142) = a8;
  if ( (*(_BYTE *)(v12 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v15 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v8 >> 2) - 1) >> 16;
    result = (unsigned int)a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4148) = HIDWORD(a7);
    *(_DWORD *)(a2 + 4144) = result;
  }
  return result;
}

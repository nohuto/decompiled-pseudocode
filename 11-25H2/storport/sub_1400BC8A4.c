/*
 * XREFs of sub_1400BC8A4 @ 0x1400BC8A4
 * Callers:
 *     sub_1400BCCF8 @ 0x1400BCCF8 (sub_1400BCCF8.c)
 *     sub_1400C52E4 @ 0x1400C52E4 (sub_1400C52E4.c)
 *     sub_1400C55C0 @ 0x1400C55C0 (sub_1400C55C0.c)
 *     sub_1400C5820 @ 0x1400C5820 (sub_1400C5820.c)
 *     sub_1400C5A64 @ 0x1400C5A64 (sub_1400C5A64.c)
 *     sub_1400C5CF4 @ 0x1400C5CF4 (sub_1400C5CF4.c)
 *     sub_1400C5FA8 @ 0x1400C5FA8 (sub_1400C5FA8.c)
 *     sub_1400D0158 @ 0x1400D0158 (sub_1400D0158.c)
 *     sub_1400DB0A4 @ 0x1400DB0A4 (sub_1400DB0A4.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400E8EB4 @ 0x1400E8EB4 (sub_1400E8EB4.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 *     sub_14010F0B0 @ 0x14010F0B0 (sub_14010F0B0.c)
 *     sub_140123DD0 @ 0x140123DD0 (sub_140123DD0.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 *     sub_140191238 @ 0x140191238 (sub_140191238.c)
 *     sub_1401A0D00 @ 0x1401A0D00 (sub_1401A0D00.c)
 * Callees:
 *     sub_1400BDDF4 @ 0x1400BDDF4 (sub_1400BDDF4.c)
 */

char __fastcall sub_1400BC8A4(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax

  v10 = *(_QWORD *)(a1 + 592);
  v11 = a4;
  if ( (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)a3 <= 9u && (v14 = 954, _bittest(&v14, a3))
    || (unsigned __int8)(a3 + 64) <= 9u && (v15 = 823, _bittest(&v15, a3 + 64)) )
  {
    a6 = -1;
  }
  *(_BYTE *)(a2 + 40) = a3;
  v16 = *(_DWORD *)(a2 + 40) & 0xFFFF7FFF;
  *(_DWORD *)(a2 + 4) = a6;
  v17 = a4 >> 2;
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 40) = v16 ^ (v16 ^ (((a4 >> 2) - 1) << 16)) & 0xFFF0000;
  v18 = sub_1400BDDF4(v16, a2, a5, a4, a9, a10);
  if ( v18 )
  {
    *(_WORD *)(a2 + 46) = a8;
    if ( (*(_BYTE *)(v10 + 261) & 4) != 0 )
    {
      *(_WORD *)(a2 + 42) = v17 - 1;
      *(_WORD *)(a2 + 44) = ((unsigned int)(v11 >> 2) - 1) >> 16;
      *(_DWORD *)(a2 + 52) = HIDWORD(a7);
      *(_DWORD *)(a2 + 48) = a7 & 0xFFFFFFFC;
    }
    LOBYTE(v18) = 1;
  }
  return v18;
}

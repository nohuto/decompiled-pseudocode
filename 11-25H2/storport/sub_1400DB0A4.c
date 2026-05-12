/*
 * XREFs of sub_1400DB0A4 @ 0x1400DB0A4
 * Callers:
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 * Callees:
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 */

__int64 __fastcall sub_1400DB0A4(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11)
{
  char v11; // si
  unsigned int v13; // ecx
  __int64 result; // rax

  v11 = a3;
  LOBYTE(a3) = 8 - ((_BYTE)a3 != 0);
  sub_1400BC8A4(a1, a2, a3, a4, a5, -1, a7, 0, a9, a10);
  if ( a7 || !v11 )
    v13 = *(_DWORD *)(a2 + 40) & 0xFFFFF0FF;
  else
    v13 = *(_DWORD *)(a2 + 40) & 0xFFFFF0FF | 0x100;
  *(_DWORD *)(a2 + 40) = v13;
  result = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(a11 << 15)) & 0x8000;
  *(_DWORD *)(a2 + 40) = result;
  return result;
}

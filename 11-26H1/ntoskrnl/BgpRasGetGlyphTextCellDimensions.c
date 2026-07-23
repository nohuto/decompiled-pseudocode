/*
 * XREFs of BgpRasGetGlyphTextCellDimensions @ 0x14071D6A8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpFoGetTextMetrics @ 0x140512FBC (BgpFoGetTextMetrics.c)
 * Callees:
 *     BgpFmRoundUp @ 0x1403576F0 (BgpFmRoundUp.c)
 */

__int64 __fastcall BgpRasGetGlyphTextCellDimensions(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r8d
  unsigned int v5; // ecx
  __int64 result; // rax

  *a2 = BgpFmRoundUp(
          ((*(unsigned int *)(a1 + 16)
          * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 96LL)
          * (__int64)(*(__int16 *)(*(_QWORD *)(a1 + 8) + 82LL) - *(__int16 *)(*(_QWORD *)(a1 + 8) + 84LL))) << 6)
        / (72LL
         * *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 120LL)))
      + 2;
  v5 = (v4 >> 6) | 0xFC000000;
  if ( v4 >= 0 )
    v5 = v4 >> 6;
  result = v5 + 1;
  if ( (v4 & 0x20) == 0 )
    result = v5;
  *a3 = result;
  return result;
}

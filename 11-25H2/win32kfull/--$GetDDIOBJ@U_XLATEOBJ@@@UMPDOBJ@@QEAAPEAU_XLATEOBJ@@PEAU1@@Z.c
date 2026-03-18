/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728
 * Callers:
 *     NtGdiXLATEOBJ_iXlate @ 0x1400D23A0 (NtGdiXLATEOBJ_iXlate.c)
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1401F37B0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14033D3C0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 232) )
    result = *(_QWORD *)(a1 + 224);
  else
    result = 0LL;
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}

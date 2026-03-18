/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094
 * Callers:
 *     NtGdiXLATEOBJ_iXlate @ 0x1400D85E0 (NtGdiXLATEOBJ_iXlate.c)
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x140184FA0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14032FE00 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 == *(_QWORD *)(a1 + 216) )
    v2 = *(_QWORD *)(a1 + 208);
  else
    v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && v2 )
    v2 &= -(__int64)GrepIsEngineVa((void *)v2);
  return v2;
}

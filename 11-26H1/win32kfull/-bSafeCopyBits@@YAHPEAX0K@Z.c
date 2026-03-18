/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D9DB0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x140184FA0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1402334E0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x14023A510 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x14032F870 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14032F920 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSafeCopyBits(void *a1, void *a2, unsigned int a3)
{
  if ( a1 && a2 )
    GreProbeAndWriteToUntrustedVa(a1, a3, a2, a3, 1uLL);
  return 1LL;
}

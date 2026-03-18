/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D6CC4
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D5490 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D5C80 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1401F37B0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x140201BC0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033C9F0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x14033CE00 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14033CEB0 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bSafeCopyBits(char *a1, void *a2, unsigned int a3)
{
  char *v3; // rax

  if ( a1 && a2 )
  {
    v3 = &a1[a3];
    if ( v3 <= a1 || (unsigned __int64)v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}

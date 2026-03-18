/*
 * XREFs of ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D9100 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9200 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1402334E0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x14023A510 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x14024E7C0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14032F550 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14032F6B0 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_FONTOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( a2 == *(_QWORD *)(a1 + 184) )
    v2 = *(_QWORD *)(a1 + 176);
  else
    v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && v2 )
    v2 &= -(__int64)GrepIsEngineVa((void *)v2);
  return v2;
}

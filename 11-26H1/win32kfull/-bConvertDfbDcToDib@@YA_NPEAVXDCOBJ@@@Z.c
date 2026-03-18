/*
 * XREFs of ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x140333564
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pProcessDfbSurfaces(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 1LL) != 0;
}

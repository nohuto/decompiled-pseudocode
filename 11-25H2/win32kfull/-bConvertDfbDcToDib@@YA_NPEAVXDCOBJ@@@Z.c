/*
 * XREFs of ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x140311290
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DE37C (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

bool __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pProcessDfbSurfaces(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 1LL) != 0;
}

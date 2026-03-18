/*
 * XREFs of ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14009BB1C
 * Callers:
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1400077AC (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x14009AD7C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B018 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B5A4 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14009BA2C (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009BC38 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009C5BC (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1401D3310 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14001D774 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScan(REGION_CORE *this)
{
  const struct REGION_CORE *v2; // rdx

  if ( GetBaseRustGlobals() )
    return Win32kRS::RegionCore_get_sizeScan(this, v2);
  else
    return *((unsigned int *)this + 4);
}

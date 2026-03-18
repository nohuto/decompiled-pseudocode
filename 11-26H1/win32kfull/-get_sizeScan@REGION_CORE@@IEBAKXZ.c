/*
 * XREFs of ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8
 * Callers:
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x14006D408 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400AC900 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400AD828 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140167160 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x140236900 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScan(REGION_CORE *this)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rax

  if ( !GetBaseRustGlobals() )
    return *((unsigned int *)this + 4);
  BaseRustGlobals = GetBaseRustGlobals();
  return (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)BaseRustGlobals + 176LL))(this);
}

/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6A80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     EngDeletePalette @ 0x140117250 (EngDeletePalette.c)
 *     ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x140121270 (-EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C9224 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(struct _BASEOBJECT **this)
{
  if ( *this
    && ((*((_DWORD *)*this + 6) & 0x5000000) == 0x1000000 || !(unsigned int)XEPALOBJ::bDeletePalette(this, 0LL)) )
  {
    HmgDecrementShareReferenceCountEx(*this, 0LL);
    *this = 0LL;
  }
}

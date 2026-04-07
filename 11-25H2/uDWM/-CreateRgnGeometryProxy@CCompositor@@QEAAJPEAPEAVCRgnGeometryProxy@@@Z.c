/*
 * XREFs of ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18000BC4C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180011960 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180011A18 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18006A454 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800B9D90 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRgnGeometryProxy(CCompositor *this, struct CRgnGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CRgnGeometryProxy>(this, a2);
}

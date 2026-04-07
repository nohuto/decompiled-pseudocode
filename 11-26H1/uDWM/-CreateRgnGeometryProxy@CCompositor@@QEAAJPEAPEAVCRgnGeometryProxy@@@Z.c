/*
 * XREFs of ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180082094
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18005897C (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateRgnGeometryProxy(struct IDwmChannel **this, struct CRgnGeometryProxy **a2)
{
  return CResourceProxy::Create<CRgnGeometryProxy>(this[3]);
}

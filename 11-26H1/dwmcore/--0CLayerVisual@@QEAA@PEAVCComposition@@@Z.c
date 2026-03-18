/*
 * XREFs of ??0CLayerVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801CDC50
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CLayerVisual *__fastcall CLayerVisual::CLayerVisual(CLayerVisual *this, struct CComposition *a2)
{
  CLayerVisual *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CLayerVisual::`vftable';
  result = this;
  *((_QWORD *)this + 86) = 0LL;
  return result;
}

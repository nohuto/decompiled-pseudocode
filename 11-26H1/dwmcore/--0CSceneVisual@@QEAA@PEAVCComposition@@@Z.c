/*
 * XREFs of ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801D4AB0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSceneVisual *__fastcall CSceneVisual::CSceneVisual(CSceneVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CSceneVisual::`vftable';
  *((_QWORD *)this + 85) = *((_QWORD *)a2 + 110);
  return this;
}

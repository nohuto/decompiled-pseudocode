/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18019C058
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ??0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x18028BF74 (--0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z.c)
 * Callees:
 *     <none>
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_BYTE *)this + 216) |= 1u;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 109) = 1065353216;
  *((_DWORD *)this + 102) = 1065353216;
  result = this;
  *((_QWORD *)this + 57) = 0LL;
  *(_QWORD *)((char *)this + 412) = 0LL;
  return result;
}

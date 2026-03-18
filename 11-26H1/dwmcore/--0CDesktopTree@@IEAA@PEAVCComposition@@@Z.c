/*
 * XREFs of ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180203DCC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800D10EC (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180203E84 (--0COcclusionContext@@QEAA@XZ.c)
 */

CDesktopTree *__fastcall CDesktopTree::CDesktopTree(CDesktopTree *this, struct CComposition *a2)
{
  __int64 v3; // r8

  CVisualTree::CVisualTree(this, a2, 0LL);
  *(_QWORD *)this = &CDesktopTree::`vftable';
  *((_QWORD *)this + 330) = 0LL;
  COcclusionContext::COcclusionContext((CDesktopTree *)((char *)this + 2648));
  *((_QWORD *)this + 506) = v3;
  *((_QWORD *)this + 507) = (char *)this + 4080;
  *((_QWORD *)this + 508) = (char *)this + 4080;
  *((_QWORD *)this + 509) = (char *)this + 4112;
  *((_QWORD *)this + 514) = v3;
  *((_QWORD *)this + 515) = (char *)this + 4144;
  *((_QWORD *)this + 516) = (char *)this + 4144;
  *((_QWORD *)this + 517) = (char *)this + 4784;
  *((_QWORD *)this + 598) = (char *)this + 4808;
  *((_QWORD *)this + 599) = (char *)this + 4808;
  *((_QWORD *)this + 600) = (char *)this + 4936;
  return this;
}

/*
 * XREFs of ??0CViewBox@@QEAA@PEAVCComposition@@@Z @ 0x180214658
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CViewBox *__fastcall CViewBox::CViewBox(CViewBox *this, struct CComposition *a2)
{
  CViewBox *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CComponentTransform2D::`vftable';
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_BYTE *)this + 156) = 0;
  *(_OWORD *)((char *)this + 196) = *(_OWORD *)&CComponentTransform2D::sc_defaultTransformMatrix.m11;
  *(_QWORD *)this = &CViewBox::`vftable';
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 60) = 1056964608;
  *((_DWORD *)this + 61) = 1056964608;
  result = this;
  *((_DWORD *)this + 62) = 2;
  return result;
}

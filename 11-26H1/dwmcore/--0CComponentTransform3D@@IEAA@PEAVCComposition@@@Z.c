/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x1801AA05C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CComponentTransform3D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 156) = 1;
  *(_QWORD *)((char *)this + 180) = CComponentTransform3D::sc_defaultOffset;
  *((_DWORD *)this + 47) = 0;
  *(_OWORD *)((char *)this + 216) = CComponentTransform3D::sc_defaultOrientation;
  *((_QWORD *)this + 24) = CComponentTransform3D::sc_defaultRotationAxis;
  *((_DWORD *)this + 50) = 1065353216;
  *(_QWORD *)((char *)this + 204) = CComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 53) = 1065353216;
  result = this;
  *(struct D2D_MATRIX_4X4_F *)((char *)this + 236) = CComponentTransform3D::sc_defaultTransformMatrix;
  return result;
}

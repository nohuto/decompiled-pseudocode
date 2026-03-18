/*
 * XREFs of ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801BDD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CProxyGeometry::GetShapeDataCore(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CGeometry *v3; // rcx
  int ShapeData; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CGeometry *)*((_QWORD *)this + 17);
  if ( !v3 )
    return 0LL;
  ShapeData = CGeometry::GetShapeData(v3, a2, a3);
  v5 = ShapeData;
  if ( ShapeData >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\proxygeometry.cpp",
    (const char *)(unsigned int)ShapeData);
  return v5;
}

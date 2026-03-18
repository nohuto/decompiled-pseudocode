/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180283F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x180158570 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180181830 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  CSurfaceBrush *v8; // rcx
  unsigned int v9; // ebx
  CShape **v11; // [rsp+30h] [rbp-50h] BYREF
  struct CShape *v12; // [rsp+38h] [rbp-48h] BYREF
  char v13; // [rsp+40h] [rbp-40h]
  struct D2D_MATRIX_3X2_F v14[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]
  CShape *v16; // [rsp+A0h] [rbp+20h] BYREF

  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 24) + 16LL))(
         *((_QWORD *)this + 24),
         this)
    && a2->width > 0.0
    && a2->height > 0.0
    && !CBrush::IsEmptyDrawing(this) )
  {
    v15 = 0LL;
    memset(v14, 0, sizeof(v14));
    v16 = 0LL;
    if ( (int)CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v14) >= 0 )
    {
      v12 = 0LL;
      v11 = &v16;
      v13 = 1;
      v9 = (unsigned int)CSurfaceBrush::GetPrimitiveShape(v8, a2, v14, 0, &v12) >> 31;
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v11);
      if ( (unsigned __int8)v9 != 1 )
        CShape::FillContainsPoint(v16, a3, a4);
    }
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v16);
  }
  return 0LL;
}

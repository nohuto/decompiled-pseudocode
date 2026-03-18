/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801583F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x180158570 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, struct D2D_SIZE_F *a2, __int64 a3)
{
  int PrimitiveShape; // edi
  const struct D2D_MATRIX_3X2_F *v7; // rdx
  CSurfaceBrush *v8; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct CShape *v12; // [rsp+38h] [rbp-48h] BYREF
  char v13; // [rsp+40h] [rbp-40h]
  _OWORD v14[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]
  __int64 (__fastcall ***v16)(_QWORD, __int64); // [rsp+A8h] [rbp+28h] BYREF

  if ( a2->width <= 0.0 )
    goto LABEL_15;
  if ( a2->height <= 0.0 )
    goto LABEL_15;
  if ( CBrush::IsEmptyDrawing(this) )
    goto LABEL_15;
  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  PrimitiveShape = CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v14);
  if ( PrimitiveShape < 0 )
    goto LABEL_15;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
         *((_QWORD *)this + 24),
         this,
         0LL)
    && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v14, v7) )
  {
    width = a2->width;
    height = a2->height;
    *(_QWORD *)a3 = 0LL;
    *(FLOAT *)(a3 + 8) = width;
    *(FLOAT *)(a3 + 12) = height;
    return (unsigned int)PrimitiveShape;
  }
  v16 = 0LL;
  v12 = 0LL;
  v13 = 1;
  PrimitiveShape = CSurfaceBrush::GetPrimitiveShape(v8, a2, (const struct CContent::LayoutData *)v14, 1, &v12);
  if ( v13 )
    std::unique_ptr<CShape>::reset(&v16, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
  if ( PrimitiveShape >= 0 )
    PrimitiveShape = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), __int64, _QWORD))(*v16)[6])(
                       v16,
                       a3,
                       0LL);
  if ( v16 )
    (**v16)(v16, 1LL);
  if ( PrimitiveShape < 0 )
  {
LABEL_15:
    *(_QWORD *)(a3 + 8) = 0LL;
    PrimitiveShape = 0;
    *(_QWORD *)a3 = 0LL;
  }
  return (unsigned int)PrimitiveShape;
}

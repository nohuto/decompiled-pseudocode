/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180284020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x180158570 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18016DC30 (-AllowsOcclusion@CShape@@UEBA_NXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  const struct D2D_MATRIX_3X2_F *v6; // rdx
  __int64 v7; // rcx
  CSurfaceBrush *v8; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  unsigned int v12; // ebx
  CShape *v13; // [rsp+30h] [rbp-29h] BYREF
  struct D2D_MATRIX_3X2_F v14[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+68h] [rbp+Fh]
  struct CShape *v16[2]; // [rsp+70h] [rbp+17h] BYREF
  char v17; // [rsp+80h] [rbp+27h]
  __int128 v18; // [rsp+88h] [rbp+2Fh] BYREF

  if ( !CBrush::IsEmptyDrawing(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 24) + 8LL))(
           *((_QWORD *)this + 24),
           this) )
    {
      v15 = 0LL;
      memset(v14, 0, sizeof(v14));
      if ( (int)CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v14) >= 0
        && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v14, v6) )
      {
        v7 = *((_QWORD *)this + 24);
        v18 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, CSurfaceBrush *, __int128 *))(*(_QWORD *)v7 + 24LL))(
               v7,
               this,
               &v18)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v18 + 3) - 1.0) & _xmm) < 0.0000011920929 )
        {
          width = a2->width;
          height = a2->height;
          *(_QWORD *)&a3->left = 0LL;
          a3->right = width;
          a3->bottom = height;
          return 1;
        }
        v13 = 0LL;
        v16[0] = (struct CShape *)&v13;
        v16[1] = 0LL;
        v17 = 1;
        v12 = (unsigned int)CSurfaceBrush::GetPrimitiveShape(v8, a2, v14, 1u, &v16[1]) >> 31;
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)v16);
        if ( (unsigned __int8)v12 != 1 && CShape::AllowsOcclusion(v13) )
        {
          *(_OWORD *)v16 = 0LL;
          if ( (*(int (__fastcall **)(CShape *, struct CShape **, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v16, 0LL) >= 0 )
          {
            *a3 = *(struct D2D_RECT_F *)v16;
            std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v13);
            return 1;
          }
        }
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v13);
      }
    }
  }
  return 0;
}

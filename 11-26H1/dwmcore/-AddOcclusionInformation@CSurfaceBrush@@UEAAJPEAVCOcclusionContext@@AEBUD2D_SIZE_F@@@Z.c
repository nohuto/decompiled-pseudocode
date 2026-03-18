/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x180158570 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18016DC30 (-AllowsOcclusion@CShape@@UEBA_NXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x1801896A0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FBE18 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // si
  int v10; // eax
  const struct D2D_MATRIX_3X2_F *v11; // rdx
  int PrimitiveShape; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  CSurfaceBrush *v16; // rcx
  FLOAT height; // xmm1_4
  CSurfaceBrush *v18; // rcx
  int v19; // eax
  CMILMatrix *v20; // rax
  __int64 v21; // r9
  int v22; // eax
  CShape *v24; // [rsp+30h] [rbp-A9h] BYREF
  CShape **v25; // [rsp+38h] [rbp-A1h] BYREF
  struct CShape *v26; // [rsp+40h] [rbp-99h] BYREF
  char v27; // [rsp+48h] [rbp-91h]
  struct D2D_MATRIX_3X2_F v28[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v29; // [rsp+80h] [rbp-59h]
  _BYTE v30[72]; // [rsp+88h] [rbp-51h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v32; // [rsp+E0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  if ( CBrush::IsEmptyDrawing(this) || a3->width <= 0.0 || a3->height <= 0.0 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 24) + 8LL))(
         *((_QWORD *)this + 24),
         this);
  v7 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 24) + 56LL))(
         *((_QWORD *)this + 24),
         this);
  v8 = v7;
  v9 = v7 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 296LL))(v7);
  if ( !v6 && !v9 )
    return 0LL;
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  v24 = 0LL;
  v10 = CSurfaceBrush::ComputeLayout(this, a3, (struct CContent::LayoutData *)v28);
  PrimitiveShape = v10;
  if ( v10 == -2003304441 )
  {
LABEL_35:
    PrimitiveShape = 0;
    goto LABEL_36;
  }
  if ( v10 >= 0 )
  {
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v28, v11) )
    {
      if ( v6 )
      {
        v15 = *((_QWORD *)this + 24);
        v31 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v32 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, CSurfaceBrush *, __int128 *))(*(_QWORD *)v15 + 24LL))(
               v15,
               this,
               &v32)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v32 + 3) - 1.0) & _xmm) < 0.0000011920929 )
        {
          height = a3->height;
          DWORD2(v31) = LODWORD(a3->width);
          *((FLOAT *)&v31 + 3) = height;
          *(_QWORD *)&v31 = 0LL;
        }
        else
        {
          v26 = 0LL;
          v25 = &v24;
          v27 = 1;
          PrimitiveShape = CSurfaceBrush::GetPrimitiveShape(v16, a3, v28, 1u, &v26);
          wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v25);
          if ( PrimitiveShape < 0 )
          {
            v14 = 403LL;
            goto LABEL_25;
          }
          if ( CShape::AllowsOcclusion(v24) )
          {
            v19 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v24 + 48LL))(v24, &v31, 0LL);
            PrimitiveShape = v19;
            if ( v19 < 0 )
            {
              v13 = (unsigned int)v19;
              v14 = 408LL;
              goto LABEL_26;
            }
          }
        }
        COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (const struct D2D_RECT_F *)&v31, v9);
      }
      if ( v9 && COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
      {
        v26 = 0LL;
        v25 = &v24;
        v27 = 1;
        PrimitiveShape = CSurfaceBrush::GetPrimitiveShape(v18, a3, v28, 0, &v26);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v25);
        if ( PrimitiveShape < 0 )
        {
          v14 = 424LL;
LABEL_25:
          v13 = (unsigned int)PrimitiveShape;
          goto LABEL_26;
        }
        if ( CShape::AllowsOcclusion(v24) )
        {
          v20 = CMILMatrix::CMILMatrix((CMILMatrix *)v30, v28);
          v22 = COcclusionContext::CheckAndRecordOverlayCandidate(
                  (__int64)a2,
                  *((_QWORD *)a2 + 138),
                  v8,
                  (__int64)v20,
                  v21);
          PrimitiveShape = v22;
          if ( v22 < 0 )
          {
            v13 = (unsigned int)v22;
            v14 = 433LL;
            goto LABEL_26;
          }
        }
      }
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v24);
      return 0LL;
    }
    goto LABEL_35;
  }
  v13 = (unsigned int)v10;
  v14 = 372LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
    (const char *)v13);
LABEL_36:
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v24);
  return (unsigned int)PrimitiveShape;
}

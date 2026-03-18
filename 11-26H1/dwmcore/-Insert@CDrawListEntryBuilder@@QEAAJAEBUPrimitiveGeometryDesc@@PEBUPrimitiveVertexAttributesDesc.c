/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180036B30 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800BACD0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1800BE328 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CBCC (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 *     ??1?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18016CDE8 (--1-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_p.c)
 *     ?CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z @ 0x18016E3B0 (-CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A1DB4 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        struct D2D_RECT_F *a4)
{
  struct D2D_RECT_F *v4; // rdi
  __int64 v8; // xmm1_8
  const struct D2D_MATRIX_3X2_F *v9; // rdx
  bool v10; // zf
  CShape *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  const struct CEdgeFlagsMap *v14; // rdx
  __int64 v15; // rbx
  struct D2D_RECT_F *v16; // r9
  float *v17; // rdx
  const struct D2D_MATRIX_3X2_F *v18; // r8
  struct D2D_RECT_F v19; // xmm0
  int v20; // eax
  FLOAT top; // xmm1_4
  __int64 v22; // rbx
  __int64 v23; // r8
  FLOAT left; // xmm0_4
  FLOAT bottom; // xmm1_4
  unsigned __int64 v26; // rax
  int v27; // r9d
  _BYTE *v28; // rbx
  __int128 v29; // xmm0
  int v30; // eax
  int inserted; // eax
  struct D2D_RECT_F v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  char v35; // [rsp+48h] [rbp-B8h]
  _BYTE v36[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+7Ch] [rbp-84h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int64 v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  _BYTE v43[40]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v44[80]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[80]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v46; // [rsp+160h] [rbp+60h] BYREF
  __int64 v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int128 v49; // [rsp+180h] [rbp+80h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+190h] [rbp+90h] BYREF
  struct D2D_RECT_F v51; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  _QWORD v53[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v54[16]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v55; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE *v56; // [rsp+200h] [rbp+100h] BYREF
  _BYTE *v57; // [rsp+208h] [rbp+108h]
  char *v58; // [rsp+210h] [rbp+110h]
  _BYTE v59[224]; // [rsp+218h] [rbp+118h] BYREF
  char v60; // [rsp+2F8h] [rbp+1F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v4 = a4;
  if ( (*((_BYTE *)a2 + 24) & 1) == 0 && IsEmpty((const struct D2D_RECT_F *)a2) )
    return 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( *((_BYTE *)this + 4489) )
  {
    if ( a4 )
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&matrix,
        (const struct D2D1::Matrix3x2F *)a4,
        (CDrawListEntryBuilder *)((char *)this + 32));
      v4 = &v51;
      v51 = *(struct D2D_RECT_F *)&matrix.m11;
      v52 = *(_QWORD *)&matrix.m[2][0];
      goto LABEL_8;
    }
    v4 = (struct D2D_RECT_F *)((char *)this + 32);
  }
  if ( !v4 )
    goto LABEL_40;
LABEL_8:
  if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v4) )
  {
LABEL_40:
    inserted = CDrawListEntryBuilder::InsertWorker(this, a2, a3);
    v13 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentrybuilder.cpp",
        (const char *)(unsigned int)inserted);
      return v13;
    }
    return 0LL;
  }
  v8 = *(_QWORD *)&v4[1].left;
  *(struct D2D_RECT_F *)&matrix.m11 = *v4;
  *(_QWORD *)&matrix.m[2][0] = v8;
  if ( !D2D1InvertMatrix(&matrix) )
    return 0LL;
  v10 = (*((_BYTE *)a2 + 24) & 1) == 0;
  memset(v36, 0, sizeof(v36));
  v34 = 0LL;
  v35 = 0;
  v43[24] = 0;
  if ( v10 )
  {
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v4, v9) )
    {
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(a2, v4, (const struct D2D_MATRIX_3X2_F *)v36, v16);
      if ( *(float *)&v36[8] <= *(float *)v36 || *(float *)&v36[12] <= *(float *)&v36[4] )
      {
        v13 = 0;
        goto LABEL_23;
      }
      v36[24] &= ~1u;
      *(_DWORD *)&v36[16] = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                              (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                              v17,
                              v18);
    }
    else
    {
      v19 = *(struct D2D_RECT_F *)a2;
      v53[1] = 0LL;
      v53[0] = &CRectanglesShape::`vftable';
      v55 = 0LL;
      v53[2] = v54;
      v53[3] = v54;
      v53[4] = &v55;
      v33 = v19;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)v53, &v33);
      CMILMatrix::CMILMatrix((CMILMatrix *)v45, (const struct D2D_MATRIX_3X2_F *)v4);
      *(_QWORD *)&v33.left = 0LL;
      v20 = CShape::CopyShape((CShape *)v53, (const struct CMILMatrix *)v45, (struct CShape **)&v33);
      v13 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x198,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentrybuilder.cpp",
          (const char *)(unsigned int)v20);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
        goto LABEL_23;
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v34);
      top = v4->top;
      v22 = *(_QWORD *)&v33.left;
      v23 = *((unsigned int *)a2 + 4);
      *(FLOAT *)&v37 = v4->left;
      *(FLOAT *)&v39 = v4->right;
      left = v4[1].left;
      *((FLOAT *)&v37 + 1) = top;
      bottom = v4->bottom;
      *(FLOAT *)&v41 = left;
      *((FLOAT *)&v39 + 1) = bottom;
      HIDWORD(v41) = LODWORD(v4[1].top);
      v34 = *(_QWORD *)&v33.left;
      v35 = 1;
      v38 = 0;
      v40 = 0;
      v42 = 1065353216;
      CEdgeFlagsMap::AddEdgeFlags(v43, a2, v23, &v37, FLOAT_0_000081380211);
      v36[24] |= 1u;
      *(_QWORD *)&v36[8] = v43;
      *(_QWORD *)v36 = v22;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
    }
    goto LABEL_25;
  }
  CMILMatrix::CMILMatrix((CMILMatrix *)v44, (const struct D2D_MATRIX_3X2_F *)v4);
  v11 = *(CShape **)a2;
  *(_QWORD *)&v33.left = 0LL;
  v12 = CShape::CopyShape(v11, (const struct CMILMatrix *)v44, (struct CShape **)&v33);
  v13 = v12;
  if ( v12 >= 0 )
  {
    CShapePtr::~CShapePtr((CShapePtr *)&v34);
    v14 = (const struct CEdgeFlagsMap *)*((_QWORD *)a2 + 1);
    v15 = *(_QWORD *)&v33.left;
    v34 = *(_QWORD *)&v33.left;
    v35 = 1;
    if ( v14 )
      CEdgeFlagsMap::Copy((CEdgeFlagsMap *)v43, v14, (const struct D2D_MATRIX_3X2_F *)v4);
    v36[24] |= 1u;
    *(_QWORD *)&v36[8] = v43;
    *(_QWORD *)v36 = v15;
LABEL_25:
    v56 = v59;
    v57 = v59;
    v58 = &v60;
    v49 = 0LL;
    if ( a3 && *((_QWORD *)a3 + 4) )
    {
      v39 = *(_QWORD *)&matrix.m[1][0];
      v37 = *(_QWORD *)&matrix.m11;
      v41 = *(_QWORD *)&matrix.m[2][0];
      v38 = 0;
      v40 = 0;
      v42 = 1065353216;
      detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(&v56);
      if ( *((_QWORD *)a3 + 4) )
      {
        v26 = 0LL;
        do
        {
          PrimitiveUVDesc::CopyTo(
            (PrimitiveUVDesc *)(*((_QWORD *)a3 + 5) + 56 * v26),
            (struct PrimitiveUVDesc *)&v56[56 * v26],
            (const struct Matrix3x3 *)&v37);
          v26 = (unsigned int)(v27 + 1);
        }
        while ( v26 < *((_QWORD *)a3 + 4) );
      }
      v28 = v56;
      v29 = *(_OWORD *)a3;
      v47 = *((_QWORD *)a3 + 2);
      v48 = *((_QWORD *)a3 + 3);
      v46 = v29;
      gsl::details::extent_type<-1>::extent_type<-1>(&v33, 0x6DB6DB6DB6DB6DB7LL * ((v57 - v56) >> 3));
      if ( *(_QWORD *)&v33.left == -1LL || !v28 && *(_QWORD *)&v33.left )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      *(_QWORD *)&v49 = *(_QWORD *)&v33.left;
      a3 = (const struct PrimitiveVertexAttributesDesc *)&v46;
      *((_QWORD *)&v49 + 1) = v28;
    }
    v30 = CDrawListEntryBuilder::InsertWorker(this, (const struct PrimitiveGeometryDesc *)v36, a3);
    v13 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentrybuilder.cpp",
        (const char *)(unsigned int)v30);
      detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::~vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>(&v56);
      CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v43);
      goto LABEL_36;
    }
    detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::~vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>(&v56);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v43);
    CShapePtr::~CShapePtr((CShapePtr *)&v34);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x175,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentrybuilder.cpp",
    (const char *)(unsigned int)v12);
LABEL_23:
  CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v43);
LABEL_36:
  CShapePtr::~CShapePtr((CShapePtr *)&v34);
  return v13;
}

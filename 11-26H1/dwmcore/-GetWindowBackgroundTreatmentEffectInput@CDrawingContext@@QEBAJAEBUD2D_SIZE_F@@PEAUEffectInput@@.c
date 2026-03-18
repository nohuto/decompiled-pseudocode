/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802869F0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18001A090 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800583D4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x1800AEE04 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2A94 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18016DF04 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEB.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016E108 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1801D0614 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801DB820 (-HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CVisual ***this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct CTreeData *TreeData; // r13
  unsigned int v4; // ebx
  struct EffectInput *v6; // r15
  const struct D2D_SIZE_F *v7; // rdi
  struct IBitmapResource *v8; // r14
  __m128 v9; // xmm7
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v12; // rcx
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  struct CVisual *CurrentVisual; // rbx
  const struct CVisualTree **v18; // r12
  CVisual **v19; // rdi
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // r13
  const struct CVisualTree *v22; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  char v24; // al
  bool v25; // zf
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rdi
  __int64 v27; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v28; // r8
  struct IBitmapResource *v29; // r12
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v31; // r10
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *k; // rcx
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm6_4
  float *v41; // rax
  float *v42; // rax
  bool v43; // di
  CVisual *v44; // rax
  struct CWindowBackgroundTreatment *v45; // rax
  CCachedWindowBackgroundTreatment *v46; // r11
  int v47; // eax
  CDrawListBitmap *v49; // rax
  CVisual *v50; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rdi
  const struct RenderTargetInfo *v52; // rax
  struct CWindowBackgroundTreatment *v53; // rax
  int v54; // eax
  CVisual *v55; // rax
  __int64 v56; // xmm0_8
  __m128 v57; // xmm0
  __m128 v58; // xmm1
  __m128 v59; // xmm0
  __m128 v60; // xmm1
  const struct CMILMatrix *v61; // rax
  bool v62[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v63; // [rsp+3Ch] [rbp-CCh]
  unsigned int v64; // [rsp+40h] [rbp-C8h]
  CVisual *v65[2]; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v66; // [rsp+58h] [rbp-B0h] BYREF
  float v67; // [rsp+68h] [rbp-A0h]
  float v68; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v69[24]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v70; // [rsp+88h] [rbp-80h]
  __int32 v71; // [rsp+90h] [rbp-78h]
  struct _D3DCOLORVALUE v72; // [rsp+98h] [rbp-70h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v74; // [rsp+B8h] [rbp-50h]
  __m128i v75; // [rsp+C8h] [rbp-40h]
  __m128i v76; // [rsp+D8h] [rbp-30h]
  int v77; // [rsp+E8h] [rbp-20h]
  struct EffectInput *v78; // [rsp+F8h] [rbp-10h]
  const struct D2D_SIZE_F *v79; // [rsp+100h] [rbp-8h]
  __m128 v80[4]; // [rsp+108h] [rbp+0h] BYREF
  int v81; // [rsp+148h] [rbp+40h]
  __m128 v82[4]; // [rsp+158h] [rbp+50h] BYREF
  int v83; // [rsp+198h] [rbp+90h]
  float v84[24]; // [rsp+1A8h] [rbp+A0h] BYREF

  v4 = 0;
  v6 = a3;
  v7 = a2;
  v77 = 10666;
  v8 = 0LL;
  v9 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v74 = _mm_load_si128((const __m128i *)&_xmm);
  v75 = _mm_load_si128((const __m128i *)&_xmm);
  v78 = a3;
  v79 = a2;
  v64 = 0;
  v62[1] = 0;
  v76 = _mm_load_si128((const __m128i *)&_xmm);
  v83 = 0;
  *(struct _D3DCOLORVALUE *)&v72.r = 0LL;
  EffectInput::Reset(a3);
  v66.m128i_i64[0] = 0LL;
  *((_BYTE *)v6 + 44) = 1;
  *((_BYTE *)v6 + 104) = 1;
  *((_BYTE *)v6 + 106) = 1;
  height = v7->height;
  v66.m128i_i32[2] = LODWORD(v7->width);
  *(_OWORD *)v65 = 0LL;
  *(FLOAT *)&v66.m128i_i32[3] = height;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 35));
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (const struct D2D_RECT_F *)&v66, (float *)v65);
  *(_OWORD *)v69 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)v69);
  v13 = *(float *)v69;
  if ( *(float *)v65 > *(float *)v69 )
    v13 = *(float *)v65;
  v14 = *(float *)&v69[4];
  if ( *((float *)v65 + 1) > *(float *)&v69[4] )
    v14 = *((float *)v65 + 1);
  v15 = *(float *)&v69[8];
  if ( *(float *)&v69[8] > *(float *)&v65[1] )
    v15 = *(float *)&v65[1];
  v16 = *(float *)&v69[12];
  if ( *(float *)&v69[12] > *((float *)&v65[1] + 1) )
    v16 = *((float *)&v65[1] + 1);
  if ( v15 <= v13 || v16 <= v14 )
    goto LABEL_83;
  LOBYTE(TreeData) = 0;
  v63 = (int)TreeData;
  v62[0] = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
  if ( !CurrentVisual )
    goto LABEL_69;
  v18 = (const struct CVisualTree **)(this + 993);
  while ( (**((_DWORD **)CurrentVisual + 28) & 0x800000) == 0 )
  {
    v18 = (const struct CVisualTree **)(this + 993);
    CVisual::CalcTransform(CurrentVisual, this[993], 0LL, &v62[1], (struct CMILMatrix *)v82, 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&si128, v82, (struct CMILMatrix *)&si128);
    v19 = this[993];
    if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v18 + 192LL))(*v18) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(CurrentVisual);
      v31 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != v31; i = i->Flink )
        {
          v20 = i - 22;
          if ( (CVisual **)i[2].Flink == v19 )
          {
            v21 = (struct _LIST_ENTRY *)((char *)CurrentVisual + 320);
            goto LABEL_16;
          }
        }
      }
      goto LABEL_31;
    }
    v20 = (struct _LIST_ENTRY *)((char *)CurrentVisual + 320);
    v21 = (struct _LIST_ENTRY *)((char *)CurrentVisual + 320);
LABEL_16:
    if ( v20 )
    {
      v22 = *v18;
      if ( CurrentVisual != *((struct CVisual **)*v18 + 9) )
      {
        v65[0] = 0LL;
        TransformParentDataInternal = CVisual::GetTransformParentDataInternal(CurrentVisual);
        if ( TransformParentDataInternal )
          v65[0] = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 192LL))(*(_QWORD *)TransformParentDataInternal);
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v22 + 192LL))(v22) )
        {
LABEL_21:
          if ( !v21 || !BYTE4(v21->Blink) || !v65[0] )
            goto LABEL_24;
          TreeData = CVisual::FindTreeData(v65[0], v22);
          v24 = 1;
        }
        else
        {
          v33 = CVisual::GetTreeDataListHead(CurrentVisual);
          if ( v33 )
          {
            for ( j = v33->Flink; j != v33; j = j->Flink )
            {
              v21 = j - 22;
              if ( (const struct CVisualTree *)j[2].Flink == v22 )
                goto LABEL_21;
            }
          }
LABEL_24:
          v65[0] = *((CVisual **)CurrentVisual + 11);
          TreeData = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v22 + 192LL))(v22) )
          {
            TreeData = (CVisual *)((char *)v65[0] + 320);
          }
          else
          {
            v35 = CVisual::GetTreeDataListHead(v65[0]);
            if ( v35 )
            {
              for ( k = v35->Flink; k != v35; k = k->Flink )
              {
                if ( (const struct CVisualTree *)k[2].Flink == v22 )
                {
                  TreeData = (struct CTreeData *)&k[-22];
                  break;
                }
              }
            }
          }
          v24 = 0;
        }
        v25 = TreeData == 0LL;
        LOBYTE(TreeData) = v63;
        if ( !v25 )
        {
          LODWORD(TreeData) = (unsigned __int8)v63;
          if ( v24 )
            LODWORD(TreeData) = 1;
          v63 = (int)TreeData;
        }
        goto LABEL_31;
      }
    }
    LOBYTE(TreeData) = v63;
LABEL_31:
    CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 11);
    if ( !CurrentVisual )
      break;
  }
  v6 = v78;
  if ( !CurrentVisual
    || !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v18 + 192LL))(*v18) )
  {
LABEL_69:
    v50 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(v50);
    if ( !CachedWindowBackgroundTreatment
      || (v52 = (const struct RenderTargetInfo *)((__int64 (__fastcall *)(char *))this[2][2])((char *)this + 16),
          !CCachedWindowBackgroundTreatment::HasValidRenderingRealization(CachedWindowBackgroundTreatment, v52)) )
    {
      if ( CurrentVisual )
        goto LABEL_34;
      v72.a = 1.0;
LABEL_73:
      v4 = 0;
      goto LABEL_65;
    }
    v8 = (struct IBitmapResource *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
    if ( v8 )
    {
      v56 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
      v9 = *(__m128 *)((char *)CachedWindowBackgroundTreatment + 100);
      si128 = *((__m128i *)CachedWindowBackgroundTreatment + 2);
      *(_QWORD *)&v69[16] = v56;
      v74 = *((__m128i *)CachedWindowBackgroundTreatment + 3);
      v75 = *((__m128i *)CachedWindowBackgroundTreatment + 4);
      v76 = *((__m128i *)CachedWindowBackgroundTreatment + 5);
      v77 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
    }
    else
    {
      *(struct _D3DCOLORVALUE *)&v72.r = *(struct _D3DCOLORVALUE *)((char *)CachedWindowBackgroundTreatment + 124);
    }
    v62[0] = 1;
LABEL_54:
    if ( v8 )
      goto LABEL_55;
    goto LABEL_56;
  }
LABEL_34:
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
  if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
  {
    v43 = 0;
    goto LABEL_57;
  }
  v29 = (struct IBitmapResource *)*((_QWORD *)WindowBackgroundTreatmentInternal + 10);
  if ( !v29 )
  {
    *(struct _D3DCOLORVALUE *)&v72.r = *(struct _D3DCOLORVALUE *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 9)
                                                                + 104LL);
    goto LABEL_54;
  }
  if ( !(_BYTE)TreeData )
    goto LABEL_37;
  v57 = *((__m128 *)WindowBackgroundTreatmentInternal + 10);
  v58 = *((__m128 *)WindowBackgroundTreatmentInternal + 11);
  v81 = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
  v80[0] = v57;
  v59 = *((__m128 *)WindowBackgroundTreatmentInternal + 12);
  v80[1] = v58;
  v60 = *((__m128 *)WindowBackgroundTreatmentInternal + 13);
  v80[2] = v59;
  v80[3] = v60;
  if ( !CMILMatrix::Invert((CMILMatrix *)v80, v27, v28) )
    goto LABEL_73;
  v61 = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 35));
  CMILMatrix::Multiply(v61, v80, (struct CMILMatrix *)&si128);
LABEL_37:
  v8 = v29;
  v9 = *(__m128 *)((char *)WindowBackgroundTreatmentInternal + 88);
  *(_QWORD *)&v69[16] = *((_QWORD *)WindowBackgroundTreatmentInternal + 13);
LABEL_55:
  *(_OWORD *)v69 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)&si128, (const struct D2D_RECT_F *)&v66, (float *)v69);
  v37 = *(float *)&v69[12];
  v38 = *(float *)&v69[4];
  v39 = *(float *)&v69[8] - v9.m128_f32[0];
  v40 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  *((float *)v6 + 21) = *(float *)v69 - v9.m128_f32[0];
  *((float *)v6 + 22) = v38 - v40;
  *((float *)v6 + 23) = v39;
  *((float *)v6 + 24) = v37 - v40;
  *(_QWORD *)v69 = si128.m128i_i64[0];
  *(_DWORD *)&v69[8] = si128.m128i_i32[3];
  v70 = v76.m128i_i64[0];
  v71 = v76.m128i_i32[3];
  *(_QWORD *)&v69[12] = v74.m128i_i64[0];
  *(_DWORD *)&v69[20] = v74.m128i_i32[3];
  LODWORD(v67) = v9.m128_i32[0] ^ _xmm;
  LODWORD(v68) = LODWORD(v40) ^ _xmm;
  v66 = _mm_load_si128((const __m128i *)&_xmm);
  v41 = Matrix3x3::operator*((float *)v69, v84, (float *)v66.m128i_i32);
  *(__int64 *)((char *)v66.m128i_i64 + 4) = 0LL;
  *(float *)v66.m128i_i32 = 1.0 / (float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0]);
  *(float *)&v66.m128i_i32[3] = 1.0 / (float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v40);
  v67 = 0.0 - (float)(*(float *)v66.m128i_i32 * 0.0);
  v68 = 0.0 - (float)(*(float *)&v66.m128i_i32[3] * 0.0);
  v42 = Matrix3x3::operator*(v41, v80[0].m128_f32, (float *)v66.m128i_i32);
  *((_OWORD *)v6 + 3) = *(_OWORD *)v42;
  *((_OWORD *)v6 + 4) = *((_OWORD *)v42 + 1);
  *((float *)v6 + 20) = v42[8];
LABEL_56:
  v43 = v62[0];
  if ( !CurrentVisual )
    goto LABEL_64;
LABEL_57:
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*this[993] + 24))(this[993]) || v43 )
  {
LABEL_64:
    v4 = v64;
    goto LABEL_65;
  }
  v44 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
  v65[0] = CVisual::GetCachedWindowBackgroundTreatment(v44);
  if ( !v65[0] )
  {
    v53 = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
    v54 = CCachedWindowBackgroundTreatment::Create(v53, (const struct CMILMatrix *)&si128, &v72, v65);
    v4 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0x80Eu, 0LL);
      return v4;
    }
    v55 = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
    CVisual::SetCachedWindowBackgroundTreatment(v55, v65[0]);
    goto LABEL_65;
  }
  v45 = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
  v47 = CCachedWindowBackgroundTreatment::Update(v46, v45, (const struct CMILMatrix *)&si128, &v72);
  v4 = v47;
  if ( v47 >= 0 )
  {
LABEL_65:
    if ( v8 )
    {
      v49 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v66, v8);
      CDrawListBitmap::operator=(v6, v49);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v66.m128i_i64[1]);
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v66.m128i_i64);
      *((_DWORD *)v6 + 10) |= 0x200u;
      return v4;
    }
    v7 = v79;
LABEL_83:
    CDrawingContext::SetEffectInputToTransparentBlack(v12, v7, v6);
    *(struct _D3DCOLORVALUE *)((char *)v6 + 24) = *(struct _D3DCOLORVALUE *)&v72.r;
    return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x807u, 0LL);
  return v4;
}

/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?GetLocalToScopeTransform@CVisual@@IEBAPEBVCMILMatrix@@PEBVCVisualTree@@@Z @ 0x180010538 (-GetLocalToScopeTransform@CVisual@@IEBAPEBVCMILMatrix@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CDrawingContext::GetCpuClip(CDrawingContext *this, struct CCpuClip *a2)
{
  const struct CShape *v2; // rbx
  enum D2D1_ANTIALIAS_MODE v5; // r15d
  struct _LIST_ENTRY *LocalToScopeTransform; // rsi
  unsigned int v7; // r12d
  const struct CCpuClipAntialiasSinkContext *v8; // rdx
  int v9; // eax
  int v10; // eax
  CVisual *CurrentVisual; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+38h] [rbp-79h] BYREF
  __int128 v16; // [rsp+48h] [rbp-69h]
  __int128 v17; // [rsp+58h] [rbp-59h]
  __int128 v18; // [rsp+68h] [rbp-49h]
  int v19; // [rsp+78h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v20; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v21[4]; // [rsp+A0h] [rbp-11h] BYREF
  int v22; // [rsp+E0h] [rbp+2Fh]

  v2 = 0LL;
  v5 = D2D1_ANTIALIAS_MODE_ALIASED;
  CCpuClip::Initialize(a2, 0LL, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
  if ( *(_BYTE *)(*((_QWORD *)this + 93) - 8LL) )
  {
    v19 = 0;
    LocalToScopeTransform = 0LL;
    v7 = 4;
    if ( !CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)this + 736)) )
    {
LABEL_17:
      CCpuClip::Initialize(a2, v2, (const struct CMILMatrix *)LocalToScopeTransform, v5, v7, v8);
      return;
    }
    v9 = *((_DWORD *)this + 84);
    if ( v9 )
      v10 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL * (unsigned int)(v9 - 1));
    else
      v10 = 0;
    if ( *((_DWORD *)this + 72) == v10 )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(this);
      LocalToScopeTransform = CVisual::GetLocalToScopeTransform(
                                CurrentVisual,
                                *((const struct CVisualTree **)this + 993));
LABEL_14:
      if ( CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)this + 736)) )
      {
        v14 = *((_QWORD *)this + 336);
        v5 = *(_DWORD *)(v14 - 8);
        v2 = *(const struct CShape **)(v14 - 40);
      }
      v8 = *(const struct CCpuClipAntialiasSinkContext **)(*((_QWORD *)this + 93) - 16LL);
      goto LABEL_17;
    }
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
    if ( CCpuClippingData::CalcScopeTransformFromWorld(
           (const struct CMILMatrix *)(v13 - 84),
           TopByReference,
           (struct CMILMatrix *)&v15)
      && CMILMatrix::ProducesUniformZ<1>((__int64)&v15) )
    {
      if ( COERCE_FLOAT(DWORD2(v18) & _xmm) >= 0.000081380211 )
      {
        if ( !CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)this + 93) - 84LL) )
          return;
        *(_QWORD *)&v20.m11 = v15;
        *(_QWORD *)&v20.m[1][0] = v16;
        *(_QWORD *)&v20.m[2][0] = v18;
        CMILMatrix::CMILMatrix((CMILMatrix *)v21, &v20);
        v7 = 36;
        v19 = v22;
        v15 = v21[0];
        v16 = v21[1];
        v17 = v21[2];
        v18 = v21[3];
      }
      LocalToScopeTransform = (struct _LIST_ENTRY *)&v15;
      if ( CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v16 + 1) * *(float *)&v15) - (float)(*(float *)&v16 * *((float *)&v15 + 1))) )
        goto LABEL_14;
    }
  }
}

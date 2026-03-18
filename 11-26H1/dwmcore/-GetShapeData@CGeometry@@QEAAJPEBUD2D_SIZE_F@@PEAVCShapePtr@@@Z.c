/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800251B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18003FCD0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B62F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTreeContext@@PEAVCMILMatrix@@@Z @ 0x1800CB9B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTr.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016DC6C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180180C50 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18019A854 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801BDD30 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C7A30 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180263EC0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1802683B4 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18016BED0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  unsigned int v3; // esi
  char v7; // al
  const struct D2D_SIZE_F *v8; // r12
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v13; // ebx
  char v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rbx
  CShape *v17; // rcx
  int v18; // eax
  int ShapeDataWorker; // eax
  __int64 v20; // rbx
  __int64 *v21; // r15
  int v22; // eax
  __int64 v23; // rbx
  int TrimmedShapeData; // eax
  struct CShape *v25; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-49h] BYREF
  __m128i si128; // [rsp+60h] [rbp-29h]
  __int64 v28; // [rsp+70h] [rbp-19h]
  int v29; // [rsp+78h] [rbp-11h]
  __int64 v30; // [rsp+7Ch] [rbp-Dh]
  __int128 v31; // [rsp+90h] [rbp+7h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+17h]

  v3 = 0;
  if ( *((_BYTE *)this + 132) || (v13 = *(_DWORD *)(*((_QWORD *)this + 3) + 5704LL), GetCurrentThreadId() != v13) )
  {
    v7 = *((_BYTE *)this + 132);
    if ( !v7 && (*((_BYTE *)this + 40) & 1) == 0 )
    {
      v16 = *((_QWORD *)this + 11);
      if ( v16 )
      {
        if ( *((_BYTE *)this + 133) )
        {
          if ( *((_BYTE *)this + 134) || (v20 = *((_QWORD *)this + 13)) == 0 )
          {
            TrimmedShapeData = CGeometry::GetTrimmedShapeData(this, (CShape **)this + 11, a3);
            v3 = TrimmedShapeData;
            if ( TrimmedShapeData < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TrimmedShapeData, 0xD3u, 0LL);
          }
          else
          {
            CShapePtr::~CShapePtr(a3);
            *(_QWORD *)a3 = v20;
            *((_BYTE *)a3 + 8) = 0;
          }
        }
        else
        {
          if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
            (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
          *(_QWORD *)a3 = v16;
          *((_BYTE *)a3 + 8) = 0;
        }
        return v3;
      }
    }
    v8 = 0LL;
    if ( v7 )
      v8 = a2;
    v9 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 224LL))(
           this,
           v8,
           a3);
    v10 = v9;
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xFAu, 0LL);
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 240LL))(this) )
      {
        v31 = 0LL;
        v32 = 0LL;
        if ( *(_QWORD *)a3 )
        {
          (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 232LL))(
            this,
            v8,
            &v31);
          v17 = *(CShape **)a3;
          v26[0] = v31;
          v30 = 0x28083F800000LL;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v26[2] = *((_QWORD *)&v31 + 1);
          v28 = v32;
          v26[1] = 0LL;
          v26[3] = 0LL;
          v29 = 0;
          v25 = 0LL;
          v18 = CShape::CopyShape(v17, (const struct CMILMatrix *)v26, &v25);
          v10 = v18;
          v3 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x108u, 0LL);
            goto LABEL_12;
          }
          if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
            (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
          *(_QWORD *)a3 = v25;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
      v3 = v10;
      if ( v10 >= 0 )
      {
        if ( *((_BYTE *)this + 133) )
        {
          v11 = CGeometry::GetTrimmedShapeData(this, (CShape **)a3, a3);
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xCAu, 0LL);
        }
        return v3;
      }
    }
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xC6u, 0LL);
    return v3;
  }
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    v14 = 1;
    ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 88));
    v3 = ShapeDataWorker;
    if ( ShapeDataWorker < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
      return v3;
    }
    *((_DWORD *)this + 10) &= ~1u;
  }
  else
  {
    v14 = 0;
  }
  if ( *((_BYTE *)this + 133) )
  {
    if ( v14 || *((_BYTE *)this + 134) || (v21 = (__int64 *)((char *)this + 104), !*((_QWORD *)this + 13)) )
    {
      v21 = (__int64 *)((char *)this + 104);
      v22 = CGeometry::GetTrimmedShapeData(this, (CShape **)this + 11, (CGeometry *)((char *)this + 104));
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xB2u, 0LL);
        return v3;
      }
      *((_BYTE *)this + 134) = 0;
    }
    v23 = *v21;
    CShapePtr::~CShapePtr(a3);
    *(_QWORD *)a3 = v23;
    *((_BYTE *)a3 + 8) = 0;
  }
  else
  {
    v15 = *((_QWORD *)this + 11);
    if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
      (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    *((_BYTE *)a3 + 8) = 0;
    *(_QWORD *)a3 = v15;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v3;
}

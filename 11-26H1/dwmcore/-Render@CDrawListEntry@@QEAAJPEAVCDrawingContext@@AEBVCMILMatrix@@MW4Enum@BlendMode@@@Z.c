/*
 * XREFs of ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?RealizePrimitive@CReconstructableDrawListEntry@@QEAAJXZ @ 0x180007A40 (-RealizePrimitive@CReconstructableDrawListEntry@@QEAAJXZ.c)
 *     ?CanUseWarpFastPath@CDrawListEntry@@IEBA_NPEAVCDrawingContext@@AEBVCMILMatrix@@W4Enum@BlendMode@@@Z @ 0x180012B60 (-CanUseWarpFastPath@CDrawListEntry@@IEBA_NPEAVCDrawingContext@@AEBVCMILMatrix@@W4Enum@BlendMode@.c)
 *     ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x1800374F0 (-ComputeVertexColor@CDrawListEntry@@QEBA-AU_D3DCOLORVALUE@@M@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077240 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18007B1C0 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18007B830 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF610 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800C24F0 (--1-$out_param_t@V-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1800C2540 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800C4BB0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18011E920 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x180171FB0 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174500 (-InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?HasClipPlanes@CDrawingContext@@QEBA_NXZ @ 0x18017FA70 (-HasClipPlanes@CDrawingContext@@QEBA_NXZ.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x180180860 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?GetWorldBounds@CMegaRectBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180182C20 (-GetWorldBounds@CMegaRectBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ @ 0x18019FB00 (-TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ.c)
 *     ?GetOcclusion@CDrawingContext@@QEBAPEBVCOcclusionContext@@XZ @ 0x1801E2A34 (-GetOcclusion@CDrawingContext@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntry::Render(
        struct CDrawListEntry *a1,
        __int64 a2,
        struct CHwLightCollectionBuffer *a3,
        float a4,
        unsigned int a5)
{
  bool v5; // zf
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // r12d
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  float v16; // xmm6_4
  __int64 v17; // rcx
  __m128 v18; // xmm1
  int v19; // eax
  unsigned int BatchCommand; // r14d
  bool CanUseWarpFastPath; // al
  __int64 v22; // r13
  bool v23; // r15
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  _DWORD *v26; // rbx
  const struct COcclusionContext *Occlusion; // r15
  int v28; // eax
  int v29; // r8d
  const struct _D3DCOLORVALUE *v30; // rax
  CDrawListPrimitive *v31; // r9
  CLightStack *v32; // rcx
  int CurrentLightBufferForContextNoRef; // eax
  int v34; // eax
  CDrawingContext *v35; // rcx
  int v36; // [rsp+20h] [rbp-60h]
  _DWORD *v37; // [rsp+30h] [rbp-50h] BYREF
  struct CHwLightCollectionBuffer *v38[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v39; // [rsp+48h] [rbp-38h] BYREF
  char v40; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = *((_BYTE *)a1 + 64) >= 0;
  v38[0] = a3;
  if ( !v5 )
  {
    v8 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a2 + 232));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, v8);
  }
  v10 = (*(__int64 (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v10 == 2 )
  {
    v11 = CDrawingContext::AddCpuClipAntialiasDrawList((CDrawingContext *)a2, a1);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
        (const char *)(unsigned int)v11,
        v36);
      return v12;
    }
    return 0LL;
  }
  v14 = *((_DWORD *)a1 + 16);
  if ( (v14 & 0x800) != 0 )
  {
    if ( *((float *)a1 + 15) == 0.0 )
      v15 = (v14 & 1) != 0 ? 5 : 15;
    else
      v15 = 19;
    v16 = FLOAT_1_0;
  }
  else
  {
    v16 = FLOAT_1_0;
    if ( a4 != 1.0
      || (v17 = *((_QWORD *)a1 + 5)) != 0
      && (v18 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 72)),
          COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - 1.0) & _xmm) >= 0.0000011920929) )
    {
      v15 = a5;
    }
    else
    {
      v15 = a5;
      if ( !a5 && (v14 & 1) != 0 )
        v15 = 5;
    }
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 3) + 48LL))(*((_QWORD *)a1 + 3), a2);
  BatchCommand = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)(unsigned int)v19,
      v36);
    return BatchCommand;
  }
  CanUseWarpFastPath = CDrawListEntry::CanUseWarpFastPath((__int64)a1, a2);
  v22 = *(_QWORD *)(a2 + 32);
  v23 = CanUseWarpFastPath;
  v37 = 0LL;
  *(_QWORD *)&v39.b = 0LL;
  *(_QWORD *)&v39.r = &v37;
  v40 = 1;
  BatchCommand = CDrawListBatchManager::CreateBatchCommand(
                   (CDrawListBatchManager *)(v22 + 24),
                   (struct CBatchCommand **)&v39.b);
  wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>(&v39);
  if ( (BatchCommand & 0x80000000) != 0 )
  {
    v24 = BatchCommand;
    v25 = 247LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)v24,
      v36);
    std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v37);
    return BatchCommand;
  }
  v36 = (int)v38[0];
  CBatchCommand::InitializeForRendering(v37, a1, v15);
  if ( v10 == 1 )
  {
    v26 = v37;
    if ( *v37 == 4 )
    {
      *(_OWORD *)v38 = 0LL;
      CDrawingContext::GetClipBoundsWorld(a2, (float *)v38);
      CMegaRectBatchCommand::InitializeMegaRectVisibleRegion(v26, v38);
      v38[1] = 0LL;
      v38[0] = 0LL;
      Occlusion = CDrawingContext::GetOcclusion((CDrawingContext *)a2);
      if ( Occlusion && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 8LL))(a2 + 16) )
      {
        *(struct _D3DCOLORVALUE *)&v39.r = 0LL;
        CMegaRectBatchCommand::GetWorldBounds(v26, &v39);
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 8LL))(a2 + 16);
        LOBYTE(v29) = 1;
        COcclusionContext::GetLargestOccluder((_DWORD)Occlusion, (unsigned int)&v39, v29, v28, (__int64)v38);
      }
      CMegaRectBatchCommand::OccludeBy(v26, v38);
    }
    else if ( !v23 )
    {
      v34 = CReconstructableDrawListEntry::RealizePrimitive(a1);
      BatchCommand = v34;
      if ( v34 < 0 )
      {
        v25 = 289LL;
LABEL_44:
        v24 = (unsigned int)v34;
        goto LABEL_45;
      }
    }
  }
  if ( *((_QWORD *)a1 + 5) )
  {
    v30 = CDrawListEntry::ComputeVertexColor(a1, &v39, v16);
    CDrawListPrimitive::UpdatePremultipliedColor(v31, v30);
  }
  v38[0] = 0LL;
  if ( CLightStack::HasLighting((CLightStack *)(a2 + 416)) )
  {
    CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                          v32,
                                          (struct CDrawingContext *)a2,
                                          (const struct CMILMatrix *)(a2 + 88),
                                          v38);
    v12 = CurrentLightBufferForContextNoRef;
    if ( CurrentLightBufferForContextNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
        (const char *)(unsigned int)CurrentLightBufferForContextNoRef,
        v36);
      if ( v37 )
        std::default_delete<CBatchCommand>::operator()();
      return v12;
    }
  }
  if ( CDrawingContext::HasClipPlanes((CDrawingContext *)a2) )
    CDrawingContext::TryGetClipPlaneInfo(v35);
  v34 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v22 + 16));
  BatchCommand = v34;
  if ( v34 < 0 )
  {
    v25 = 313LL;
    goto LABEL_44;
  }
  if ( v37 )
    std::default_delete<CBatchCommand>::operator()();
  return 0LL;
}

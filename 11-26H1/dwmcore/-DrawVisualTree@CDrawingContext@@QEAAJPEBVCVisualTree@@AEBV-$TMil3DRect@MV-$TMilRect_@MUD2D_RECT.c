/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800AE0A0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC (_CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2_--operator().c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18002C32C (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180055A40 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18005C1C0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180075000 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??1?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ @ 0x1800922D4 (--1-$unique_ptr@VCVisualTreePath@@U-$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ.c)
 *     ??4DrawVisualTreeData@CDrawingContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180092368 (--4DrawVisualTreeData@CDrawingContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009243C (--$-4U-$default_delete@VCVisualTreePath@@@std@@$0A@@-$unique_ptr@VCVisualTreePath@@U-$default_de.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x1800D2D90 (--$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingC.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180184B40 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18018D1D0 (-DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 *     ??$make_unique@VCVisualTreePath@@AEAPEBVCVisualTree@@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAPEBVCVisualTree@@@Z @ 0x18018F280 (--$make_unique@VCVisualTreePath@@AEAPEBVCVisualTree@@$0A@@std@@YA-AV-$unique_ptr@VCVisualTreePat.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x18018FDE0 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180190350 (-Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?SetRenderTargetSize@CDebugVisualImage@@SAXAEBUD2D_SIZE_U@@@Z @ 0x1801A3204 (-SetRenderTargetSize@CDebugVisualImage@@SAXAEBUD2D_SIZE_U@@@Z.c)
 *     ??$make_unique@VCVisualTreePath@@AEAV1@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAVCVisualTreePath@@@Z @ 0x1801B615C (--$make_unique@VCVisualTreePath@@AEAV1@$0A@@std@@YA-AV-$unique_ptr@VCVisualTreePath@@U-$default_.c)
 *     ?Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D76FC (-Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180208424 (-DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180215940 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z @ 0x18021ED94 (-NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236CE0 (-PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_RECT_F.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        struct CVisualTree *a2,
        float *a3,
        COcclusionContext *a4,
        int a5,
        int a6,
        __int64 a7)
{
  __m128 v7; // xmm2
  __int64 v8; // r15
  char *v10; // rcx
  __int64 v11; // r8
  COcclusionContext *v12; // rbx
  __int64 **v14; // rsi
  int v15; // edi
  char v16; // r13
  COcclusionContext *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  float *v21; // rdx
  double v22; // xmm7_8
  double v23; // xmm6_8
  double v24; // xmm9_8
  __int128 left_low; // xmm14
  __int128 top_low; // xmm11
  __int128 right_low; // xmm12
  double v28; // xmm8_8
  __int128 bottom_low; // xmm13
  const struct D2D_SIZE_U *v30; // rax
  FLOAT v31; // xmm7_4
  float v32; // xmm10_4
  FLOAT v33; // xmm6_4
  float v34; // xmm0_4
  __int64 v35; // rdx
  __int64 **v36; // rax
  const struct CVisual *CurrentVisual; // rax
  int v38; // eax
  int v39; // r9d
  __int64 **v40; // rax
  float *Bounds; // r8
  float v42; // xmm0_4
  int v43; // ecx
  unsigned int v44; // eax
  bool v45; // si
  int v46; // ebx
  DwmDbg::Backdrops *v47; // rcx
  char v48; // r9
  __int64 v49; // rcx
  __int64 i; // rcx
  CD3DDevice *v51; // rbx
  struct ID3D11View *v52; // rax
  __m128i v53; // xmm9
  __m128i v54; // xmm8
  __m128i v55; // xmm7
  __m128i v56; // xmm6
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  unsigned __int64 v62; // rax
  float v63; // xmm1_4
  char **v64; // rax
  const void *v65; // rsi
  const char *v66; // rdi
  const char *v67; // rbx
  DwmDbg::DbgString *v68; // rax
  DwmDbg::DbgString *v69; // rax
  const char *v70; // rdx
  __int64 v71; // rdi
  DwmDbg::DbgString *v72; // rbx
  DwmDbg::DbgString *v73; // rax
  int v74; // eax
  int v75; // eax
  unsigned int v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  char v79; // [rsp+38h] [rbp-D0h]
  void *v80; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_RECT_F v81; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+68h] [rbp-A0h]
  void *v84; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v85; // [rsp+78h] [rbp-90h] BYREF
  __int64 v86; // [rsp+88h] [rbp-80h]
  float *v87; // [rsp+90h] [rbp-78h]
  char *v88; // [rsp+98h] [rbp-70h] BYREF
  int v89; // [rsp+A0h] [rbp-68h]
  int v90; // [rsp+A4h] [rbp-64h]
  char *v91; // [rsp+A8h] [rbp-60h]
  _BYTE v92[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-50h]
  __int64 v94; // [rsp+C0h] [rbp-48h]
  __int64 v95; // [rsp+C8h] [rbp-40h]
  __int64 *v96; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v97; // [rsp+D8h] [rbp-30h] BYREF

  v8 = a7;
  v10 = (char *)this + 7936;
  v87 = a3;
  v11 = 0LL;
  v80 = a2;
  v91 = v10;
  v12 = a4;
  v79 = 0;
  v14 = (__int64 **)(v10 + 32);
  v92[0] = *v10;
  v15 = 0;
  v16 = 0;
  v92[1] = v10[1];
  v93 = *((_QWORD *)v10 + 1);
  v94 = *((_QWORD *)v10 + 2);
  v95 = *((_QWORD *)v10 + 3);
  v96 = (__int64 *)*((_QWORD *)v10 + 4);
  *((_QWORD *)v10 + 4) = 0LL;
  if ( a4 )
  {
    if ( !COcclusionContext::IsCurrent(a4)
      || (v18 = COcclusionContext::SetDeviceTransform(v17, (CDrawingContext *)((char *)this + 88)), v11 = 0LL, v18 < 0) )
    {
      v12 = (COcclusionContext *)v11;
    }
    v10 = (char *)this + 7936;
  }
  if ( !a7 )
    v8 = *((_QWORD *)a2 + 9);
  v19 = *((_QWORD *)this + 24);
  v86 = v8;
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 1608);
    if ( *((_QWORD *)this + 25) != v11 )
      v20 = v11;
    v86 = v20;
  }
  v21 = v87;
  *v10 = 1;
  *((_BYTE *)this + 7937) = v11;
  v82 = 0LL;
  *((_QWORD *)this + 993) = a2;
  *((_QWORD *)this + 994) = v8;
  *((_QWORD *)this + 995) = v12;
  v83 = 0LL;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)this + 88, v21, &v82.left);
  *(_QWORD *)&v22 = LODWORD(v82.left);
  *(_QWORD *)&v23 = LODWORD(v82.top);
  *(_QWORD *)&v24 = LODWORD(v82.right);
  v85 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, &v85.left);
  left_low = LODWORD(v85.left);
  if ( v85.left > *(float *)&v22 )
    *(_QWORD *)&v22 = LODWORD(v85.left);
  top_low = LODWORD(v85.top);
  if ( v85.top > *(float *)&v23 )
    *(_QWORD *)&v23 = LODWORD(v85.top);
  right_low = LODWORD(v85.right);
  if ( *(float *)&v24 > v85.right )
    *(_QWORD *)&v24 = LODWORD(v85.right);
  *(_QWORD *)&v28 = LODWORD(v82.bottom);
  bottom_low = LODWORD(v85.bottom);
  if ( v82.bottom > v85.bottom )
    *(_QWORD *)&v28 = LODWORD(v85.bottom);
  if ( *(float *)&v24 <= *(float *)&v22 || *(float *)&v28 <= *(float *)&v23 )
  {
    v24 = 0.0;
    v23 = 0.0;
    v22 = 0.0;
    v28 = 0.0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    v30 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 3) + 88LL))(
                                       *((_QWORD *)this + 3),
                                       &v97);
    CDebugVisualImage::SetRenderTargetSize(v30);
  }
  v31 = (float)(int)PixelAlign(v22, 0, *(double *)v7.m128_u64);
  v82.left = v31;
  v32 = (float)(int)PixelAlign(v23, 0, *(double *)v7.m128_u64);
  v82.top = v32;
  v33 = (float)(int)PixelAlign(v24, 1, *(double *)v7.m128_u64);
  v82.right = v33;
  v34 = (float)(int)PixelAlign(v28, 1, *(double *)v7.m128_u64);
  v82.bottom = v34;
  if ( v33 > v31 && v34 > v32 )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2);
    v35 = *((_QWORD *)this + 25);
    if ( v35 )
    {
      v36 = (__int64 **)std::make_unique<CVisualTreePath,CVisualTreePath &,0>(&v80, *(__int128 ***)(v35 + 7968));
      std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>(v14, v36);
      std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((__int64 **)&v80);
      CurrentVisual = CDrawingContext::GetCurrentVisual(*((CDrawingContext **)this + 25));
      v38 = CVisualTreePath::Append(*((CVisualTreePath **)this + 996), CurrentVisual, a2);
      v15 = v38;
      if ( v38 < 0 )
      {
        v77 = 4965;
LABEL_30:
        v39 = v38;
LABEL_114:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, v77, 0LL);
        goto LABEL_115;
      }
    }
    else
    {
      v40 = (__int64 **)std::make_unique<CVisualTreePath,CVisualTree const * &,0>(&v84, (__int64 *)&v80);
      std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>(v14, v40);
      std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((__int64 **)&v84);
    }
    Bounds = (float *)CVisual::GetBounds(v8, (__int64)a2);
    v42 = Bounds[5];
    v43 = (v42 <= Bounds[4]) + 1;
    if ( Bounds[2] > *Bounds )
      v43 = v42 <= Bounds[4];
    v44 = v43 + 1;
    if ( Bounds[3] > Bounds[1] )
      v44 = v43;
    v45 = v44 > 1;
    if ( *((_BYTE *)g_pComposition + 6458) && *((_BYTE *)g_pComposition + 6459) )
    {
      v45 = 1;
      *((_QWORD *)this + 9) = 0LL;
      *((_DWORD *)this + 20) = 0;
      v46 = 2;
      if ( a5 )
        v46 = a5;
      *((_DWORD *)this + 21) = 1065353216;
    }
    else
    {
      v46 = a5;
    }
    v15 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (CDrawingContext *)((char *)this + 88), 1, 1);
    if ( v15 < 0 )
    {
      v39 = v15;
      v77 = 4989;
      goto LABEL_114;
    }
    v48 = 1;
    if ( !*((_QWORD *)this + 25) )
    {
      v38 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__m128 *)&v82, 1, 0);
      v15 = v38;
      if ( v38 < 0 )
      {
        v77 = 4996;
        goto LABEL_30;
      }
      v48 = 1;
      v79 = 1;
      if ( v46 )
      {
        v49 = *((_QWORD *)this + 995);
        if ( !v49 || !COcclusionContext::IsOccluded(v49, (__m128 *)&v82, 0x7FFFFFFF, 1) )
        {
          v38 = CDrawingContext::Clear(this, (const struct _D3DCOLORVALUE *)((char *)this + 72));
          v15 = v38;
          if ( v38 < 0 )
          {
            v77 = 5026;
            goto LABEL_30;
          }
          goto LABEL_52;
        }
        v48 = 1;
        if ( v46 == 1 )
        {
          for ( i = 0LL; i < 16; i += 4LL )
            *(LONG *)((char *)&v97.left + i) = (int)*(float *)((char *)&v82.left + i);
          v51 = (CD3DDevice *)*((_QWORD *)this + 4);
          v52 = (struct ID3D11View *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 176LL))(*((_QWORD *)this + 3));
          CD3DDevice::DiscardView(v51, v52, &v97);
LABEL_52:
          v48 = 1;
        }
      }
    }
    if ( !v45 )
    {
      if ( !*((_QWORD *)this + 25) && *(float *)&a6 != 0.0 )
      {
        v53 = (__m128i)LODWORD(v82.left);
        v54 = (__m128i)LODWORD(v82.top);
        v55 = (__m128i)LODWORD(v82.right);
        v56 = (__m128i)LODWORD(v82.bottom);
        v81 = v82;
        v57 = (int)floorf_0((float)(*(float *)&a6 * 1.125) + 0.5);
        if ( v57 )
        {
          v7 = 0LL;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v81.left, (float)v57, (float)v57);
          v53 = (__m128i)LODWORD(v81.left);
          if ( *(float *)&left_low > v81.left )
          {
            LODWORD(v81.left) = left_low;
            v53 = (__m128i)left_low;
          }
          v54 = (__m128i)LODWORD(v81.top);
          if ( *(float *)&top_low > v81.top )
          {
            LODWORD(v81.top) = top_low;
            v54 = (__m128i)top_low;
          }
          v55 = (__m128i)LODWORD(v81.right);
          if ( v81.right > *(float *)&right_low )
          {
            v55 = (__m128i)right_low;
            LODWORD(v81.right) = right_low;
          }
          v56 = (__m128i)LODWORD(v81.bottom);
          if ( v81.bottom > *(float *)&bottom_low )
          {
            v56 = (__m128i)bottom_low;
            LODWORD(v81.bottom) = bottom_low;
          }
          if ( IsEmpty(&v81) )
          {
            v56 = 0LL;
            v55 = 0LL;
            v54 = 0LL;
            v81.bottom = 0.0;
            v53 = 0LL;
            v81.right = 0.0;
            v81.top = 0.0;
            v81.left = 0.0;
          }
        }
        if ( (_mm_cvtsi128_si32(v53) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v7.m128_f32[0] = (float)(int)*(float *)v53.m128i_i32 - *(float *)v53.m128i_i32;
          v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
          v58 = (int)*(float *)v53.m128i_i32 - _mm_cvtsi128_si32((__m128i)v7);
        }
        else
        {
          *(float *)&v80 = *(float *)v53.m128i_i32 + 6291456.25;
          v58 = (int)((_DWORD)v80 << 10) >> 11;
        }
        LODWORD(v88) = v58;
        if ( (_mm_cvtsi128_si32(v54) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v7.m128_f32[0] = (float)(int)*(float *)v54.m128i_i32 - *(float *)v54.m128i_i32;
          v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
          v59 = (int)*(float *)v54.m128i_i32 - _mm_cvtsi128_si32((__m128i)v7);
        }
        else
        {
          *(float *)&v80 = *(float *)v54.m128i_i32 + 6291456.25;
          v59 = (int)((_DWORD)v80 << 10) >> 11;
        }
        HIDWORD(v88) = v59;
        *(float *)v55.m128i_i32 = (float)(*(float *)v55.m128i_i32 - *(float *)v53.m128i_i32) * *(float *)&a6;
        if ( (_mm_cvtsi128_si32(v55) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v7.m128_f32[0] = (float)(int)*(float *)v55.m128i_i32 - *(float *)v55.m128i_i32;
          v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
          v60 = (int)*(float *)v55.m128i_i32 - _mm_cvtsi128_si32((__m128i)v7);
        }
        else
        {
          *(float *)&v80 = *(float *)v55.m128i_i32 + 6291456.25;
          v60 = (int)((_DWORD)v80 << 10) >> 11;
        }
        v89 = v60;
        *(float *)v56.m128i_i32 = (float)(*(float *)v56.m128i_i32 - *(float *)v54.m128i_i32) * *(float *)&a6;
        if ( (_mm_cvtsi128_si32(v56) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v7.m128_f32[0] = (float)(int)*(float *)v56.m128i_i32 - *(float *)v56.m128i_i32;
          v61 = (int)*(float *)v56.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)));
        }
        else
        {
          *(float *)&v80 = *(float *)v56.m128i_i32 + 6291456.25;
          v61 = (int)((_DWORD)v80 << 10) >> 11;
        }
        v90 = v61;
        v38 = CDrawingContext::PushSuperSampleLayer(this);
        v15 = v38;
        if ( v38 < 0 )
        {
          v77 = 5054;
          goto LABEL_30;
        }
        v48 = 1;
        v16 = 1;
      }
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      {
        v62 = 0LL;
        v63 = (float)(v82.bottom - v82.top) * (float)(v82.right - v82.left);
        if ( v63 >= 9.223372e18 )
        {
          v63 = v63 - 9.223372e18;
          if ( v63 < 9.223372e18 )
            v62 = 0x8000000000000000uLL;
        }
        CRenderPerf::NotifyDrawVisualTree((CComposition *)((char *)g_pComposition + 16), v62 + (unsigned int)(int)v63);
      }
      *((_DWORD *)this + 1994) = 0;
      *((_BYTE *)this + 7937) = v48;
      *((_BYTE *)this + 185) = 0;
      if ( DwmDbg::Backdrops::IsEtwEnabled(v47)
        && (*(char *)(v8 + 102) < 0
         || (*(_BYTE *)(v8 + 103) & 2) != 0
         || *(int *)(v8 + 256) > 0
         || *(int *)(v8 + 260) > 0) )
      {
        v64 = DwmDbg::DbgString::DbgString((char **)&v97, (CDrawingContext *)((char *)this + 88));
        v65 = (const void *)*((_QWORD *)this + 24);
        v66 = *v64;
        v67 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v80, &v82);
        v68 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v84, &v85);
        v69 = DwmDbg::DbgString::DbgString(
                &v88,
                "rcTargetBounds=[%s], rcRenderBounds=[%s], m_pCutoffBVI=0x%p, m_deviceTransform=[%s]",
                *(const char **)v68,
                v67,
                v65,
                v66);
        v70 = "Render-StartWalk-Backdrop";
        v71 = *((_QWORD *)this + 996);
        v72 = v69;
        if ( !*((_QWORD *)this + 24) )
          v70 = "Render-StartWalk-Normal";
        v73 = DwmDbg::DbgString::DbgString((char **)&v81, v70);
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v73, v8, a2, v71, v72);
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v84);
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v80);
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v97);
      }
      v74 = CVisualTreeIterator::Walk<CDrawingContext>(
              (__int64)this + 3200,
              *((CVisualTree **)this + 993),
              v86,
              this,
              v78,
              (struct CVisual *)v8);
      v15 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v74, 0x13E3u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 7937) = 0;
        if ( v16 )
        {
          v16 = 0;
          v38 = CDrawingContext::PopLayerInternal((__int64)this);
          v15 = v38;
          if ( v38 < 0 )
          {
            v77 = 5098;
            goto LABEL_30;
          }
        }
        if ( !CCommonRegistryData::m_fShowDirtyRegions )
        {
LABEL_110:
          if ( v79 )
            CDrawingContext::PopGpuClipRectInternal(this, 0);
          CDrawingContext::PopTransformInternal(this, 1);
          goto LABEL_115;
        }
        v75 = CDrawingContext::DrawRectangleOverlay(this, v87);
        v15 = v75;
        if ( v75 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v75, 0x13F0u, 0LL);
      }
      if ( v16 )
        CDrawingContext::PopLayerInternal((__int64)this);
    }
    if ( v15 < 0 )
      goto LABEL_115;
    goto LABEL_110;
  }
LABEL_115:
  CDrawingContext::DrawVisualTreeData::operator=((__int64)v91, (__int64)v92);
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>(&v96);
  return (unsigned int)v15;
}

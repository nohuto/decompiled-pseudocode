/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18006F2D0 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180070D10 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x180070F40 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180070FB0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800AEC70 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800CA0A0 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x1801025E0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180189050 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18018AF70 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180298680 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180298740 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(CD2DContext *this, __int64 a2, __int64 a3)
{
  CBatchOptimizer *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rsi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edi
  __int64 v13; // r8
  unsigned int i; // r14d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-58h] BYREF
  int *v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  int *v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( !*((_QWORD *)this + 17) )
    return 0LL;
  v4 = (CBatchOptimizer *)*((_QWORD *)this + 18);
  if ( v4 )
    CBatchOptimizer::Flush(v4);
  v5 = *((_QWORD *)this + 17);
  v6 = 0LL;
  *(_DWORD *)(v5 + 44) = *((_DWORD *)this + 8);
  *(_QWORD *)(v5 + 32) = 0LL;
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( !v7 )
    return 0LL;
  v9 = v7;
  if ( !*((_BYTE *)this + 429) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v20 = 0;
      v22 = &v19;
      v19 = 16;
      v24 = &v20;
      v23 = 4LL;
      v25 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        a3,
        3u,
        &v21);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v19 = 0;
      v22 = &v20;
      v20 = 16;
      v24 = &v19;
      v23 = 4LL;
      v25 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v13,
        3u,
        &v21);
    }
    for ( i = 0; i < *((_DWORD *)this + 86); v6 = v15 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * i);
      if ( v6 )
        *(_BYTE *)(v6 + 78) = 0;
      if ( !*(_BYTE *)(v15 + 78) )
      {
        v16 = *(_QWORD *)(v15 + 40);
        v17 = *(_QWORD *)(v15 + 32);
        *(_QWORD *)(v15 + 16) = this;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
          *((_QWORD *)this + 26),
          v17,
          v16);
        *(_BYTE *)(v15 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v15);
      }
      ++i;
    }
    *((_BYTE *)this + 429) = 1;
  }
  v10 = *((_QWORD *)this + 26);
  *((_BYTE *)this + 430) = 1;
  (*(void (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v10 + 120LL))(v10, v9);
  v11 = _InterlockedDecrement(v9 + 2);
  if ( v11 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v18);
  if ( !v11 )
  {
    if ( _InterlockedAdd(v9 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v18);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 40LL))(v9);
    v12 = _InterlockedDecrement(v9 + 2);
    if ( v12 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v18);
    if ( !v12 )
    {
      if ( _InterlockedDecrement(v9 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v18);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
    }
  }
  return 0LL;
}

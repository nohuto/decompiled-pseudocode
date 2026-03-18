/*
 * XREFs of ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18006EFE0 (-SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18006F290 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18006F2D0 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180070FB0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800AEC70 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800CA0A0 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180189050 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18018AF70 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180298680 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180298740 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::EnsureBeginDraw(CD2DContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r15d
  __m128i si128; // xmm6
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-29h] BYREF
  int v19; // [rsp+38h] [rbp-21h] BYREF
  __m128i v20; // [rsp+40h] [rbp-19h] BYREF
  int *v21; // [rsp+50h] [rbp-9h]
  __int64 v22; // [rsp+58h] [rbp-1h]
  int *v23; // [rsp+60h] [rbp+7h]
  __int64 v24; // [rsp+68h] [rbp+Fh]

  if ( *((_BYTE *)this + 429) )
  {
    *((_BYTE *)this + 430) = 1;
  }
  else
  {
    v4 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v19 = 0;
      v21 = &v18;
      v18 = 16;
      v23 = &v19;
      v22 = 4LL;
      v24 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        a3,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&v20);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v18 = 0;
      v21 = &v19;
      v19 = 16;
      v23 = &v18;
      v22 = 4LL;
      v24 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v5,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&v20);
    }
    v6 = 0;
    if ( *((_DWORD *)this + 86) )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      do
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * v6);
        if ( v4 )
          *(_BYTE *)(v4 + 78) = 0;
        if ( !*(_BYTE *)(v8 + 78) )
        {
          v9 = *(_QWORD *)(v8 + 40);
          v10 = *(_QWORD *)(v8 + 32);
          *(_QWORD *)(v8 + 16) = this;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
            *((_QWORD *)this + 26),
            v10,
            v9);
          v11 = *(_BYTE *)(v8 + 77) == 0;
          *(_BYTE *)(v8 + 78) = 1;
          if ( v11 )
          {
            v16 = *(_QWORD *)(v8 + 16);
            v17 = *(_QWORD *)(v16 + 208);
            *(_BYTE *)(v16 + 431) = 1;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 80LL))(v17, 0LL, 1LL);
          }
          else
          {
            v12 = *(_QWORD *)(v8 + 16);
            v13 = *(_DWORD *)(v8 + 68);
            v20 = si128;
            v21 = 0LL;
            (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(v12 + 200) + 240LL))(*(_QWORD *)(v12 + 200), &v20);
            v14 = *(_QWORD *)(v12 + 208);
            *(_BYTE *)(v12 + 431) = 0;
            v15 = *(_OWORD *)(v8 + 52);
            *(_DWORD *)(v12 + 408) = v13;
            *(_OWORD *)(v12 + 392) = v15;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, v8 + 52, v13);
            *(_BYTE *)(v8 + 77) = 1;
          }
        }
        ++v6;
        v4 = v8;
      }
      while ( v6 < *((_DWORD *)this + 86) );
    }
    *(_WORD *)((char *)this + 429) = 257;
  }
}

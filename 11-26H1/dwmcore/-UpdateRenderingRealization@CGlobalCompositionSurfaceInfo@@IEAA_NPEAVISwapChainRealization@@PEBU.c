/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012AA90 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012ACF0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ??8@YA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C30C (--8@YA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniquenes.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180127A40 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18012A790 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ?Invalidate@CDecodeBitmap@@QEAAX_N@Z @ 0x1801A834C (-Invalidate@CDecodeBitmap@@QEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        CDecodeBitmap **this,
        struct ISwapChainRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_RGNDATA_ *a4,
        const struct ScrollOptimization *a5)
{
  bool v5; // r15
  char v6; // r14
  bool v7; // r12
  bool v11; // r13
  __int64 v12; // rdx
  CDecodeBitmap *v13; // rcx
  bool v14; // zf
  __int128 v15; // xmm0
  CDecodeBitmap *v16; // rax
  unsigned int v17; // ecx
  __m128 v18; // xmm6
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  __m128 v21; // xmm7
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int32 v24; // xmm2_4
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rbx
  CDecodeBitmap *v28; // rcx
  unsigned int v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+3Ch] [rbp-CCh]
  unsigned int v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  _BYTE v35[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+A8h] [rbp-60h]
  _BYTE v37[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v40[16]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v41; // [rsp+128h] [rbp+20h] BYREF
  __int128 v42; // [rsp+138h] [rbp+30h] BYREF
  __int128 v43; // [rsp+148h] [rbp+40h] BYREF
  __int128 v44; // [rsp+158h] [rbp+50h] BYREF
  int *v45; // [rsp+168h] [rbp+60h] BYREF
  int v46; // [rsp+170h] [rbp+68h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v11 = a3 && (*((_DWORD *)a3 + 34) & 0x400) != 0;
  v46 = 0;
  v45 = &v46;
  if ( *((_BYTE *)this + 96) )
  {
    v5 = 1;
    v6 = 1;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain((CGlobalCompositionSurfaceInfo *)this) && a2 && a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 216LL))(
        a2,
        a3);
  }
  else if ( CGlobalCompositionSurfaceInfo::IsSwapChain((CGlobalCompositionSurfaceInfo *)this) )
  {
    v15 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v16 = this[26];
    v17 = 0;
    v31 = 0;
    v18 = 0LL;
    HIDWORD(v33) = 0;
    v30 = 0;
    v38 = 0;
    v42 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v44 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, _BYTE *))(*((_QWORD *)v16 + 1) + 48LL))(
        (__int64)v16 + 8,
        &v42,
        &v44,
        v37);
      v31 = (*(__int64 (__fastcall **)(CDecodeBitmap *))(*(_QWORD *)this[26] + 104LL))(this[26]);
      v18 = (__m128)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(CDecodeBitmap *, _BYTE *))(*(_QWORD *)this[26] + 112LL))(
                                                       this[26],
                                                       v40));
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)this[26] + 1) + 24LL))(
              (__int64)this[26] + 8,
              &v39);
      v15 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v20 = *(_QWORD *)v19;
      v17 = *(_DWORD *)(v19 + 8);
      v33 = *(_QWORD *)v19;
      v30 = v17;
    }
    else
    {
      v20 = 0LL;
    }
    v12 = 0LL;
    v39 = v20;
    v36 = 0;
    v21 = 0LL;
    v22 = v17;
    v41 = v15;
    v43 = v15;
    if ( a2 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *, _QWORD))(*(_QWORD *)a2 + 216LL))(
          a2,
          a3,
          v17);
      (*(void (__fastcall **)(char *, __int128 *, __int128 *, _BYTE *))(*((_QWORD *)a2 + 1) + 48LL))(
        (char *)a2 + 8,
        &v41,
        &v43,
        v35);
      v32 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 104LL))(a2);
      v21 = (__m128)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)a2 + 112LL))(
                                                       a2,
                                                       v40));
      v23 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, v40);
      v17 = v30;
      v12 = v32;
      v22 = *(_DWORD *)(v23 + 8);
      v39 = *(_QWORD *)v23;
    }
    if ( v11
      || HIDWORD(v33) != HIDWORD(v39)
      || v31 != (_DWORD)v12
      || v17 != v22
      || (COERCE_FLOAT(v24 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
          COERCE_FLOAT(COERCE_UNSIGNED_INT(v18.m128_f32[0] - v21.m128_f32[0]) & v24) > 0.0000011920929)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - _mm_shuffle_ps(v21, v21, 85).m128_f32[0]) & v24) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - _mm_shuffle_ps(v21, v21, 170).m128_f32[0]) & v24) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - _mm_shuffle_ps(v21, v21, 255).m128_f32[0]) & v24) > 0.0000011920929
      || !operator==((float *)&v42, (float *)&v41)
      || !operator==((float *)&v44, (float *)&v43)
      || (unsigned __int8)CMILMatrix::operator!=(v37, v35) )
    {
      v6 = 1;
    }
  }
  if ( this[26] != a2 )
  {
    v13 = this[15];
    if ( v13 )
      CDecodeBitmap::Invalidate(v13, 0);
    v14 = this[26] == 0LL;
    this[26] = a2;
    v5 = 1;
    if ( !v14 != (a2 != 0LL) )
      v6 = 1;
  }
  if ( v11 && CGlobalCompositionSurfaceInfo::IsSwapChain((CGlobalCompositionSurfaceInfo *)this) )
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo::CBindInfo *)(this + 14));
  if ( this[26] )
  {
    v7 = CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
           (CGlobalCompositionSurfaceInfo *)this,
           v5,
           a4,
           a5,
           (struct CRegion *)&v45);
  }
  else
  {
    v5 = 1;
    v6 = 1;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    if ( v5 || v6 || v7 )
    {
      v25 = (this[9] - this[8]) >> 3;
      if ( v25 )
      {
        if ( v7 )
        {
          do
          {
            v26 = *((_QWORD *)this[8] + v25 - 1);
            if ( v26 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 8LL))(*((_QWORD *)this[8] + v25 - 1));
            LOBYTE(v12) = v6;
            (*(void (__fastcall **)(__int64, __int64, int **))(*(_QWORD *)v26 + 24LL))(v26, v12, &v45);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            --v25;
          }
          while ( v25 );
        }
        else
        {
          do
          {
            v27 = *((_QWORD *)this[8] + v25 - 1);
            if ( v27 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 8LL))(*((_QWORD *)this[8] + v25 - 1));
            LOBYTE(v12) = v6;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 24LL))(v27, v12, 0LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            --v25;
          }
          while ( v25 );
        }
      }
    }
    *((_BYTE *)this + 96) = 0;
    v28 = this[20];
    if ( v28 != this[21] )
      this[21] = v28;
    if ( v7 )
      CRegion::GetRectangles(&v45, this + 20);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v45);
  return v5;
}

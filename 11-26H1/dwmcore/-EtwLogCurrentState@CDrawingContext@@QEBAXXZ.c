/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801834A0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF110 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdx
  int v9; // eax
  __m128 v10; // xmm1
  float v11; // xmm7_4
  float v12; // xmm6_4
  __m128 si128; // xmm1
  __int64 v14; // rcx
  int v15; // eax
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  unsigned __int32 v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  CDrawingContext *v29; // rcx
  struct CVisual *CurrentVisual; // rax
  char v31; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v32; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v33[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int32 v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int32 v35; // [rsp+58h] [rbp-A8h] BYREF
  float v36; // [rsp+60h] [rbp-A0h] BYREF
  float v37; // [rsp+68h] [rbp-98h] BYREF
  CDrawingContext *v38; // [rsp+70h] [rbp-90h] BYREF
  __m128i v39; // [rsp+80h] [rbp-80h] BYREF
  __m128i v40; // [rsp+90h] [rbp-70h]
  __m128i v41; // [rsp+A0h] [rbp-60h]
  __m128i v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+D0h] [rbp-30h] BYREF
  CDrawingContext **v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __m128 *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int32 *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  unsigned __int32 *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  float *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  float *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  char *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __m128i *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  _DWORD *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) == 0 )
    return;
  v4 = *((_QWORD *)this + 81);
  v5 = *((_DWORD *)this + 168) - 1;
  v43 = 0;
  v6 = *(_QWORD *)(v4 + 8LL * v5);
  v32 = 0LL;
  v7 = *(_DWORD *)(v6 + 128);
  if ( (!v7 || v7 == -1) && CDrawingContext::GetCurrentVisual(this) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(v29);
    v7 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 144LL))(CurrentVisual);
  }
  v8 = *((_QWORD *)this + 93);
  if ( v8 != *((_QWORD *)this + 92) )
  {
    if ( *(_QWORD *)(v8 - 184) )
    {
      v9 = *((_DWORD *)this + 778);
      if ( !v9 )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        LODWORD(v11) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
        LODWORD(v12) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
        v32 = si128;
        goto LABEL_9;
      }
      v10 = *(__m128 *)(*((_QWORD *)this + 388) + 16LL * (unsigned int)(v9 - 1));
      LODWORD(v11) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
      v32 = v10;
      LODWORD(v12) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(v8 - 192) + 88LL))(*(_QWORD *)(v8 - 192), v33);
      v12 = (float)v33[0];
      v11 = (float)v33[1];
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_9:
    v14 = *((_QWORD *)this + 93);
    if ( v14 == *((_QWORD *)this + 92) || !*(_QWORD *)(v14 - 168) )
    {
      v18 = v32.m128_u32[1];
      v17.m128_i32[0] = v32.m128_i32[0];
    }
    else
    {
      v15 = *((_DWORD *)this + 784);
      if ( v15 )
        v16 = *(__m128 *)(*((_QWORD *)this + 391) + 16LL * (unsigned int)(v15 - 1));
      else
        v16 = si128;
      v17.m128_i32[0] = v32.m128_i32[0];
      if ( v16.m128_f32[0] > v32.m128_f32[0] )
        v17.m128_i32[0] = v16.m128_i32[0];
      v18 = v32.m128_u32[1];
      v19 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
      v20 = v32.m128_f32[1];
      if ( v19 > v32.m128_f32[1] )
      {
        v18 = LODWORD(v19);
        v20 = v19;
      }
      v21 = v12;
      v22 = _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
      if ( v12 > v22 )
      {
        v12 = v22;
        v21 = v22;
      }
      v23 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0];
      v24 = v11;
      if ( v11 > v23 )
      {
        v11 = v23;
        v24 = v23;
      }
      if ( v21 <= v17.m128_f32[0] || v24 <= v20 )
      {
        v17.m128_i32[0] = 0;
        v11 = 0.0;
        v12 = 0.0;
        v18 = 0;
      }
    }
    goto LABEL_23;
  }
  v17 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  LODWORD(v11) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  LODWORD(v12) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  v18 = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
LABEL_23:
  v25 = *((_DWORD *)this + 72);
  if ( v25 )
  {
    v26 = (unsigned int)(v25 - 1);
    v27 = *((_QWORD *)this + 35);
    v39 = *(__m128i *)(68 * v26 + v27);
    v40 = *(__m128i *)(68 * v26 + v27 + 16);
    v41 = *(__m128i *)(68 * v26 + v27 + 32);
    v42 = *(__m128i *)(68 * v26 + v27 + 48);
    v43 = *(_DWORD *)(68 * v26 + v27 + 64);
  }
  else
  {
    v39 = _mm_load_si128((const __m128i *)&_xmm);
    v40 = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v43) = BYTE1(v43) & 0xC0 | 0x29;
    v41 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v43) = -86;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    if ( *((_BYTE *)this + 7936) )
    {
      if ( *((_BYTE *)this + 7937) )
        v28 = *((_QWORD *)this + 401);
      else
        v28 = *((_QWORD *)this + 994);
    }
    else
    {
      v28 = 0LL;
    }
    v32.m128_u64[0] = v28;
    v37 = v11;
    v45 = &v38;
    v36 = v12;
    v47 = &v32;
    v35 = v18;
    v49 = &v34;
    v51 = &v35;
    v53 = &v36;
    v55 = &v37;
    v57 = &v31;
    v59 = &v39;
    v61 = v33;
    v34 = v17.m128_i32[0];
    v33[0] = v7;
    v31 = 68;
    v38 = this;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 68LL;
    v62 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
      a3,
      0xAu,
      &v44);
  }
}

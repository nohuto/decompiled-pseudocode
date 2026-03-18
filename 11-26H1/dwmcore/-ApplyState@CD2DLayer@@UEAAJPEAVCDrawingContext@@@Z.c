/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B600 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18006FB70 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180071420 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 v3; // r14
  struct CDrawingContext *v4; // rsi
  __int64 v6; // rsi
  char *v7; // rdi
  unsigned int v8; // r15d
  int v9; // r12d
  __int32 v10; // r13d
  float v11; // xmm9_4
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  __m128 si128; // xmm7
  float v17; // xmm8_4
  __int64 v18; // rsi
  float v19; // xmm6_4
  struct _EVENT_DATA_DESCRIPTOR v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  __int64 v28; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdi
  CComposition *v33; // rcx
  CComposition *v34; // rax
  __int64 v35; // rcx
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v40[12]; // [rsp+54h] [rbp-ACh] BYREF
  __m128 v41; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v44; // [rsp+90h] [rbp-70h]
  __m128 v45; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+B0h] [rbp-50h] BYREF
  __m128 v48; // [rsp+C0h] [rbp-40h]
  __m128 v49; // [rsp+D0h] [rbp-30h]
  __m128 v50; // [rsp+E0h] [rbp-20h]
  unsigned __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]

  v3 = 0LL;
  v4 = a2;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v32 = (*(__int64 (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 16LL))(this);
    if ( (*(unsigned int (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 8LL))(this) == 1 )
    {
      v33 = g_pComposition;
      a2 = 0LL;
      if ( g_pComposition )
        a2 = (struct CDrawingContext *)*((_QWORD *)g_pComposition + 110);
      if ( *((struct CDrawingContext **)g_pComposition + 2) == a2 )
      {
        ++*((_DWORD *)g_pComposition + 53);
        *((_QWORD *)v33 + 22) += v32;
      }
    }
    else
    {
      v34 = g_pComposition;
      v35 = 0LL;
      if ( g_pComposition )
        v35 = *((_QWORD *)g_pComposition + 110);
      if ( *((_QWORD *)g_pComposition + 2) == v35 )
      {
        ++*((_DWORD *)g_pComposition + 54);
        *((_QWORD *)v34 + 23) += v32;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v30 = (int)*((float *)this + 5);
    v48.m128_u64[1] = 4LL;
    v49.m128_u64[1] = 4LL;
    v50.m128_u64[1] = 4LL;
    v52 = 4LL;
    LODWORD(v39) = v30;
    v38 = (int)*((float *)this + 4);
    v37 = (int)*((float *)this + 3);
    v36 = (int)*((float *)this + 2);
    v48.m128_u64[0] = (unsigned __int64)&v36;
    v49.m128_u64[0] = (unsigned __int64)&v37;
    v50.m128_u64[0] = (unsigned __int64)&v38;
    v51 = &v39;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      a3,
      5u,
      &v47);
  }
  v6 = *((_QWORD *)v4 + 4);
  v7 = (char *)this + 32;
  v8 = *((_DWORD *)this + 16);
  if ( !*((_BYTE *)this + 72) )
    v7 = 0LL;
  v9 = *((_DWORD *)this + 15);
  v10 = *((_DWORD *)this + 14);
  v11 = *((float *)this + 17);
  v39 = *((_QWORD *)this + 3);
  CD2DContext::FlushDrawList((CD2DContext *)(v6 + 16), (__int64)a2, a3);
  v14 = *(_DWORD *)(v6 + 360);
  if ( v14 )
  {
    v12 = (unsigned int)(v14 - 1);
    v3 = *(_QWORD *)(*(_QWORD *)(v6 + 336) + 8 * v12);
  }
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v6 + 16), v12, v13);
  v15 = *(_QWORD *)(v3 + 16);
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v17 = 0.0;
  v45 = si128;
  v46 = 0LL;
  (*(void (__fastcall **)(_QWORD, __m128 *))(**(_QWORD **)(v15 + 200) + 240LL))(*(_QWORD *)(v15 + 200), &v45);
  v18 = *(_QWORD *)(v3 + 16);
  if ( v8 != *(_DWORD *)(v18 + 388) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 200) + 624LL))(*(_QWORD *)(v18 + 200), v8);
    *(_DWORD *)(v18 + 388) = v8;
    v18 = *(_QWORD *)(v3 + 16);
  }
  if ( v7 )
  {
    si128 = *(__m128 *)v7;
    v46 = *((_QWORD *)v7 + 2);
    v17 = *(float *)&v46;
    LODWORD(v19) = _mm_shuffle_ps((__m128)v46, (__m128)v46, 85).m128_u32[0];
  }
  else
  {
    v19 = 0.0;
  }
  memset_0(v40, 0, 0x44uLL);
  v20 = *(struct _EVENT_DATA_DESCRIPTOR *)((char *)this + 8);
  v41.m128_u64[0] = v39;
  v47 = v20;
  v21 = _mm_shuffle_ps(si128, si128, 85);
  v22 = _mm_shuffle_ps(v21, v21, 225);
  v22.m128_f32[0] = _mm_shuffle_ps(si128, si128, 170).m128_f32[0];
  v23 = _mm_shuffle_ps(v22, v22, 198);
  v23.m128_f32[0] = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
  v41.m128_i32[2] = v10;
  v43 = 0LL;
  v24 = _mm_shuffle_ps(v23, v23, 39);
  v25 = _mm_shuffle_ps(v41, v41, 147);
  v24.m128_f32[0] = v17;
  v25.m128_f32[0] = si128.m128_f32[0];
  v48 = _mm_shuffle_ps(v25, v25, 57);
  v26 = (__m128)v42;
  LODWORD(v44) = v9;
  v49 = _mm_shuffle_ps(v24, v24, 57);
  v26.m128_f32[0] = v19;
  v27 = _mm_shuffle_ps(v26, v26, 225);
  v27.m128_f32[0] = v11;
  v50 = _mm_shuffle_ps(v27, v27, 225);
  v51 = v44;
  (*(void (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *, _QWORD))(**(_QWORD **)(v18 + 200) + 688LL))(
    *(_QWORD *)(v18 + 200),
    &v47,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v3);
  ++*(_DWORD *)(v3 + 48);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v31 = (int)*((float *)this + 5);
    v48.m128_u64[1] = 4LL;
    v49.m128_u64[1] = 4LL;
    v50.m128_u64[1] = 4LL;
    v52 = 4LL;
    v36 = v31;
    v37 = (int)*((float *)this + 4);
    v38 = (int)*((float *)this + 3);
    LODWORD(v39) = (int)*((float *)this + 2);
    v48.m128_u64[0] = (unsigned __int64)&v39;
    v49.m128_u64[0] = (unsigned __int64)&v38;
    v50.m128_u64[0] = (unsigned __int64)&v37;
    v51 = (unsigned __int64 *)&v36;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      v28,
      5u,
      &v47);
  }
  return 0LL;
}

/*
 * XREFs of ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1801E4960
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x180166840 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x180214280 (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::BeginCompositionFrame(CComposition *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // xmm0_8
  __int64 v7; // rax
  const struct IMonitorTarget *v8; // rdi
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // rtt
  LONGLONG DefaultVBlankDuration; // rax
  _QWORD *v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  DWORD v24; // edi
  char v25; // cl
  CRenderPerf *v26; // rcx
  __int64 v27; // rax
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-1A0h]
  int v33; // [rsp+50h] [rbp-198h]
  __int64 v34; // [rsp+58h] [rbp-190h] BYREF
  __int64 v35; // [rsp+60h] [rbp-188h] BYREF
  __int64 v36; // [rsp+68h] [rbp-180h] BYREF
  __int64 v37; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-170h] BYREF
  int v39; // [rsp+88h] [rbp-160h]
  _OWORD v40[5]; // [rsp+90h] [rbp-158h] BYREF
  _OWORD v41[3]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v42; // [rsp+110h] [rbp-D8h]
  __int64 v43; // [rsp+120h] [rbp-C8h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+130h] [rbp-B8h] BYREF
  LARGE_INTEGER *p_PerformanceCount; // [rsp+140h] [rbp-A8h]
  __int64 v46; // [rsp+148h] [rbp-A0h]
  __int64 *v47; // [rsp+150h] [rbp-98h]
  __int64 v48; // [rsp+158h] [rbp-90h]
  __int64 *v49; // [rsp+160h] [rbp-88h]
  __int64 v50; // [rsp+168h] [rbp-80h]
  __int64 *v51; // [rsp+170h] [rbp-78h]
  __int64 v52; // [rsp+178h] [rbp-70h]
  __int64 *v53; // [rsp+180h] [rbp-68h]
  __int64 v54; // [rsp+188h] [rbp-60h]
  __int64 *v55; // [rsp+190h] [rbp-58h]
  __int64 v56; // [rsp+198h] [rbp-50h]
  _OWORD *v57; // [rsp+1A0h] [rbp-48h]
  __int64 v58; // [rsp+1A8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp-38h] BYREF
  __int64 *v60; // [rsp+1C0h] [rbp-28h]
  __int64 v61; // [rsp+1C8h] [rbp-20h]

  v43 = 0LL;
  v2 = *((_QWORD *)this + 39);
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = *(__m128i *)v3;
  *(_OWORD *)((char *)v40 + 8) = *(_OWORD *)v3;
  v5 = *(__m128i *)(v3 + 16);
  *(__m128i *)((char *)&v40[1] + 8) = v5;
  *(_OWORD *)((char *)&v40[2] + 8) = *(_OWORD *)(v3 + 32);
  *(_OWORD *)((char *)&v40[3] + 8) = *(_OWORD *)(v3 + 48);
  v6 = *(_QWORD *)(v3 + 64);
  v7 = *((_QWORD *)this + 38);
  *((_QWORD *)&v40[4] + 1) = v6;
  if ( *((_QWORD *)this + 39) == v7 )
    *(_QWORD *)&v40[0] = 0LL;
  else
    *(_QWORD *)&v40[0] = _mm_srli_si128(v5, 8).m128i_u64[0] - _mm_srli_si128(v4, 8).m128i_u64[0];
  v8 = (const struct IMonitorTarget *)**((_QWORD **)g_pComposition + 77);
  v38[0] = 0LL;
  v38[1] = 0LL;
  v39 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( v8
    && (*(unsigned __int8 (__fastcall **)(const struct IMonitorTarget *, _QWORD *, unsigned __int64 *, _QWORD))(*(_QWORD *)v8 + 216LL))(
         v8,
         v38,
         &v31,
         0LL) )
  {
    v9 = *(LARGE_INTEGER *)((char *)this + 296);
    PerformanceCount = v9;
    if ( !v9.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v9 = PerformanceCount;
    }
    v10 = v31;
    v11 = v33;
    if ( v32 + v31 < v9.QuadPart )
    {
      v10 = v32 * ((v9.QuadPart - v31) / v32) + v31;
      v11 = (v9.QuadPart - v31) / v32 + v33;
    }
    *(_QWORD *)&v41[0] = v10;
    v12 = *(_QWORD *)&v40[2] + (v32 >> 1);
    *((_QWORD *)&v41[0] + 1) = v32;
    if ( v12 < v10 )
    {
      v16 = v10 - v12;
      v14 = v10 - v32 * ((unsigned int)((v10 - v12) / v32) + 1);
      v15 = v11 - (v16 / v32 + 1);
    }
    else
    {
      v13 = v12 - v10;
      v14 = v32 * (unsigned int)((v12 - v10) / v32) + v10;
      v15 = v13 / v32 + v11;
    }
    v31 = v14 - v32;
    v33 = v15 - 1;
    *(_QWORD *)&v41[1] = v14 - v32;
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    DefaultVBlankDuration = CScheduler::GetDefaultVBlankDuration(v8);
    *(LARGE_INTEGER *)&v41[0] = PerformanceCount;
    *(LARGE_INTEGER *)&v41[1] = PerformanceCount;
    *((_QWORD *)&v41[0] + 1) = DefaultVBlankDuration;
  }
  v18 = (_QWORD *)*((_QWORD *)this + 81);
  v19 = *(_OWORD *)((char *)this + 6468);
  DWORD2(v41[2]) = *((_DWORD *)this + 1621);
  *(_OWORD *)((char *)&v41[1] + 8) = v19;
  *(_QWORD *)&v42 = v18[26];
  LODWORD(v43) = (__int64)(v18[28] - v18[27]) >> 3;
  v20 = v18[27];
  v21 = *((_QWORD *)this + 708);
  *((_QWORD *)&v42 + 1) = v20;
  *((_QWORD *)this + 642) = *(_QWORD *)&v40[1];
  v22 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v21 + 8LL))(v21, v40, (char *)this + 880);
  v24 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xB81u, 0LL);
  v25 = Microsoft_Windows_Dwm_CompositorEnableBits;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    v30 = *((_QWORD *)&v40[1] + 1);
    v37 = *(_QWORD *)&v40[0];
    v36 = *(_QWORD *)&v40[1];
    v35 = *(_QWORD *)&v40[2];
    v34 = *((_QWORD *)this + 110);
    p_PerformanceCount = &PerformanceCount;
    v47 = &v34;
    v49 = &v35;
    v51 = &v36;
    v53 = &v37;
    v55 = &v30;
    v57 = v41;
    PerformanceCount.LowPart = v24;
    v46 = 4LL;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 24LL;
    McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &BeginFrame, v23, 8u, &v44);
    v25 = Microsoft_Windows_Dwm_CompositorEnableBits;
  }
  if ( (v25 & 2) != 0 )
  {
    v26 = (CComposition *)((char *)this + 16);
    v27 = 0LL;
    if ( g_pComposition )
      v27 = *((_QWORD *)g_pComposition + 110);
    *(_QWORD *)v26 = v27;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_DWORD *)this + 34) = 0;
    CRenderPerf::ResetDrawing(v26);
  }
  if ( *((_BYTE *)this + 6462) )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)this + 104LL))(this);
    *((_BYTE *)this + 6462) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
  {
    v30 = *((_QWORD *)this + 110);
    v61 = 8LL;
    v60 = &v30;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &CurrentFrameId, v23, 2u, &v59);
  }
  result = v24;
  if ( LODWORD(v41[2]) )
    dword_1803DE380 |= 0x40u;
  return result;
}

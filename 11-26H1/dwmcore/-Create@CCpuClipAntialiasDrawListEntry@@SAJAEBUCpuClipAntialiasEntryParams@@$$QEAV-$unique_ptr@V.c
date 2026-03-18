/*
 * XREFs of ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180008CF0
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x1800094C0 (PrimitiveStorage--Alloc_16_.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x180009C34 (-Alloc@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasDrawListEntry::Create(__int64 a1, __int64 *a2, __int64 *a3)
{
  float v3; // xmm0_4
  __m128i si128; // xmm6
  float v7; // xmm7_4
  __int64 v8; // r14
  float v9; // xmm0_4
  int v10; // r8d
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  float v15; // xmm0_4
  float v16; // xmm0_4
  unsigned int v17; // ecx
  __int64 v18; // rax
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  unsigned __int64 v23; // rax
  float v24; // xmm0_4
  float v25; // xmm3_4
  unsigned int i; // ecx
  __int64 v27; // rax
  char v28; // r15
  unsigned int v29; // ebx
  void (__fastcall ***v30)(_QWORD, __int64); // rsi
  __int64 v31; // r14
  char v32; // r12
  __int64 v33; // rax
  void (__fastcall ***v34)(_QWORD, __int64); // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  void (__fastcall ***v37)(_QWORD, __int64); // rcx
  void (__fastcall ***v38)(_QWORD); // rcx
  __int64 v39; // rcx
  int v40; // eax
  _OWORD *v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  void (__fastcall ***v44)(_QWORD); // rcx
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 v55; // rcx
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  int v60; // [rsp+28h] [rbp-49h]
  __m128i v61; // [rsp+38h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 Y; // [rsp+D8h] [rbp+67h] BYREF
  __int64 *v64; // [rsp+E8h] [rbp+77h]
  void (__fastcall ***v65)(_QWORD, __int64); // [rsp+F0h] [rbp+7Fh] BYREF

  v64 = a3;
  v3 = *(float *)(a1 + 64);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
  v7 = *(float *)(a1 + 60);
  if ( v7 < v3 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
    LODWORD(Y) = 0;
    v9 = modff(v3, (float *)&Y);
    v10 = (int)v7;
    v11 = (int)*(float *)&Y - 1;
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.000081380211 )
      v11 = (int)*(float *)&Y;
    v12 = v11 - (unsigned __int16)v10 + 1;
    v13 = 2 * v12 + 2;
    v14 = *(_QWORD *)(v8 + 40) + 8LL * (unsigned __int16)(2 * v10);
    if ( !v14 && 2 * v12 != -2 || !*(_QWORD *)(v8 + 48) && 6 * v12 )
      goto LABEL_6;
    v15 = *(float *)(a1 + 60);
    LODWORD(Y) = 0;
    v16 = modff(v15, (float *)&Y);
    v17 = 2;
    if ( v16 <= 0.000081380211 )
    {
      v18 = 0LL;
      v61 = _mm_load_si128((const __m128i *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
      v19 = *(float *)&v61.m128i_i32[3];
      v20 = *(float *)&v61.m128i_i32[2];
      v21 = *(float *)&v61.m128i_i32[1];
      v22 = *(float *)v61.m128i_i32;
      while ( (unsigned int)v18 < v13 )
      {
        v22 = fminf(v22, *(float *)(v14 + 8 * v18));
        v21 = fminf(v21, *(float *)(v14 + 8 * v18 + 4));
        v20 = fmaxf(v20, *(float *)(v14 + 8 * v18));
        v19 = fmaxf(v19, *(float *)(v14 + 8 * v18 + 4));
        v18 = (unsigned int)(v18 + 1);
        v61.m128i_i64[0] = __PAIR64__(LODWORD(v21), LODWORD(v22));
        v61.m128i_i64[1] = __PAIR64__(LODWORD(v19), LODWORD(v20));
        if ( (unsigned int)v18 >= 2 )
          goto LABEL_12;
      }
LABEL_6:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v47 = 0LL;
    v61 = _mm_load_si128((const __m128i *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
    v19 = *(float *)&v61.m128i_i32[3];
    v20 = *(float *)&v61.m128i_i32[2];
    v21 = *(float *)&v61.m128i_i32[1];
    v22 = *(float *)v61.m128i_i32;
    do
    {
      if ( (unsigned int)v47 >= v13 )
        goto LABEL_6;
      v48 = (unsigned int)(v47 + 2);
      if ( v48 >= v13 )
        goto LABEL_6;
      v49 = (float)(1.0 - v16) * *(float *)(v14 + 8 * v47 + 4);
      v50 = (float)(1.0 - v16) * *(float *)(v14 + 8 * v47);
      v47 = (unsigned int)(v47 + 1);
      v51 = v50 + (float)(v16 * *(float *)(v14 + 8 * v48));
      v52 = v49 + (float)(v16 * *(float *)(v14 + 8 * v48 + 4));
      v22 = fminf(v22, v51);
      v20 = fmaxf(v20, v51);
      v21 = fminf(v21, v52);
      *(float *)v61.m128i_i32 = v22;
      v19 = fmaxf(v19, v52);
      *(__int64 *)((char *)v61.m128i_i64 + 4) = __PAIR64__(LODWORD(v20), LODWORD(v21));
      *(float *)&v61.m128i_i32[3] = v19;
    }
    while ( (unsigned int)v47 < 2 );
LABEL_12:
    if ( v13 - 2 > 2 )
    {
      v23 = 2LL;
      while ( v23 < v13 )
      {
        v22 = fminf(v22, *(float *)(v14 + 8 * v23));
        v21 = fminf(v21, *(float *)(v14 + 8 * v23 + 4));
        v20 = fmaxf(v20, *(float *)(v14 + 8 * v23));
        v19 = fmaxf(v19, *(float *)(v14 + 8 * v23 + 4));
        v23 = ++v17;
        v61.m128i_i64[0] = __PAIR64__(LODWORD(v21), LODWORD(v22));
        v61.m128i_i64[1] = __PAIR64__(LODWORD(v19), LODWORD(v20));
        if ( v17 >= v13 - 2 )
          goto LABEL_16;
      }
      goto LABEL_6;
    }
LABEL_16:
    v24 = *(float *)(a1 + 64);
    LODWORD(Y) = 0;
    v25 = modff(v24, (float *)&Y);
    if ( v25 > 0.000081380211 )
    {
      v53 = (unsigned int)(v13 - 4);
      v54 = v53 + 2;
      while ( 1 )
      {
        v55 = v54;
        if ( v54 >= v13 )
          break;
        if ( (unsigned int)v53 >= v13 || v54 >= v13 )
          goto LABEL_6;
        v56 = (float)(1.0 - v25) * *(float *)(v14 + 8 * v53 + 4);
        v57 = (float)(1.0 - v25) * *(float *)(v14 + 8 * v53);
        v53 = (unsigned int)(v53 + 1);
        ++v54;
        v58 = (float)(v25 * *(float *)(v14 + 8 * v55)) + v57;
        v59 = v56 + (float)(v25 * *(float *)(v14 + 8 * v55 + 4));
        v22 = fminf(v22, v58);
        v20 = fmaxf(v20, v58);
        v21 = fminf(v21, v59);
        v19 = fmaxf(v19, v59);
        *(float *)v61.m128i_i32 = v22;
        *(__int64 *)((char *)v61.m128i_i64 + 4) = __PAIR64__(LODWORD(v20), LODWORD(v21));
        *(float *)&v61.m128i_i32[3] = v19;
      }
    }
    else
    {
      for ( i = v13 - 2; i < v13; ++i )
      {
        v22 = fminf(v22, *(float *)(v14 + 8LL * i));
        v21 = fminf(v21, *(float *)(v14 + 8LL * i + 4));
        v20 = fmaxf(v20, *(float *)(v14 + 8LL * i));
        v19 = fmaxf(v19, *(float *)(v14 + 8LL * i + 4));
        v61.m128i_i64[0] = __PAIR64__(LODWORD(v21), LODWORD(v22));
        v61.m128i_i64[1] = __PAIR64__(LODWORD(v19), LODWORD(v20));
      }
    }
    si128 = v61;
  }
  v27 = *(_QWORD *)(a1 + 48);
  v28 = *(_BYTE *)(a1 + 80);
  v29 = 0;
  v61.m128i_i64[0] = 0LL;
  v30 = 0LL;
  v31 = *(_QWORD *)(v27 + 40);
  LODWORD(v27) = *(_DWORD *)(a1 + 72);
  v65 = 0LL;
  v61.m128i_i64[1] = (unsigned int)v27;
  v32 = *(_BYTE *)(v31 + 80);
  v33 = PrimitiveStorage::Alloc_16_(&v61);
  if ( v33 )
  {
    *(_BYTE *)(v33 + 80) = v32;
    v30 = (void (__fastcall ***)(_QWORD, __int64))v33;
    *(__m128i *)(v33 + 56) = si128;
    *(_BYTE *)(v33 + 81) = v28;
    *(_QWORD *)(v33 + 72) = *(_QWORD *)(v31 + 72);
  }
  else
  {
    v29 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Cu, 0LL);
  }
  v34 = v65;
  v65 = v30;
  if ( v34 )
    (**v34)(v34, 1LL);
  if ( (v29 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
      (const char *)v29,
      v60);
    if ( v65 )
      (**v65)(v65, 1LL);
    return v29;
  }
  v35 = CThreadLocalObjectCache<CCpuClipAntialiasDrawListEntry,CCpuClipAntialiasDrawListEntry>::Alloc();
  v36 = v35;
  if ( !v35 )
  {
    v29 = -2147024882;
    Y = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
      (const char *)0x8007000ELL,
      v60);
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&Y);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v65);
    return v29;
  }
  *(_DWORD *)(v35 + 8) = 0;
  *(_QWORD *)v35 = &CDrawListEntry::`vftable';
  v37 = v65;
  v65 = 0LL;
  *(_QWORD *)(v35 + 16) = v37;
  v38 = *(void (__fastcall ****)(_QWORD))a1;
  *(_QWORD *)(v35 + 24) = *(_QWORD *)a1;
  if ( v38 )
    (**v38)(v38);
  v39 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v36 + 32) = v39;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  *(_QWORD *)(v36 + 40) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v36 + 48) = 1065353216;
  *(_DWORD *)(v36 + 52) = 1065353216;
  *(_DWORD *)(v36 + 56) = 1065353216;
  *(_DWORD *)(v36 + 60) = 1065353216;
  v40 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v36 + 64) = v40;
  v41 = *(_OWORD **)(a1 + 32);
  if ( v41 )
    *(_OWORD *)(v36 + 48) = *v41;
  v42 = *(_QWORD **)(a1 + 40);
  if ( v42 )
  {
    *(_QWORD *)(v36 + 68) = *v42;
    *(_DWORD *)(v36 + 64) = v40 | 0x100;
  }
  *(_QWORD *)v36 = &CCpuClipAntialiasDrawListEntry::`vftable';
  v43 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v36 + 80) = v43;
  v44 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  *(_QWORD *)(v36 + 88) = v44;
  if ( v44 )
    (**v44)(v44);
  *(_QWORD *)(v36 + 96) = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(v36 + 104) = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(v36 + 108) = *(_BYTE *)(a1 + 81);
  *(_BYTE *)(v36 + 109) = *(_BYTE *)(a1 + 82);
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v36 + 8));
  v45 = v65;
  *v64 = v36;
  if ( v45 )
    (**v45)(v45, 1LL);
  return 0LL;
}

/*
 * XREFs of ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0
 * Callers:
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x1800687E0 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180068C20 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18011AC50 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18011AFA0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18011B0C0 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x18011C0B0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     _CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator() @ 0x18011CACC (_CCpuClipAntialiasBatchCommand--EmitGeometry_--_2_--_lambda_1_--operator().c)
 *     ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z @ 0x18011CD70 (-FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV-$Stri.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18011D230 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18020BE40 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18025DD7C (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasBatchCommand::EmitGeometry(
        __m128 *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned __int8 a3)
{
  float v4; // xmm0_4
  float v6; // xmm6_4
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rbx
  float v11; // xmm0_4
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r10d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // edi
  __m128 v24; // xmm0
  __int64 v25; // rcx
  int v26; // eax
  int v27; // r14d
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  CD3DDynamicAppendBuffer *v30; // rcx
  bool v31; // zf
  unsigned int v32; // r14d
  int v33; // esi
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  int v36; // r15d
  CD3DDynamicAppendBuffer *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // r11d
  __int64 v41; // rcx
  unsigned __int64 v42; // r9
  __int16 v43; // di
  __m128i v44; // xmm1
  __m128i v45; // xmm1
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  _WORD *v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rbx
  unsigned int v54; // r15d
  int v55; // eax
  D3DVALUE v56; // esi
  unsigned int v57; // r14d
  __int64 v58; // rdi
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // r11d
  unsigned __int64 v62; // r10
  __int64 v63; // rax
  __m128 *v64; // r14
  float v65; // xmm2_4
  float a; // xmm4_4
  __int64 v67; // rax
  int v68; // r9d
  unsigned int v69; // r10d
  __int64 v70; // r11
  int v71; // eax
  int v72; // r8d
  int v73; // edx
  int v74; // eax
  int v75; // r12d
  int v77; // r8d
  int v78; // eax
  __m128 v79; // xmm2
  float v80; // xmm3_4
  _QWORD *v81; // rsi
  int v82; // eax
  UINT v83; // edx
  unsigned int v84; // [rsp+28h] [rbp-E0h]
  unsigned int v86; // [rsp+5Ch] [rbp-ACh]
  D3DVALUE v87; // [rsp+5Ch] [rbp-ACh]
  float Y[2]; // [rsp+60h] [rbp-A8h] BYREF
  __m128 *v89; // [rsp+68h] [rbp-A0h]
  CD3DDynamicAppendBuffer *v90; // [rsp+70h] [rbp-98h]
  __int64 v91; // [rsp+78h] [rbp-90h]
  __int64 v92; // [rsp+80h] [rbp-88h] BYREF
  D3DVALUE v93; // [rsp+88h] [rbp-80h]
  D3DVALUE v94; // [rsp+8Ch] [rbp-7Ch]
  int v95; // [rsp+90h] [rbp-78h] BYREF
  __int64 v96; // [rsp+98h] [rbp-70h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-68h]
  __int64 v98; // [rsp+A8h] [rbp-60h]
  float v99; // [rsp+B0h] [rbp-58h]
  unsigned int v100; // [rsp+B4h] [rbp-54h]
  __int64 v101; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v102; // [rsp+C0h] [rbp-48h]
  __int64 v103; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v104; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v105; // [rsp+D8h] [rbp-30h]
  _OWORD v106[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v107; // [rsp+128h] [rbp+20h]
  _QWORD v108[2]; // [rsp+138h] [rbp+30h] BYREF
  float v109; // [rsp+148h] [rbp+40h]
  int v110; // [rsp+14Ch] [rbp+44h]
  __int64 v111; // [rsp+150h] [rbp+48h]
  int v112; // [rsp+158h] [rbp+50h]
  int v113; // [rsp+15Ch] [rbp+54h]
  int v114; // [rsp+160h] [rbp+58h]
  int v115; // [rsp+164h] [rbp+5Ch]
  char v116; // [rsp+168h] [rbp+60h]
  __int64 v117; // [rsp+170h] [rbp+68h]
  D3DVALUE v118; // [rsp+178h] [rbp+70h]
  int v119; // [rsp+17Ch] [rbp+74h]
  struct _D3DCOLORVALUE v120; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v4 = this[6].m128_f32[3];
  v6 = this[6].m128_f32[2];
  v7 = *(_QWORD *)(this->m128_u64[1] + 88);
  v105 = this->m128_u64[1];
  v8 = 0;
  v89 = this;
  v104 = 0LL;
  if ( v4 <= v6 )
  {
    v97 = 0LL;
    v91 = 0LL;
    v20 = 0LL;
    v96 = 0LL;
    v22 = 0;
    Y[0] = 0.0;
    v23 = 0;
    v99 = 0.0;
    v92 = 0LL;
    v103 = 0LL;
    v98 = 0LL;
    v100 = 0;
    v101 = 0LL;
    v102 = 0LL;
  }
  else
  {
    v9 = this[6].m128_u32[0];
    Y[0] = 0.0;
    v10 = *(_QWORD *)(v7 + 8 * v9 + 40);
    v11 = modff(v4, Y);
    v12 = (int)Y[0];
    if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 0.000081380211 )
      LOWORD(v12) = v12 - 1;
    v13 = (unsigned __int16)v12 - (unsigned __int16)(int)v6 + 1;
    v14 = *(_QWORD *)(v10 + 40) + 8LL * (unsigned __int16)(2 * (int)v6);
    v91 = 2 * v13 + 2;
    if ( !v14 && 2 * v13 != -2 )
      goto LABEL_6;
    v15 = *(_DWORD *)(v10 + 16);
    v97 = v14;
    v96 = 2 * v13 + 2;
    v100 = 2 * v13 + 2;
    v16 = 8 * v15 + 16;
    LODWORD(Y[0]) = v16;
    v17 = *(_QWORD *)(v10 + 24);
    v18 = v16 * (unsigned __int16)(2 * (int)v6);
    v99 = *(float *)&v16;
    v102 = __PAIR64__(v100, v16);
    v98 = v18 + v17;
    v19 = *(_QWORD *)(v10 + 32);
    v20 = *(_QWORD *)(v10 + 48);
    v101 = v18 + v19;
    v21 = 6 * v13;
    v92 = 6 * v13;
    if ( !v20 )
    {
      if ( v21 )
        goto LABEL_6;
    }
    v103 = 6 * v13;
    v22 = 2 * v13 + 2;
    v23 = v21;
  }
  v24 = this[1];
  v86 = v22;
  v25 = *(_QWORD *)(v7 + 8LL * this[6].m128_u32[0] + 40);
  v29 = (__m128)LODWORD(FLOAT_1_0);
  v28 = (__m128)LODWORD(FLOAT_1_0);
  v104 = v20;
  v26 = 6;
  v107 = 0;
  v27 = 6;
  v28.m128_f32[0] = 1.0 / *(float *)(v25 + 76);
  v29.m128_f32[0] = 1.0 / *(float *)(v25 + 72);
  v30 = (CD3DDynamicAppendBuffer *)(*((_QWORD *)a2 + 3) + 16LL);
  v31 = *((_BYTE *)a2 + 64) == 0;
  v90 = v30;
  if ( v31 )
    v27 = 2;
  v32 = 8 * (*((_DWORD *)a2 + 17) + v27);
  v33 = v22 * v32;
  v106[0] = _mm_mul_ps(v24, _mm_shuffle_ps(v29, v29, 0));
  v34 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), this[2]);
  v106[2] = this[3];
  v35 = this[4];
  v36 = 0;
  v106[1] = v34;
  v106[3] = v35;
  if ( v22 * v32 > *((_DWORD *)v30 + 10) )
  {
    CD3DBatchExecutionContext::Flush((__int64)a2, 8);
    v83 = v33;
    v37 = v90;
    v82 = CD3DDynamicAppendBuffer::EnsureByteSpace(v90, v83, 0);
    v36 = v82;
    if ( v82 < 0 )
    {
      v84 = 507;
      goto LABEL_71;
    }
    *((_BYTE *)a2 + 73) = 1;
    v26 = 6;
  }
  else
  {
    v37 = v30;
  }
  if ( *((_BYTE *)a2 + 73) )
  {
    *((_BYTE *)a2 + 73) = 0;
    v31 = *((_BYTE *)a2 + 64) == 0;
    v95 = 0;
    if ( v31 )
      v26 = 2;
    LODWORD(Y[1]) = 8 * (*((_DWORD *)a2 + 17) + v26);
    *(_QWORD *)&v120.r = *(_QWORD *)(*((_QWORD *)a2 + 3) + 24LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct _D3DCOLORVALUE *, float *, int *))(**((_QWORD **)a2 + 2)
                                                                                             + 144LL))(
      *((_QWORD *)a2 + 2),
      0LL,
      1LL,
      &v120,
      &Y[1],
      &v95);
  }
  if ( *((_QWORD *)v37 + 3) && v86 > (unsigned int)(*((_DWORD *)v37 + 10) - *((_DWORD *)v37 + 9)) / *((_DWORD *)v37 + 8) )
  {
    *((_DWORD *)a2 + 8) |= 0x20u;
    v81 = (_QWORD *)*((_QWORD *)a2 + 3);
    if ( v81[5] )
    {
      CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v81 + 2));
      if ( *((_BYTE *)a2 + 74) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
          *((_QWORD *)a2 + 2),
          *((unsigned int *)a2 + 22),
          *((unsigned int *)a2 + 19));
      }
      else
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v81 + 8));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
          *((_QWORD *)a2 + 2),
          *((unsigned int *)a2 + 23),
          *((unsigned int *)a2 + 20),
          0LL);
      }
      ++*((_DWORD *)a2 + 32);
      *((_QWORD *)a2 + 11) = 0LL;
      *((_DWORD *)a2 + 24) = 0;
    }
    v37 = v90;
  }
  if ( v23 )
  {
    v82 = CD3DBatchExecutionContext::PrepareIndexBuffer(a2, v23);
    v36 = v82;
    if ( v82 < 0 )
    {
      v84 = 530;
LABEL_71:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v82, v84, 0LL);
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasbatchcommand.cpp",
        (const char *)(unsigned int)v36);
      return (unsigned int)v36;
    }
  }
  if ( !*((_QWORD *)v37 + 3) )
  {
    v77 = v86;
    if ( v86 < 0x64 )
      v77 = 100;
    v78 = CD3DDynamicAppendBuffer::BeginAppend(v37, v32, v77);
    v36 = v78;
    if ( v78 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v78, 0x219u, 0LL);
      goto LABEL_72;
    }
    *((_DWORD *)a2 + 19) = *((_DWORD *)v37 + 9) / *((_DWORD *)v37 + 8);
  }
  if ( v23 )
  {
    v38 = *((_QWORD *)a2 + 3);
    v39 = 0LL;
    v40 = v92;
    v41 = *(unsigned int *)(v38 + 100);
    v42 = v41 + *(_QWORD *)(v38 + 88);
    *(_DWORD *)(v38 + 100) = v41 + *(_DWORD *)(v38 + 96) * v92;
    v43 = *((_WORD *)a2 + 38) + *((_WORD *)a2 + 44);
    v44 = _mm_cvtsi32_si128(v43);
    v45 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v44, v44), 0);
    if ( v40 )
    {
      if ( v40 >= 0x20 )
      {
        v46 = v40 - 1;
        if ( v42 > v20 + 2 * v46 || v42 + 2 * v46 < v20 )
        {
          v47 = 16;
          do
          {
            *(__m128i *)(v42 + 2 * v39) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v20 + 2 * v39)), v45);
            v39 = (unsigned int)(v39 + 32);
            *(__m128i *)(v42 + 2LL * (v47 - 8)) = _mm_add_epi16(
                                                    _mm_loadu_si128((const __m128i *)(v20 + 2LL * (v47 - 8))),
                                                    v45);
            *(__m128i *)(v42 + 2LL * v47) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v20 + 2LL * v47)), v45);
            v48 = v47 + 8;
            v47 += 32;
            *(__m128i *)(v42 + 2 * v48) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v20 + 2 * v48)), v45);
          }
          while ( (unsigned int)v39 < (v40 & 0xFFFFFFE0) );
        }
      }
      if ( (unsigned int)v39 < v40 )
      {
        v49 = v20 - v42;
        v50 = v40 - (unsigned int)v39;
        v51 = (_WORD *)(v42 + 2LL * (unsigned int)v39);
        do
        {
          *v51 = *(_WORD *)((char *)v51 + v49) + v43;
          ++v51;
          --v50;
        }
        while ( v50 );
      }
    }
    *((_DWORD *)a2 + 23) += v40;
  }
  *((_DWORD *)a2 + 22) += v86;
  v52 = *((_DWORD *)v37 + 9);
  v53 = *((_QWORD *)v37 + 3) + v52;
  *((_DWORD *)v37 + 9) = v52 + *((_DWORD *)v37 + 8) * v86;
  if ( v36 < 0 )
    goto LABEL_72;
  v31 = *((_BYTE *)a2 + 64) == 0;
  v54 = v91;
  v55 = 6;
  Y[1] = 0.0;
  if ( v31 )
    v55 = 2;
  v56 = *(float *)&v91;
  v57 = 0;
  v58 = (unsigned int)v91;
  LODWORD(v87) = 8 * (*((_DWORD *)a2 + 17) + v55);
  v59 = modff(v89[6].m128_f32[2], &Y[1]);
  if ( v59 > 0.000081380211 )
  {
    v57 = 2;
    v120.b = v87;
    *(_QWORD *)&v120.r = v53;
    LODWORD(v120.a) = 2;
    CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator()(
      (unsigned int)v106,
      (unsigned int)&v96,
      0,
      2,
      LODWORD(v59),
      (__int64)&v89[1],
      (__int64)v106,
      a3,
      (__int64)&v120);
    v58 = v54 - 2LL;
    Y[0] = v99;
    v91 = v96;
    v54 = v96;
  }
  Y[1] = 0.0;
  v60 = modff(v89[6].m128_f32[3], &Y[1]);
  if ( v60 <= 0.000081380211 )
  {
    v62 = v91;
    v61 = Y[0];
  }
  else
  {
    v120.b = v87;
    LODWORD(v120.a) = 2;
    *(_QWORD *)&v120.r = v53 + (int)(LODWORD(v87) * (v58 + v57 - 2));
    CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator()(
      (unsigned int)v106,
      (unsigned int)&v96,
      v54 - 4,
      v54 - 2,
      LODWORD(v60),
      (__int64)&v89[1],
      (__int64)v106,
      a3,
      (__int64)&v120);
    v61 = v99;
    v58 -= 2LL;
    v62 = v96;
  }
  if ( v58 )
  {
    if ( v57 < v62 )
    {
      v108[1] = v98 + (int)(v57 * LODWORD(v61));
      v109 = v61;
      v110 = v58;
      v111 = v101 + (int)(v57 * v102);
      v108[0] = v97 + 8LL * v57;
      v112 = v102;
      v113 = v58;
      v114 = 0;
      v115 = 1065353216;
      v116 = 1;
      v117 = v53 + (int)(v57 * LODWORD(v87));
      v118 = v87;
      v119 = v58;
      if ( (_DWORD)v58 )
        TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
          v108,
          v101 + (int)(v57 * v102),
          v106,
          v53 + (int)(v57 * LODWORD(v87)));
      else
        TransferAliasedVertices(v108);
      goto LABEL_42;
    }
LABEL_6:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
LABEL_42:
  v63 = v53 + 48;
  v93 = v87;
  v94 = v56;
  if ( !*((_BYTE *)a2 + 64) )
    v63 = v53 + 16;
  v64 = v89;
  v92 = v63;
  v65 = v89[5].m128_f32[2];
  if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
  {
    v71 = ColorDWFromStraightColorF((const struct _D3DCOLORVALUE *)(v105 + 48));
    v68 = v71;
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v120.r = *(struct _D3DCOLORVALUE *)(v105 + 48);
    if ( v65 == 1.0 )
    {
      a = v120.a;
    }
    else
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v105 + 16) + 81LL) )
      {
        v120.r = v120.r * v65;
        v120.g = v120.g * v65;
        v120.b = v120.b * v65;
      }
      a = v120.a * v65;
      v120.a = v120.a * v65;
    }
    v67 = *(_QWORD *)(v105 + 40);
    if ( v67 )
    {
      v79 = *(__m128 *)(v67 + 72);
      v80 = _mm_shuffle_ps(v79, v79, 255).m128_f32[0];
      v120.a = a * v80;
      v120.r = v120.r * (float)(v80 * v79.m128_f32[0]);
      v120.g = v120.g * (float)(_mm_shuffle_ps(v79, v79, 85).m128_f32[0] * v80);
      v120.b = v120.b * (float)(_mm_shuffle_ps(v79, v79, 170).m128_f32[0] * v80);
    }
    if ( *(_BYTE *)(*(_QWORD *)(v105 + 16) + 81LL) )
    {
      v68 = ColorDWFromStraightColorF(&v120);
      v71 = v68 & 0xFFFFFF;
    }
    else
    {
      v68 = ColorDWFromStraightColorF(&v120);
      v71 = 0;
    }
  }
  v72 = v68;
  if ( v64[6].m128_i32[0] != 1 )
    v72 = v71;
  if ( v69 )
  {
    v73 = 0;
    do
    {
      v8 += 2;
      *(_DWORD *)(v73 + v70) = v68;
      v74 = LODWORD(v87) + v73;
      v73 += 2 * LODWORD(v87);
      *(_DWORD *)(v74 + v70) = v72;
    }
    while ( v8 < v69 );
  }
  v75 = v105;
  CCpuClipAntialiasDrawListEntry::FillVertexUVs(v105, &v64[6].m128_i16[2], &v92, *((unsigned int *)a2 + 17));
  if ( *((_BYTE *)a2 + 64) )
  {
    *(_QWORD *)&v120.r = v53;
    v120.b = v87;
    v120.a = v56;
    CCpuClipAntialiasDrawListEntry::FillLightingData(v75, (_DWORD)v64 + 100, a3, (_DWORD)v64 + 112, (__int64)&v120);
  }
  return 0LL;
}

/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18003781C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065540 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18006587C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065E30 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180067310 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x1800687E0 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18011AC50 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18011AFA0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E3A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18011E3A4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E5B4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011E5B4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x18011EAC4 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F2A0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011F2A0.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18020BE40 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021549C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180215548 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180217B80 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025BA68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  __int64 v3; // rax
  struct CD3DBatchExecutionContext *v4; // r10
  __m128 *v5; // r9
  __int64 v6; // rdx
  bool v7; // zf
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  char *v13; // r14
  __int64 v14; // rsi
  int v15; // eax
  int v16; // r12d
  unsigned int v17; // r12d
  UINT v18; // edi
  char *v19; // rdi
  char *v20; // r15
  unsigned int v21; // r11d
  int v22; // edi
  int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // r15
  unsigned int v26; // r13d
  int v27; // r14d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // r9
  __int16 v32; // si
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  _WORD *v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // r9
  int v44; // r12d
  char v45; // al
  __int64 v46; // rcx
  __int64 v47; // rdi
  int v48; // r12d
  __int64 v49; // r10
  float v50; // xmm3_4
  char v51; // r8
  int v52; // r11d
  __int64 v53; // r15
  int v54; // ebx
  __m128 v55; // xmm9
  int v56; // r12d
  __m128 v57; // xmm10
  __m128 v58; // xmm7
  __m128 v59; // xmm6
  __int32 v60; // xmm11_4
  __m128 v61; // xmm12
  float v62; // xmm0_4
  float v63; // xmm9_4
  __m128 v64; // xmm13
  float v65; // xmm10_4
  __m128 v66; // xmm14
  __m128 v67; // xmm15
  __int32 v68; // xmm4_4
  bool v69; // dl
  __int64 v70; // rdi
  unsigned int v71; // r10d
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __m128 v74; // xmm6
  int v75; // r12d
  int v76; // r8d
  int v77; // r11d
  __int64 v78; // r14
  __m128 *v79; // rcx
  __m128 *v80; // rdx
  __m128 *v81; // rsi
  __m128 *v82; // rdi
  _OWORD *m128_f32; // rax
  signed __int64 v84; // rdx
  __int64 v85; // rsi
  _OWORD *v86; // rax
  __int64 v87; // rdx
  signed __int64 v88; // rcx
  int v90; // eax
  int v91; // r9d
  int v92; // eax
  int v93; // ecx
  int v94; // r9d
  int v95; // edi
  int v96; // esi
  __int64 v97; // r14
  __int64 v98; // rcx
  __int64 v99; // r11
  float v100; // xmm2_4
  float v101; // xmm0_4
  _QWORD *v102; // rax
  __int64 v103; // r8
  unsigned int v104; // eax
  __int64 v105; // r11
  int v106; // edi
  int v107; // esi
  __int64 v108; // r14
  __int64 v109; // rdx
  __int64 v110; // r8
  float v111; // xmm2_4
  float v112; // xmm0_4
  _QWORD *v113; // rax
  __int64 v114; // r11
  unsigned int v115; // edx
  int v116; // r11d
  int v117; // edi
  __int64 v118; // r14
  __int64 v119; // rdx
  __int64 v120; // rcx
  float v121; // xmm2_4
  float v122; // xmm0_4
  _QWORD *v123; // rax
  __int64 v124; // rsi
  unsigned int v125; // [rsp+20h] [rbp-E0h]
  unsigned int v126; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v127[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v128[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v129; // [rsp+60h] [rbp-A0h]
  int v130; // [rsp+64h] [rbp-9Ch]
  __int64 v131; // [rsp+68h] [rbp-98h]
  int v132; // [rsp+70h] [rbp-90h]
  int v133; // [rsp+74h] [rbp-8Ch]
  int v134; // [rsp+78h] [rbp-88h]
  float v135; // [rsp+7Ch] [rbp-84h]
  char v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-78h]
  int v138; // [rsp+90h] [rbp-70h]
  int v139; // [rsp+94h] [rbp-6Ch]
  int v140; // [rsp+A0h] [rbp-60h]
  unsigned int v141[2]; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v142; // [rsp+B0h] [rbp-50h] BYREF
  float v143; // [rsp+B8h] [rbp-48h]
  float v144; // [rsp+BCh] [rbp-44h]
  __int32 v145; // [rsp+C0h] [rbp-40h]
  __int32 v146; // [rsp+C4h] [rbp-3Ch]
  float v147; // [rsp+C8h] [rbp-38h]
  float v148; // [rsp+CCh] [rbp-34h]
  __m128 v149; // [rsp+D0h] [rbp-30h]
  __int32 v150; // [rsp+E0h] [rbp-20h]
  __int32 v151; // [rsp+E4h] [rbp-1Ch]
  __int32 v152; // [rsp+E8h] [rbp-18h]
  __int32 v153; // [rsp+ECh] [rbp-14h]
  int v154; // [rsp+F0h] [rbp-10h]
  __int128 v155; // [rsp+100h] [rbp+0h] BYREF
  __int64 v156; // [rsp+110h] [rbp+10h]
  __int64 v157; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  unsigned int v159; // [rsp+210h] [rbp+110h]
  int v160; // [rsp+210h] [rbp+110h]
  char *v163; // [rsp+228h] [rbp+128h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(v3 + 264) >> 2;
  LOBYTE(v6) = (*(_DWORD *)(v3 + 264) & 4) != 0;
  v7 = a3[5].m128_i8[12] == 0;
  v140 = v6;
  if ( !v7 )
  {
    CRenderingBatchCommand::EmitWarpFastPathGeometry((CRenderingBatchCommand *)a3, v4);
    return 0;
  }
  if ( a3->m128_i32[0] == 4 )
    return (unsigned int)CMegaRectBatchCommand::EmitGeometry((CMegaRectBatchCommand *)a3, v4);
  if ( a3->m128_i32[0] == 5 )
    return (unsigned int)CCpuClipAntialiasBatchCommand::EmitGeometry((CCpuClipAntialiasBatchCommand *)a3, v4, v6);
  v8 = 0;
  v9 = *(_QWORD *)(a3->m128_u64[1] + 16);
  v157 = v9;
  v10 = *(unsigned int *)(v9 + 8);
  v159 = v10;
  if ( !(_DWORD)v10 )
    return v8;
  v11 = *(unsigned int *)(v9 + 20);
  v12 = *(_QWORD *)(v9 + 48);
  *(_QWORD *)v141 = v11;
  if ( !v12 && (_DWORD)v11 )
  {
    ((void (__fastcall *)(__int64, __int64, __m128 *, __m128 *))`gsl::details::get_terminate_handler'::`2'::handler)(
      v10,
      v6,
      a3,
      a3);
    __debugbreak();
  }
  v7 = *((_BYTE *)v4 + 64) == 0;
  v13 = (char *)v4 + 24;
  v14 = *((_QWORD *)v4 + 3);
  v15 = 6;
  v16 = 6;
  LODWORD(v163) = 0;
  v156 = v14;
  if ( v7 )
    v16 = 2;
  v17 = 8 * (*((_DWORD *)v4 + 17) + v16);
  v18 = v10 * v17;
  if ( (unsigned int)v10 * v17 > *(_DWORD *)(v14 + 56) )
  {
    CD3DBatchExecutionContext::Flush((__int64)v4, 8);
    v90 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v14 + 16), v18, 0);
    LODWORD(v163) = v90;
    v22 = v90;
    if ( v90 < 0 )
    {
      v125 = 507;
      goto LABEL_110;
    }
    v4 = a2;
    v15 = 6;
    *((_BYTE *)a2 + 73) = 1;
    v19 = (char *)a2 + 24;
  }
  else
  {
    v19 = (char *)v4 + 24;
  }
  if ( *((_BYTE *)v4 + 73) )
  {
    *((_BYTE *)v4 + 73) = 0;
    v7 = *((_BYTE *)v4 + 64) == 0;
    v126 = 0;
    if ( v7 )
      v15 = 2;
    v127[0] = 8 * (*((_DWORD *)v4 + 17) + v15);
    *(_QWORD *)&v155 = *(_QWORD *)(*(_QWORD *)v13 + 24LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, unsigned int *, unsigned int *))(**((_QWORD **)v4 + 2)
                                                                                                + 144LL))(
      *((_QWORD *)v4 + 2),
      0LL,
      1LL,
      &v155,
      v127,
      &v126);
    v4 = a2;
    v13 = v19;
  }
  v20 = v13;
  if ( *(_QWORD *)(v14 + 40) )
  {
    if ( v159 > (unsigned int)(*(_DWORD *)(v14 + 56) - *(_DWORD *)(v14 + 52)) / *(_DWORD *)(v14 + 48) )
    {
      *((_DWORD *)v4 + 8) |= 0x20u;
      v70 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 40LL) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128 *))(**(_QWORD **)(*(_QWORD *)(v70 + 16) + 552LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v70 + 16) + 552LL),
          *(_QWORD *)(v70 + 24),
          0LL,
          v5);
        *(_QWORD *)(v70 + 40) = 0LL;
        *(_DWORD *)(v70 + 48) = 0;
        if ( *((_BYTE *)a2 + 74) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
            *((_QWORD *)a2 + 2),
            *((unsigned int *)a2 + 22),
            *((unsigned int *)a2 + 19));
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v70 + 64) + 552LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v70 + 64) + 552LL),
            *(_QWORD *)(v70 + 72),
            0LL);
          *(_QWORD *)(v70 + 88) = 0LL;
          *(_DWORD *)(v70 + 96) = 0;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
            *((_QWORD *)a2 + 2),
            *((unsigned int *)a2 + 23),
            *((unsigned int *)a2 + 20),
            0LL);
        }
        v4 = a2;
        ++*((_DWORD *)a2 + 32);
        v20 = (char *)a2 + 24;
        *((_QWORD *)a2 + 11) = 0LL;
        *((_DWORD *)a2 + 24) = 0;
      }
    }
  }
  v21 = v141[0];
  if ( !v141[0] )
  {
    v22 = (int)v163;
    goto LABEL_17;
  }
  v90 = CD3DBatchExecutionContext::PrepareIndexBuffer(v4, v141[0]);
  v22 = v90;
  if ( v90 < 0 )
  {
    v125 = 530;
LABEL_110:
    v91 = v90;
    goto LABEL_99;
  }
  v4 = a2;
  v21 = v141[0];
LABEL_17:
  if ( *(_QWORD *)(v14 + 40) )
    goto LABEL_34;
  v23 = v159;
  v24 = *(_DWORD *)(v14 + 52);
  v25 = *(_QWORD *)(v14 + 16);
  if ( v159 < 0x64 )
    v23 = 100;
  v26 = *(_DWORD *)(v14 + 56) - *(_DWORD *)(v14 + 52);
  v27 = -2003304307;
  v155 = 0LL;
  v126 = (v17 - v24 % v17) % v17;
  v127[0] = v126 + v23 * v17;
  if ( *(_DWORD *)(v25 + 1124) )
  {
    v22 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xA2Au, 0LL);
  }
  else
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v25 + 552)
                                                                                        + 112LL))(
            *(_QWORD *)(v25 + 552),
            *(_QWORD *)(v14 + 24),
            0LL,
            5 - (unsigned int)(v26 < v126 + v23 * v17),
            0,
            &v155);
    v22 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0xA30u, 0LL);
  }
  if ( *(_DWORD *)(v25 + 1124)
    || v22 != -2005532292 && v22 != -2147024882 && v22 != -2005270523
    || !*(_DWORD *)(v25 + 440) )
  {
    goto LABEL_28;
  }
  if ( v22 != -2005270523 )
  {
LABEL_105:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v25 + 16));
    goto LABEL_28;
  }
  v92 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 544) + 312LL))(*(_QWORD *)(v25 + 544));
  v93 = *(_DWORD *)(v25 + 1124);
  if ( v92 == -2005270480 )
  {
    if ( v93 )
      goto LABEL_105;
    *(_DWORD *)(v25 + 1124) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v25 + 16));
LABEL_28:
    if ( v22 >= 0 )
      goto LABEL_29;
    goto LABEL_96;
  }
  if ( !v93 )
    *(_DWORD *)(v25 + 1124) = -2005270523;
LABEL_96:
  if ( *(_DWORD *)(v25 + 1124) )
  {
    v22 = -2003304307;
LABEL_98:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x6Cu, 0LL);
    v91 = v27;
    v125 = 537;
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v91, v125, 0LL);
LABEL_100:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingbatchcommand.cpp",
      (const char *)(unsigned int)v22);
    return (unsigned int)v22;
  }
LABEL_29:
  LODWORD(v163) = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v22, 0, &v163) )
  {
    v94 = (int)v163;
    if ( (_DWORD)v163 == -2003304307 )
    {
      if ( v22 >= 0 )
        v22 = -2003304307;
      if ( !*(_DWORD *)(v25 + 1124) )
        *(_DWORD *)(v25 + 1124) = v22;
    }
    v22 = v94;
    if ( v94 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0xB71u, 0LL);
  }
  v27 = v22;
  if ( v22 < 0 )
    goto LABEL_98;
  *(_QWORD *)(v14 + 40) = v155;
  *(_DWORD *)(v14 + 48) = v17;
  if ( v26 < v127[0] )
  {
    v8 = 0;
    *(_DWORD *)(v14 + 52) = 0;
  }
  else
  {
    *(_DWORD *)(v14 + 52) += v126;
    v8 = 0;
  }
  v4 = a2;
  v21 = v141[0];
  v20 = (char *)a2 + 24;
  *((_DWORD *)a2 + 19) = *(_DWORD *)(v14 + 52) / v17;
LABEL_34:
  if ( v21 )
  {
    v29 = 0LL;
    v30 = *(unsigned int *)(*(_QWORD *)v20 + 100LL);
    v31 = v30 + *(_QWORD *)(*(_QWORD *)v20 + 88LL);
    *(_DWORD *)(*(_QWORD *)v20 + 100LL) = v30 + *(_DWORD *)(*(_QWORD *)v20 + 96LL) * v21;
    v32 = *((_WORD *)v4 + 38) + *((_WORD *)v4 + 44);
    v33 = _mm_cvtsi32_si128(v32);
    v34 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v33, v33), 0);
    if ( v21 >= 0x20 )
    {
      v35 = v21 - 1;
      if ( v31 > v12 + 2 * v35 || v31 + 2 * v35 < v12 )
      {
        v36 = 16;
        do
        {
          *(__m128i *)(v31 + 2 * v29) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v12 + 2 * v29)), v34);
          v29 = (unsigned int)(v29 + 32);
          *(__m128i *)(v31 + 2LL * (v36 - 8)) = _mm_add_epi16(
                                                  _mm_loadu_si128((const __m128i *)(v12 + 2LL * (v36 - 8))),
                                                  v34);
          *(__m128i *)(v31 + 2LL * v36) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v12 + 2LL * v36)), v34);
          v37 = v36 + 8;
          v36 += 32;
          *(__m128i *)(v31 + 2 * v37) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v12 + 2 * v37)), v34);
        }
        while ( (unsigned int)v29 < (v21 & 0xFFFFFFE0) );
        v4 = a2;
      }
    }
    if ( (unsigned int)v29 < v21 )
    {
      v38 = v12 - v31;
      v39 = v21 - (unsigned int)v29;
      v40 = (_WORD *)(v31 + 2LL * (unsigned int)v29);
      do
      {
        *v40 = *(_WORD *)((char *)v40 + v38) + v32;
        ++v40;
        --v39;
      }
      while ( v39 );
    }
    *((_DWORD *)v4 + 23) += v21;
  }
  v41 = v156;
  *((_DWORD *)v4 + 22) += v159;
  v42 = *(_DWORD *)(v41 + 52);
  v43 = *(_QWORD *)(v41 + 40) + v42;
  *(_DWORD *)(v41 + 52) = v42 + *(_DWORD *)(v41 + 48) * v159;
  if ( v22 < 0 )
    goto LABEL_100;
  v44 = 6;
  v45 = *((_BYTE *)v4 + 64);
  v46 = *(unsigned int *)(v157 + 8);
  v47 = *(_QWORD *)(v157 + 32);
  if ( !v45 )
    v44 = 2;
  v48 = *((_DWORD *)v4 + 17) + v44;
  v49 = *(unsigned int *)(v157 + 16);
  v50 = a3[5].m128_f32[2];
  v51 = *(_BYTE *)(v157 + 81);
  v52 = *(_DWORD *)(v157 + 12);
  v53 = *(_QWORD *)(v157 + 24);
  v54 = 8 * v49 + 16;
  v55 = (__m128)LODWORD(FLOAT_1_0);
  v55.m128_f32[0] = 1.0 / *(float *)(v157 + 76);
  v56 = 8 * v48;
  v160 = v56;
  v154 = 0;
  v128[1] = v53;
  v129 = v54;
  v130 = v46;
  v131 = v47;
  v132 = v54;
  v133 = v52;
  v134 = v49;
  v136 = v51;
  v137 = v43;
  v138 = v56;
  v139 = v46;
  v57 = (__m128)LODWORD(FLOAT_1_0);
  v57.m128_f32[0] = 1.0 / *(float *)(v157 + 72);
  v128[0] = *(_QWORD *)(v157 + 40);
  v58 = v55;
  v58.m128_f32[0] = v55.m128_f32[0] * a3[2].m128_f32[0];
  v59 = v57;
  v59.m128_f32[0] = v57.m128_f32[0] * a3[1].m128_f32[0];
  v60 = a3[4].m128_i32[3];
  v61 = v55;
  v61.m128_f32[0] = v55.m128_f32[0] * a3[2].m128_f32[1];
  v143 = v57.m128_f32[0] * a3[1].m128_f32[2];
  v62 = v55.m128_f32[0] * a3[2].m128_f32[2];
  v63 = v55.m128_f32[0] * a3[2].m128_f32[3];
  v64 = v57;
  v64.m128_f32[0] = v57.m128_f32[0] * a3[1].m128_f32[1];
  v65 = v57.m128_f32[0] * a3[1].m128_f32[3];
  v147 = v62;
  v66 = (__m128)a3[4].m128_u32[0];
  v149 = a3[3];
  v67 = (__m128)a3[4].m128_u32[1];
  v152 = a3[4].m128_i32[2];
  v142 = __PAIR64__(v64.m128_u32[0], v59.m128_u32[0]);
  v144 = v65;
  v145 = v58.m128_i32[0];
  v146 = v61.m128_i32[0];
  v148 = v63;
  v150 = v66.m128_i32[0];
  v151 = v67.m128_i32[0];
  v153 = v60;
  v135 = v50;
  if ( v45 )
  {
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
      (__int64)v128,
      a3 + 1,
      (struct Windows::Foundation::Numerics::float4x4 *)&v142,
      v140);
    return v8;
  }
  if ( !v52 )
  {
    TransferAliasedVertices(v128);
    return v8;
  }
  COERCE_FLOAT(v68 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v69 = (v49 & 1) == 0 && (v43 & 0xF) == 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(LODWORD(v63) & v68) * 61440.0)
                                    + (float)(COERCE_FLOAT(LODWORD(v65) & v68) * 61440.0))
                            + COERCE_FLOAT(v60 & v68))
                    - 1.0) & v68) >= 0.000081380211 )
  {
    BYTE1(v154) = 16;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 - 1.0) & v68) >= 0.0000011920929 )
    {
      if ( v51 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v128,
          &v142);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v128,
          &v142);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v128,
        (__int64)&v142);
    }
    dword_1803DE48C += v130;
    return v8;
  }
  BYTE1(v154) = 48;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v59.m128_f32[0] - v61.m128_f32[0]) & v68) > 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v64.m128_f32[0] - COERCE_FLOAT(v58.m128_i32[0] ^ _xmm)) & v68) > 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)(v58.m128_f32[0] * v58.m128_f32[0]) + (float)(v59.m128_f32[0] * v59.m128_f32[0]))
                    - 1.0) & v68) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 - 1.0) & v68) < 0.0000011920929 )
    {
      if ( !v69 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(v128);
        dword_1803DE488 += v130;
        return v8;
      }
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v128,
        &v142);
    }
    else
    {
      if ( v69 )
      {
        if ( v51 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v128);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v128);
        dword_1803DE488 += v130;
        return v8;
      }
      if ( v51 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v128);
        dword_1803DE488 += v130;
        return v8;
      }
      VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v128);
    }
    dword_1803DE488 += v130;
    return v8;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 - 1.0) & v68) < 0.0000011920929 )
  {
    if ( v69 )
    {
      v71 = (unsigned int)v49 >> 1;
      v72 = _mm_movelh_ps(_mm_unpacklo_ps(v59, v64), (__m128)0LL);
      v73 = _mm_movelh_ps(_mm_unpacklo_ps(v58, v61), (__m128)0LL);
      v74 = _mm_movelh_ps(_mm_unpacklo_ps(v66, v67), (__m128)_mm_load_si128((const __m128i *)&_xmm));
      if ( (_DWORD)v46 )
      {
        v75 = 2 * v56;
        v76 = 0;
        v77 = 0;
        v78 = ((unsigned int)(v46 - 1) >> 1) + 1;
        do
        {
          v79 = (__m128 *)(v53 + v77 + v54);
          v80 = (__m128 *)(v53 + v77);
          v81 = (__m128 *)(v43 + v76);
          v82 = (__m128 *)(v43 + v76 + v160);
          *v81 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v80, *v80, 85), v73), v74),
                       _mm_mul_ps(_mm_shuffle_ps(*v80, *v80, 0), v72))),
                   _mm_and_ps(
                     *v80,
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v71 )
          {
            m128_f32 = (_OWORD *)v81[1].m128_f32;
            v84 = (char *)v80 - (char *)v81;
            v85 = v71;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v84);
              ++m128_f32;
              --v85;
            }
            while ( v85 );
          }
          *v82 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v79, *v79, 85), v73), v74),
                       _mm_mul_ps(_mm_shuffle_ps(*v79, *v79, 0), v72))),
                   _mm_and_ps(
                     *v79,
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v71 )
          {
            v86 = (_OWORD *)v82[1].m128_f32;
            v87 = v71;
            v88 = (char *)v79 - (char *)v82;
            do
            {
              *v86 = *(_OWORD *)((char *)v86 + v88);
              ++v86;
              --v87;
            }
            while ( v87 );
          }
          v77 += 2 * v54;
          v76 += v75;
          --v78;
        }
        while ( v78 );
        v8 = 0;
      }
    }
    else if ( (_DWORD)v46 )
    {
      v116 = 0;
      v117 = 0;
      v118 = v46;
      do
      {
        v119 = v53 + v117;
        v120 = v43 + v116;
        *(float *)v120 = (float)((float)(v59.m128_f32[0] * *(float *)v119)
                               + (float)(v58.m128_f32[0] * *(float *)(v119 + 4)))
                       + v66.m128_f32[0];
        v121 = v64.m128_f32[0] * *(float *)v119;
        v122 = v61.m128_f32[0] * *(float *)(v119 + 4);
        *(_DWORD *)(v120 + 8) = 1065353216;
        *(float *)(v120 + 4) = (float)(v121 + v122) + v67.m128_f32[0];
        if ( (_DWORD)v49 )
        {
          v123 = (_QWORD *)(v120 + 16);
          v124 = v49;
          do
          {
            *v123 = *(_QWORD *)((char *)v123 + v119 - v120);
            ++v123;
            --v124;
          }
          while ( v124 );
        }
        v117 += v54;
        v116 += v56;
        *(_DWORD *)(v120 + 12) = *(_DWORD *)(v119 + 12);
        --v118;
      }
      while ( v118 );
    }
  }
  else if ( v69 )
  {
    if ( v51 )
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v128);
    else
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v128,
        &v142);
  }
  else if ( v51 )
  {
    if ( (_DWORD)v46 )
    {
      v106 = 0;
      v107 = 0;
      v108 = v46;
      do
      {
        v109 = v53 + v107;
        v110 = v43 + v106;
        *(float *)v110 = (float)((float)(v58.m128_f32[0] * *(float *)(v109 + 4))
                               + (float)(v59.m128_f32[0] * *(float *)v109))
                       + v66.m128_f32[0];
        v111 = v61.m128_f32[0] * *(float *)(v109 + 4);
        v112 = v64.m128_f32[0] * *(float *)v109;
        *(_DWORD *)(v110 + 8) = 1065353216;
        *(float *)(v110 + 4) = (float)(v111 + v112) + v67.m128_f32[0];
        if ( (_DWORD)v49 )
        {
          v113 = (_QWORD *)(v110 + 16);
          v114 = v49;
          do
          {
            *v113 = *(_QWORD *)((char *)v113 + v109 - v110);
            ++v113;
            --v114;
          }
          while ( v114 );
        }
        v115 = *(_DWORD *)(v109 + 12);
        v107 += v54;
        v106 += v56;
        *(_DWORD *)(v110 + 12) = (int)(float)(unsigned __int8)v115 | (((int)(float)BYTE1(v115) | (((int)(float)BYTE2(v115) | ((int)(float)((float)HIBYTE(v115) * v50) << 8)) << 8)) << 8);
        --v108;
      }
      while ( v108 );
    }
  }
  else if ( (_DWORD)v46 )
  {
    v95 = 0;
    v96 = 0;
    v97 = v46;
    do
    {
      v98 = v53 + v96;
      v99 = v43 + v95;
      *(float *)v99 = (float)((float)(v58.m128_f32[0] * *(float *)(v98 + 4)) + (float)(v59.m128_f32[0] * *(float *)v98))
                    + v66.m128_f32[0];
      v100 = v61.m128_f32[0] * *(float *)(v98 + 4);
      v101 = v64.m128_f32[0] * *(float *)v98;
      *(_DWORD *)(v99 + 8) = 1065353216;
      *(float *)(v99 + 4) = (float)(v100 + v101) + v67.m128_f32[0];
      if ( (_DWORD)v49 )
      {
        v102 = (_QWORD *)(v99 + 16);
        v103 = v49;
        do
        {
          *v102 = *(_QWORD *)((char *)v102 + v98 - v99);
          ++v102;
          --v103;
        }
        while ( v103 );
      }
      v104 = BlendPremultipliedColorDW(*(_DWORD *)(v98 + 12), v50);
      v96 += v54;
      *(_DWORD *)(v105 + 12) = v104;
      v95 += v56;
      --v97;
    }
    while ( v97 );
  }
  dword_1803DE484 += v130;
  return v8;
}

/*
 * XREFs of ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18003781C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065540 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18006587C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065E30 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180067310 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
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
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x180213C28 (-BlendStraightColorDW@@YAKKM@Z.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021549C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180215548 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180217B80 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025BA68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpRenderingEffect::EmitGeometry(
        CWarpRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  struct CD3DBatchExecutionContext *v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char *v10; // r15
  __int64 v11; // r13
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  char *v15; // rbx
  _QWORD *v16; // r14
  int v17; // eax
  char *v18; // rsi
  unsigned int v19; // r10d
  unsigned int v20; // ebx
  int v21; // r12d
  int v22; // r8d
  __int64 v23; // r14
  unsigned int v24; // edx
  int v25; // esi
  int v26; // eax
  void *v27; // r11
  int v28; // r14d
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int16 v32; // r11
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  _WORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  int v41; // ecx
  __int64 v42; // rbx
  int v43; // r13d
  char v44; // al
  __m128 v45; // xmm9
  __m128 v46; // xmm10
  __int64 v47; // rcx
  __int64 v48; // rdi
  int v49; // r10d
  int v50; // r13d
  __int64 v51; // r9
  __int64 v52; // r14
  int v53; // r13d
  int v54; // r11d
  float v55; // xmm3_4
  char v56; // r8
  float v57; // xmm0_4
  __m128 v58; // xmm6
  __m128 v59; // xmm12
  float v60; // xmm10_4
  __m128 v61; // xmm14
  __m128 v62; // xmm15
  __int32 v63; // xmm13_4
  float v64; // xmm0_4
  __m128 v65; // xmm7
  __m128 v66; // xmm11
  __int32 v67; // xmm4_4
  bool v68; // dl
  unsigned int v69; // eax
  __int64 v70; // rbx
  unsigned int v71; // r9d
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __m128 v74; // xmm6
  int v75; // r10d
  int v76; // edi
  __int64 v77; // r15
  __m128 *v78; // rcx
  __m128 *v79; // r8
  __m128 *v80; // rsi
  __m128 *v81; // rdx
  _OWORD *m128_f32; // rax
  signed __int64 v83; // r8
  __int64 v84; // rsi
  _OWORD *v85; // rax
  signed __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v89; // r12
  int v90; // ecx
  int v91; // edx
  unsigned int v92; // eax
  __int64 v93; // rcx
  int v94; // esi
  __int64 v95; // r11
  __int64 v96; // r11
  unsigned int v97; // eax
  __int64 v98; // rsi
  int v99; // eax
  int v100; // eax
  int v101; // ecx
  unsigned int v102; // eax
  int v103; // ebx
  int v104; // eax
  int v105; // ecx
  unsigned int v106; // eax
  int v107; // eax
  int v108; // r9d
  int v109; // r9d
  int v110; // edi
  int v111; // esi
  __int64 v112; // r15
  __int64 v113; // rcx
  __int64 v114; // r10
  float v115; // xmm2_4
  float v116; // xmm0_4
  unsigned int v117; // eax
  int v118; // r11d
  __int64 v119; // r10
  int v120; // edi
  int v121; // esi
  __int64 v122; // r15
  __int64 v123; // rcx
  __int64 v124; // r10
  float v125; // xmm2_4
  float v126; // xmm0_4
  unsigned int v127; // eax
  int v128; // r11d
  __int64 v129; // r10
  CD2DContext *v130; // rcx
  int v131; // r10d
  int v132; // edi
  __int64 v133; // r15
  __int64 v134; // rdx
  __int64 v135; // rcx
  float v136; // xmm2_4
  float v137; // xmm0_4
  _QWORD *v138; // rax
  __int64 v139; // rsi
  _QWORD *v140; // rax
  __int64 v141; // r8
  _QWORD *v142; // rax
  __int64 v143; // r8
  int v144; // [rsp+20h] [rbp-E0h]
  unsigned int v145; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v146; // [rsp+48h] [rbp-B8h] BYREF
  int v147[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v148; // [rsp+58h] [rbp-A8h]
  __int64 v149; // [rsp+60h] [rbp-A0h]
  unsigned int v150; // [rsp+68h] [rbp-98h]
  _QWORD v151[2]; // [rsp+70h] [rbp-90h] BYREF
  int v152; // [rsp+80h] [rbp-80h]
  int v153; // [rsp+84h] [rbp-7Ch]
  __int64 v154; // [rsp+88h] [rbp-78h]
  int v155; // [rsp+90h] [rbp-70h]
  int v156; // [rsp+94h] [rbp-6Ch]
  int v157; // [rsp+98h] [rbp-68h]
  float v158; // [rsp+9Ch] [rbp-64h]
  char v159; // [rsp+A0h] [rbp-60h]
  __int64 v160; // [rsp+A8h] [rbp-58h]
  int v161; // [rsp+B0h] [rbp-50h]
  int v162; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v163; // [rsp+C0h] [rbp-40h] BYREF
  float v164; // [rsp+C8h] [rbp-38h]
  float v165; // [rsp+CCh] [rbp-34h]
  __int32 v166; // [rsp+D0h] [rbp-30h]
  __int32 v167; // [rsp+D4h] [rbp-2Ch]
  float v168; // [rsp+D8h] [rbp-28h]
  __int32 v169; // [rsp+DCh] [rbp-24h]
  __m128 v170; // [rsp+E0h] [rbp-20h]
  __int32 v171; // [rsp+F0h] [rbp-10h]
  __int32 v172; // [rsp+F4h] [rbp-Ch]
  __int32 v173; // [rsp+F8h] [rbp-8h]
  __int32 v174; // [rsp+FCh] [rbp-4h]
  int v175; // [rsp+100h] [rbp+0h]
  __int128 v176; // [rsp+110h] [rbp+10h] BYREF
  __int64 v177; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  unsigned int v181; // [rsp+228h] [rbp+128h]

  v3 = a2;
  if ( a3[5].m128_i8[12] )
  {
    CRenderingBatchCommand::EmitWarpFastPathGeometry((CRenderingBatchCommand *)a3, a2);
    return 0;
  }
  v4 = (unsigned int)(a3->m128_i32[0] - 4);
  if ( a3->m128_i32[0] == 4 )
    return (unsigned int)CMegaRectBatchCommand::EmitGeometry((CMegaRectBatchCommand *)a3, a2);
  if ( a3->m128_i32[0] == 5 )
    return (unsigned int)CCpuClipAntialiasBatchCommand::EmitGeometry((CCpuClipAntialiasBatchCommand *)a3, a2, 0);
  v5 = 0;
  v6 = *(_QWORD *)(a3->m128_u64[1] + 16);
  v177 = v6;
  v7 = *(unsigned int *)(v6 + 8);
  v181 = v7;
  if ( !(_DWORD)v7 )
    return v5;
  v8 = *(unsigned int *)(v6 + 20);
  v9 = *(_QWORD *)(v6 + 48);
  v149 = v8;
  if ( !v9 && (_DWORD)v8 )
  {
    ((void (__fastcall *)(__int64, __int64, __m128 *, struct CD3DBatchExecutionContext *))`gsl::details::get_terminate_handler'::`2'::handler)(
      v4,
      v7,
      a3,
      v3);
    __debugbreak();
  }
  v10 = (char *)v3 + 24;
  v11 = *((_QWORD *)v3 + 3);
  v12 = 6;
  if ( !*((_BYTE *)v3 + 64) )
    v12 = 2;
  v13 = 8 * (*((_DWORD *)v3 + 17) + v12);
  v14 = v13 * v7;
  v150 = v13;
  if ( (unsigned int)(v13 * v7) > *(_DWORD *)(v11 + 56) )
  {
    CD3DBatchExecutionContext::Flush(v3, 8LL);
    v107 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v11 + 16), v14, 0);
    v28 = v107;
    if ( v107 < 0 )
    {
      v103 = v107;
      v102 = 507;
      goto LABEL_127;
    }
    v3 = a2;
    *((_BYTE *)a2 + 73) = 1;
    v15 = (char *)a2 + 24;
  }
  else
  {
    v15 = (char *)v3 + 24;
  }
  v16 = (_QWORD *)((char *)v3 + 16);
  if ( *((_BYTE *)v3 + 73) )
  {
    *((_BYTE *)v3 + 73) = 0;
    v17 = 6;
    if ( !*((_BYTE *)v3 + 64) )
      v17 = 2;
    v147[0] = 0;
    v145 = 8 * (*((_DWORD *)v3 + 17) + v17);
    v146 = *(_QWORD **)(*(_QWORD *)v10 + 24LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD **, unsigned int *, int *))(*(_QWORD *)*v16 + 144LL))(
      *v16,
      0LL,
      1LL,
      &v146,
      &v145,
      v147);
    v3 = a2;
    v10 = v15;
  }
  v18 = v10;
  v146 = v16;
  if ( *(_QWORD *)(v11 + 40) )
  {
    v69 = (unsigned int)(*(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 52)) / *(_DWORD *)(v11 + 48);
    v146 = v16;
    if ( v181 > v69 )
    {
      *((_DWORD *)v3 + 8) |= 0x20u;
      v70 = *(_QWORD *)v10;
      v146 = v16;
      if ( *(_QWORD *)(v70 + 40) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v70 + 16) + 552LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v70 + 16) + 552LL),
          *(_QWORD *)(v70 + 24),
          0LL);
        *(_QWORD *)(v70 + 40) = 0LL;
        *(_DWORD *)(v70 + 48) = 0;
        if ( *((_BYTE *)a2 + 74) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 104LL))(
            *v16,
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
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 96LL))(
            *v16,
            *((unsigned int *)a2 + 23),
            *((unsigned int *)a2 + 20),
            0LL);
        }
        v3 = a2;
        ++*((_DWORD *)a2 + 32);
        v16 = (_QWORD *)((char *)a2 + 16);
        v146 = (_QWORD *)((char *)a2 + 16);
        v18 = (char *)a2 + 24;
        *((_QWORD *)a2 + 11) = 0LL;
        *((_DWORD *)a2 + 24) = 0;
      }
    }
  }
  v19 = v149;
  v20 = 16;
  v21 = -2003304307;
  if ( (_DWORD)v149 )
  {
    v89 = *(_QWORD *)v18;
    if ( 2 * (unsigned __int64)(unsigned int)v149 > *(unsigned int *)(*(_QWORD *)v18 + 104LL) )
    {
      CD3DBatchExecutionContext::Flush(v3, 16LL);
      v28 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v89 + 64), 2 * (int)v149, 0);
      if ( v28 < 0 )
      {
        v106 = 191;
        goto LABEL_140;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)*v146 + 152LL))(
        *v146,
        *(_QWORD *)(v89 + 72),
        57LL,
        0LL);
      v3 = a2;
      v19 = v149;
      v16 = (_QWORD *)((char *)a2 + 16);
    }
    if ( *(_QWORD *)(v89 + 88) )
    {
      if ( v19 > (unsigned int)(*(_DWORD *)(v89 + 104) - *(_DWORD *)(v89 + 100)) / *(_DWORD *)(v89 + 96) )
      {
        *((_DWORD *)v3 + 8) |= 0x40u;
        v98 = *(_QWORD *)v18;
        if ( *(_QWORD *)(v98 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v98 + 16) + 552LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v98 + 16) + 552LL),
            *(_QWORD *)(v98 + 24),
            0LL);
          *(_QWORD *)(v98 + 40) = 0LL;
          *(_DWORD *)(v98 + 48) = 0;
          if ( *((_BYTE *)a2 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 104LL))(
              *v16,
              *((unsigned int *)a2 + 22),
              *((unsigned int *)a2 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v98 + 64) + 552LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v98 + 64) + 552LL),
              *(_QWORD *)(v98 + 72),
              0LL);
            *(_QWORD *)(v98 + 88) = 0LL;
            *(_DWORD *)(v98 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 96LL))(
              *v16,
              *((unsigned int *)a2 + 23),
              *((unsigned int *)a2 + 20),
              0LL);
          }
          v3 = a2;
          ++*((_DWORD *)a2 + 32);
          *((_QWORD *)a2 + 11) = 0LL;
          *((_DWORD *)a2 + 24) = 0;
        }
      }
    }
    if ( *(_QWORD *)(v89 + 88) )
      goto LABEL_87;
    v90 = v149;
    if ( (unsigned int)v149 < 0x12C )
      v90 = 300;
    v91 = -*(_DWORD *)(v89 + 100) & 1;
    v148 = *(_DWORD *)(v89 + 104) - *(_DWORD *)(v89 + 100);
    v176 = 0LL;
    LODWORD(v146) = v91;
    v92 = v91 + 2 * v90;
    v93 = *(_QWORD *)(v89 + 64);
    v145 = v92;
    *(_QWORD *)v147 = v93;
    if ( *(_DWORD *)(v93 + 1124) )
    {
      v28 = -2003304307;
      v94 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xA2Au, 0LL);
    }
    else
    {
      v99 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v93 + 552)
                                                                                          + 112LL))(
              *(_QWORD *)(v93 + 552),
              *(_QWORD *)(v89 + 72),
              0LL,
              5 - (unsigned int)(v148 < v92),
              0,
              &v176);
      v94 = v99;
      if ( v99 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0xA30u, 0LL);
      v28 = -2003304307;
    }
    v95 = *(_QWORD *)v147;
    if ( !*(_DWORD *)(*(_QWORD *)v147 + 1124LL)
      && (v94 == -2005532292 || v94 == -2147024882 || v94 == -2005270523)
      && *(_DWORD *)(*(_QWORD *)v147 + 440LL) )
    {
      if ( v94 != -2005270523 )
        goto LABEL_133;
      v104 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v147 + 544LL) + 312LL))(*(_QWORD *)(*(_QWORD *)v147 + 544LL));
      v95 = *(_QWORD *)v147;
      v105 = *(_DWORD *)(*(_QWORD *)v147 + 1124LL);
      if ( v104 != -2005270480 )
      {
        if ( !v105 )
          *(_DWORD *)(*(_QWORD *)v147 + 1124LL) = -2005270523;
LABEL_137:
        if ( *(_DWORD *)(v95 + 1124) )
        {
          v94 = -2003304307;
LABEL_139:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, 0x6Cu, 0LL);
          v106 = 203;
LABEL_140:
          v103 = v28;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v106, 0LL);
          v102 = 530;
          goto LABEL_127;
        }
LABEL_82:
        v147[0] = 0;
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v94, 0LL, v147) )
        {
          v109 = v147[0];
          if ( v147[0] == -2003304307 )
          {
            if ( v94 >= 0 )
              v94 = -2003304307;
            if ( !*(_DWORD *)(v96 + 1124) )
              *(_DWORD *)(v96 + 1124) = v94;
          }
          v94 = v109;
          if ( v109 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v109, 0xB71u, 0LL);
        }
        v28 = v94;
        if ( v94 >= 0 )
        {
          *(_QWORD *)(v89 + 88) = v176;
          v97 = v145;
          *(_DWORD *)(v89 + 96) = 2;
          if ( v148 < v97 )
            *(_DWORD *)(v89 + 100) = 0;
          else
            *(_DWORD *)(v89 + 100) += (_DWORD)v146;
          v3 = a2;
          *((_DWORD *)a2 + 20) = *(_DWORD *)(v89 + 100) / *(_DWORD *)(v89 + 96);
LABEL_87:
          v19 = v149;
          v18 = (char *)v3 + 24;
          v21 = -2003304307;
          goto LABEL_16;
        }
        goto LABEL_139;
      }
      if ( !v105 )
      {
        v130 = (CD2DContext *)(*(_QWORD *)v147 + 16LL);
        *(_DWORD *)(*(_QWORD *)v147 + 1124LL) = -2005270480;
        CD2DContext::TempDisableHardwareProtection(v130);
        v95 = *(_QWORD *)v147;
      }
      else
      {
LABEL_133:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v95 + 16));
        v95 = *(_QWORD *)v147;
      }
    }
    if ( v94 >= 0 )
      goto LABEL_82;
    goto LABEL_137;
  }
LABEL_16:
  if ( !*(_QWORD *)(v11 + 40) )
  {
    v22 = v181;
    v23 = *(_QWORD *)(v11 + 16);
    if ( v181 < 0x64 )
      v22 = 100;
    v145 = (v150 - *(_DWORD *)(v11 + 52) % v150) % v150;
    v24 = *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 52);
    v176 = 0LL;
    v148 = v24;
    LODWORD(v146) = v145 + v22 * v150;
    if ( *(_DWORD *)(v23 + 1124) )
    {
      v25 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xA2Au, 0LL);
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v23 + 552)
                                                                                          + 112LL))(
              *(_QWORD *)(v23 + 552),
              *(_QWORD *)(v11 + 24),
              0LL,
              5 - (unsigned int)(v24 < (unsigned int)v146),
              0,
              &v176);
      v25 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xA30u, 0LL);
    }
    if ( !*(_DWORD *)(v23 + 1124)
      && (v25 == -2005532292 || v25 == -2147024882 || v25 == -2005270523)
      && *(_DWORD *)(v23 + 440) )
    {
      if ( v25 != -2005270523 )
        goto LABEL_119;
      v100 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 544) + 312LL))(*(_QWORD *)(v23 + 544));
      v101 = *(_DWORD *)(v23 + 1124);
      if ( v100 != -2005270480 )
      {
        if ( !v101 )
          *(_DWORD *)(v23 + 1124) = -2005270523;
LABEL_124:
        if ( *(_DWORD *)(v23 + 1124) )
        {
          v28 = -2003304307;
          v27 = 0LL;
LABEL_126:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x6Cu, v27);
          v102 = 537;
          v103 = v28;
LABEL_127:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, v102, 0LL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB0,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingbatchcommand.cpp",
            (const char *)(unsigned int)v28,
            v144);
          return (unsigned int)v28;
        }
LABEL_28:
        v147[0] = 0;
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v25, 0LL, v147) )
        {
          v108 = v147[0];
          if ( v147[0] == -2003304307 )
          {
            if ( v25 >= 0 )
              v25 = -2003304307;
            if ( *(_DWORD *)(v23 + 1124) == (_DWORD)v27 )
              *(_DWORD *)(v23 + 1124) = v25;
          }
          v25 = v108;
          if ( v108 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0xB71u, v27);
            v27 = 0LL;
          }
        }
        v21 = v25;
        v28 = v25;
        if ( v25 >= 0 )
        {
          *(_DWORD *)(v11 + 48) = v150;
          *(_QWORD *)(v11 + 40) = v176;
          if ( v148 < (unsigned int)v146 )
            *(_DWORD *)(v11 + 52) = (_DWORD)v27;
          else
            *(_DWORD *)(v11 + 52) += v145;
          v3 = a2;
          v19 = v149;
          *((_DWORD *)a2 + 19) = *(_DWORD *)(v11 + 52) / *(_DWORD *)(v11 + 48);
          v18 = (char *)a2 + 24;
          goto LABEL_33;
        }
        goto LABEL_126;
      }
      if ( !v101 )
      {
        *(_DWORD *)(v23 + 1124) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v23 + 16));
      }
      else
      {
LABEL_119:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v23 + 16));
      }
    }
    if ( v25 >= 0 )
      goto LABEL_28;
    goto LABEL_124;
  }
LABEL_33:
  v5 = 0;
  if ( v19 )
  {
    v29 = *(unsigned int *)(*(_QWORD *)v18 + 100LL);
    v30 = v29 + *(_QWORD *)(*(_QWORD *)v18 + 88LL);
    *(_DWORD *)(*(_QWORD *)v18 + 100LL) = v29 + *(_DWORD *)(*(_QWORD *)v18 + 96LL) * v19;
    v31 = 0LL;
    v32 = *((_WORD *)v3 + 38) + *((_WORD *)v3 + 44);
    v33 = _mm_cvtsi32_si128(v32);
    v34 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v33, v33), 0);
    if ( v19 >= 0x20 )
    {
      v35 = v19 - 1;
      if ( v30 > v9 + 2 * v35 || v30 + 2 * v35 < v9 )
      {
        do
        {
          *(__m128i *)(v30 + 2 * v31) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v9 + 2 * v31)), v34);
          v31 = (unsigned int)(v31 + 32);
          *(__m128i *)(v30 + 2LL * (v20 - 8)) = _mm_add_epi16(
                                                  _mm_loadu_si128((const __m128i *)(v9 + 2LL * (v20 - 8))),
                                                  v34);
          *(__m128i *)(v30 + 2LL * v20) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v9 + 2LL * v20)), v34);
          v36 = v20 + 8;
          v20 += 32;
          *(__m128i *)(v30 + 2 * v36) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v9 + 2 * v36)), v34);
        }
        while ( (unsigned int)v31 < (v19 & 0xFFFFFFE0) );
      }
      v3 = a2;
    }
    if ( (unsigned int)v31 < v19 )
    {
      v37 = v9 - v30;
      v38 = (_WORD *)(v30 + 2LL * (unsigned int)v31);
      v39 = v19 - (unsigned int)v31;
      do
      {
        *v38 = *(_WORD *)((char *)v38 + v37) + v32;
        ++v38;
        --v39;
      }
      while ( v39 );
    }
    *((_DWORD *)v3 + 23) += v19;
  }
  *((_DWORD *)v3 + 22) += v181;
  v40 = *(unsigned int *)(v11 + 52);
  v41 = v40 + *(_DWORD *)(v11 + 48) * v181;
  v42 = *(_QWORD *)(v11 + 40) + v40;
  *(_DWORD *)(v11 + 52) = v41;
  v43 = 6;
  v44 = *((_BYTE *)v3 + 64);
  v46 = (__m128)LODWORD(FLOAT_1_0);
  v45 = (__m128)LODWORD(FLOAT_1_0);
  v46.m128_f32[0] = 1.0 / *(float *)(v177 + 72);
  v47 = *(unsigned int *)(v177 + 8);
  v48 = *(_QWORD *)(v177 + 32);
  v49 = *(_DWORD *)(v177 + 12);
  if ( !v44 )
    v43 = 2;
  v50 = *((_DWORD *)v3 + 17) + v43;
  v51 = *(unsigned int *)(v177 + 16);
  v52 = *(_QWORD *)(v177 + 24);
  v53 = 8 * v50;
  v54 = 8 * v51 + 16;
  v175 = 0;
  v151[1] = v52;
  v152 = v54;
  v153 = v47;
  v154 = v48;
  v155 = v54;
  v156 = v49;
  v157 = v51;
  v160 = v42;
  v161 = v53;
  v162 = v47;
  v55 = a3[5].m128_f32[2];
  v56 = *(_BYTE *)(v177 + 81);
  v57 = v46.m128_f32[0] * a3[1].m128_f32[2];
  v58 = v46;
  v159 = v56;
  v58.m128_f32[0] = v46.m128_f32[0] * a3[1].m128_f32[0];
  v59 = v46;
  v59.m128_f32[0] = v46.m128_f32[0] * a3[1].m128_f32[1];
  v60 = v46.m128_f32[0] * a3[1].m128_f32[3];
  v61 = (__m128)a3[4].m128_u32[0];
  v62 = (__m128)a3[4].m128_u32[1];
  v63 = a3[4].m128_i32[3];
  v164 = v57;
  v163 = __PAIR64__(v59.m128_u32[0], v58.m128_u32[0]);
  v165 = v60;
  v171 = v61.m128_i32[0];
  v172 = v62.m128_i32[0];
  v174 = v63;
  v158 = v55;
  v45.m128_f32[0] = 1.0 / *(float *)(v177 + 76);
  v151[0] = *(_QWORD *)(v177 + 40);
  v65 = v45;
  v64 = v45.m128_f32[0] * a3[2].m128_f32[2];
  v66 = v45;
  v65.m128_f32[0] = v45.m128_f32[0] * a3[2].m128_f32[0];
  v66.m128_f32[0] = v45.m128_f32[0] * a3[2].m128_f32[1];
  v45.m128_f32[0] = v45.m128_f32[0] * a3[2].m128_f32[3];
  v168 = v64;
  v166 = v65.m128_i32[0];
  v167 = v66.m128_i32[0];
  v169 = v45.m128_i32[0];
  v170 = a3[3];
  v173 = a3[4].m128_i32[2];
  if ( v44 )
  {
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
      (__int64)v151,
      a3 + 1,
      (struct Windows::Foundation::Numerics::float4x4 *)&v163,
      0);
    return v5;
  }
  if ( !v49 )
  {
    TransferAliasedVertices(v151);
    return v5;
  }
  COERCE_FLOAT(v67 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v68 = (v51 & 1) == 0 && (v42 & 0xF) == 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(v45.m128_i32[0] & v67) * 61440.0)
                                    + (float)(COERCE_FLOAT(LODWORD(v60) & v67) * 61440.0))
                            + COERCE_FLOAT(v63 & v67))
                    - 1.0) & v67) >= 0.000081380211 )
  {
    BYTE1(v175) = 16;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - 1.0) & v67) >= 0.0000011920929 )
    {
      if ( v56 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v151,
          &v163);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v151,
          &v163);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v151,
        (__int64)&v163);
    }
    dword_1803DE48C += v153;
    return v5;
  }
  BYTE1(v175) = 48;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v58.m128_f32[0] - v66.m128_f32[0]) & v67) > 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v59.m128_f32[0] - COERCE_FLOAT(v65.m128_i32[0] ^ _xmm)) & v67) > 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)(v65.m128_f32[0] * v65.m128_f32[0]) + (float)(v58.m128_f32[0] * v58.m128_f32[0]))
                    - 1.0) & v67) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - 1.0) & v67) < 0.0000011920929 )
    {
      if ( !v68 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(v151);
        dword_1803DE488 += v153;
        return v5;
      }
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v151,
        &v163);
    }
    else
    {
      if ( v68 )
      {
        if ( v56 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v151);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v151);
        dword_1803DE488 += v153;
        return v5;
      }
      if ( v56 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v151);
        dword_1803DE488 += v153;
        return v5;
      }
      VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v151);
    }
    dword_1803DE488 += v153;
    return v5;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - 1.0) & v67) < 0.0000011920929 )
  {
    if ( v68 )
    {
      v71 = (unsigned int)v51 >> 1;
      v72 = _mm_movelh_ps(_mm_unpacklo_ps(v58, v59), (__m128)0LL);
      v73 = _mm_movelh_ps(_mm_unpacklo_ps(v65, v66), (__m128)0LL);
      v74 = _mm_movelh_ps(_mm_unpacklo_ps(v61, v62), (__m128)_mm_load_si128((const __m128i *)&_xmm));
      if ( (_DWORD)v47 )
      {
        v75 = 0;
        v76 = 0;
        v77 = ((unsigned int)(v47 - 1) >> 1) + 1;
        do
        {
          v78 = (__m128 *)(v52 + v54 + v76);
          v79 = (__m128 *)(v52 + v76);
          v80 = (__m128 *)(v42 + v75);
          v81 = (__m128 *)(v42 + v75 + v53);
          *v80 = _mm_or_ps(
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
            m128_f32 = (_OWORD *)v80[1].m128_f32;
            v83 = (char *)v79 - (char *)v80;
            v84 = v71;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v83);
              ++m128_f32;
              --v84;
            }
            while ( v84 );
          }
          *v81 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v78, *v78, 85), v73), v74),
                       _mm_mul_ps(_mm_shuffle_ps(*v78, *v78, 0), v72))),
                   _mm_and_ps(
                     *v78,
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v71 )
          {
            v85 = (_OWORD *)v81[1].m128_f32;
            v86 = (char *)v78 - (char *)v81;
            v87 = v71;
            do
            {
              *v85 = *(_OWORD *)((char *)v85 + v86);
              ++v85;
              --v87;
            }
            while ( v87 );
          }
          v76 += 2 * v54;
          v75 += 2 * v53;
          --v77;
        }
        while ( v77 );
        v5 = 0;
      }
    }
    else if ( (_DWORD)v47 )
    {
      v131 = 0;
      v132 = 0;
      v133 = v47;
      do
      {
        v134 = v52 + v132;
        v135 = v42 + v131;
        *(float *)v135 = (float)((float)(v58.m128_f32[0] * *(float *)v134)
                               + (float)(v65.m128_f32[0] * *(float *)(v134 + 4)))
                       + v61.m128_f32[0];
        v136 = v59.m128_f32[0] * *(float *)v134;
        v137 = v66.m128_f32[0] * *(float *)(v134 + 4);
        *(_DWORD *)(v135 + 8) = 1065353216;
        *(float *)(v135 + 4) = (float)(v136 + v137) + v62.m128_f32[0];
        if ( (_DWORD)v51 )
        {
          v138 = (_QWORD *)(v135 + 16);
          v139 = v51;
          do
          {
            *v138 = *(_QWORD *)((char *)v138 + v134 - v135);
            ++v138;
            --v139;
          }
          while ( v139 );
        }
        v132 += v54;
        v131 += v53;
        *(_DWORD *)(v135 + 12) = *(_DWORD *)(v134 + 12);
        --v133;
      }
      while ( v133 );
    }
  }
  else if ( v68 )
  {
    if ( v56 )
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v151);
    else
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v151,
        &v163);
  }
  else if ( v56 )
  {
    if ( (_DWORD)v47 )
    {
      v120 = 0;
      v121 = 0;
      v122 = v47;
      do
      {
        v123 = v52 + v121;
        v124 = v42 + v120;
        *(float *)v124 = (float)((float)(v58.m128_f32[0] * *(float *)v123)
                               + (float)(v65.m128_f32[0] * *(float *)(v123 + 4)))
                       + v61.m128_f32[0];
        v125 = v59.m128_f32[0] * *(float *)v123;
        v126 = v66.m128_f32[0] * *(float *)(v123 + 4);
        *(_DWORD *)(v124 + 8) = 1065353216;
        *(float *)(v124 + 4) = (float)(v125 + v126) + v62.m128_f32[0];
        if ( (_DWORD)v51 )
        {
          v140 = (_QWORD *)(v124 + 16);
          v141 = v51;
          do
          {
            *v140 = *(_QWORD *)((char *)v140 + v123 - v124);
            ++v140;
            --v141;
          }
          while ( v141 );
        }
        v127 = BlendStraightColorDW(*(_DWORD *)(v123 + 12), v55);
        v121 += v128;
        *(_DWORD *)(v129 + 12) = v127;
        v120 += v53;
        --v122;
      }
      while ( v122 );
    }
  }
  else if ( (_DWORD)v47 )
  {
    v110 = 0;
    v111 = 0;
    v112 = v47;
    do
    {
      v113 = v52 + v111;
      v114 = v42 + v110;
      *(float *)v114 = (float)((float)(v58.m128_f32[0] * *(float *)v113)
                             + (float)(v65.m128_f32[0] * *(float *)(v113 + 4)))
                     + v61.m128_f32[0];
      v115 = v59.m128_f32[0] * *(float *)v113;
      v116 = v66.m128_f32[0] * *(float *)(v113 + 4);
      *(_DWORD *)(v114 + 8) = 1065353216;
      *(float *)(v114 + 4) = (float)(v115 + v116) + v62.m128_f32[0];
      if ( (_DWORD)v51 )
      {
        v142 = (_QWORD *)(v114 + 16);
        v143 = v51;
        do
        {
          *v142 = *(_QWORD *)((char *)v142 + v113 - v114);
          ++v142;
          --v143;
        }
        while ( v143 );
      }
      v117 = BlendPremultipliedColorDW(*(_DWORD *)(v113 + 12), v55);
      v111 += v118;
      *(_DWORD *)(v119 + 12) = v117;
      v110 += v53;
      --v112;
    }
    while ( v112 );
  }
  dword_1803DE484 += v153;
  return v5;
}

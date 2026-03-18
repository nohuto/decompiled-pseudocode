/*
 * XREFs of PerformSample @ 0x1801479B0
 * Callers:
 *     PrepareSamplers @ 0x180145AF4 (PrepareSamplers.c)
 *     AppendShaderBody @ 0x1801469E8 (AppendShaderBody.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180147D3C (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ApplyTexcoordTransformations @ 0x180147F20 (ApplyTexcoordTransformations.c)
 *     AppendColorModifications @ 0x1801485B0 (AppendColorModifications.c)
 *     GetExtendModeDecoration @ 0x1801DE0F8 (GetExtendModeDecoration.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PerformSample(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  _BYTE *v6; // rdi
  unsigned __int16 v8; // r12
  int v10; // r15d
  int v11; // eax
  unsigned __int16 v12; // r15
  int appended; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 v17; // si
  __int64 v18; // rdx
  int v19; // r9d
  char ExtendModeDecoration; // al
  __int64 v22; // rcx
  char v23; // r8
  char v24; // al
  __int64 v25; // xmm0_8
  unsigned int v26; // [rsp+20h] [rbp-79h]
  __int16 v27; // [rsp+30h] [rbp-69h]
  __int128 v28; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v29[24]; // [rsp+50h] [rbp-49h] BYREF
  char v30; // [rsp+68h] [rbp-31h]
  unsigned __int8 v31; // [rsp+69h] [rbp-30h]
  char v32; // [rsp+6Ah] [rbp-2Fh]
  _WORD v33[8]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v34; // [rsp+80h] [rbp-19h] BYREF

  v6 = (_BYTE *)(a2 + 32LL * a3);
  v8 = a3 | 0x300;
  *(_QWORD *)&v34 = a2;
  v27 = a3 | 0x400;
  if ( v6[23] )
  {
    appended = CShaderLinkingGraphBuilder::CopyNode(a1, a5, v8);
    v14 = appended;
    if ( appended >= 0 )
      return v14;
    v26 = 640;
    goto LABEL_15;
  }
  v10 = *(_DWORD *)(a1 + 80);
  v11 = v10 + 1;
  v12 = v10 | 0x600;
  *(_DWORD *)(a1 + 80) = v11;
  appended = CShaderLinkingGraphBuilder::CopyNode(a1, v12, a4);
  v14 = appended;
  if ( appended < 0 )
  {
    v26 = 650;
    goto LABEL_15;
  }
  v15 = ApplyTexcoordTransformations(a1, v34, a3, v12, a6);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x291u, 0LL);
    return v14;
  }
  v17 = a3 + 48;
  v33[0] = v12;
  v33[1] = v8;
  v33[2] = v27;
  if ( !v6[21] )
  {
    if ( !v6[20] )
    {
      v18 = 1LL;
      qmemcpy(v29, "SampleTexture", 13);
      *(_WORD *)&v29[13] = v17;
      goto LABEL_7;
    }
    if ( v6[17] == 2 )
    {
      if ( v6[16] == 2 )
      {
        qmemcpy(v29, "SampleWrappedTexture", 20);
        *(_WORD *)&v29[20] = v17;
LABEL_21:
        v18 = 3LL;
        goto LABEL_7;
      }
      v24 = aSamplewrappedt[24];
      *(_OWORD *)v29 = *(_OWORD *)"SampleWrappedTextureVOnly";
      v25 = *(_QWORD *)"tureVOnly";
    }
    else
    {
      v24 = aSamplewrappedt_0[24];
      *(_OWORD *)v29 = *(_OWORD *)"SampleWrappedTextureUOnly";
      v25 = *(_QWORD *)"tureUOnly";
    }
    *(_QWORD *)&v29[16] = v25;
    v30 = v24;
    v31 = v17;
    v32 = 0;
    goto LABEL_21;
  }
  v18 = 1LL;
  *(_WORD *)&v29[18] = v17;
  qmemcpy(v29, "MultiSampleTexture", 18);
  if ( v6[18] )
  {
    LOBYTE(v16) = v6[16];
    if ( (_BYTE)v16 )
    {
      ExtendModeDecoration = GetExtendModeDecoration(v16);
      LOBYTE(v22) = v6[17];
      v29[19] = ExtendModeDecoration;
      v29[20] = GetExtendModeDecoration(v22);
      v18 = 2LL;
      v29[21] = v23;
    }
  }
LABEL_7:
  gsl::details::extent_type<-1>::extent_type<-1>(&v28, v18);
  if ( (_QWORD)v28 == -1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)&v34 = v28;
  *((_QWORD *)&v34 + 1) = v33;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a5, (__int64)word_1802F327A, a6, (__int64)v29, &v34);
  v14 = appended;
  if ( appended < 0 )
  {
    v26 = 707;
    goto LABEL_15;
  }
  v14 = AppendColorModifications(a1, v6, a5, a6);
  if ( (v14 & 0x80000000) != 0 )
  {
    v19 = v14;
    v26 = 708;
    goto LABEL_16;
  }
  if ( v6[18] )
  {
    if ( !v6[16] )
    {
      LOWORD(v34) = a5;
      *((_QWORD *)&v28 + 1) = &v34;
      WORD1(v34) = v12;
      WORD2(v34) = v8;
      *(_QWORD *)&v28 = 3LL;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   a5,
                   (__int64)word_1802F327A,
                   a6,
                   (__int64)"ClampTransparent",
                   &v28);
      v14 = appended;
      if ( appended < 0 )
      {
        v26 = 718;
LABEL_15:
        v19 = appended;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v26, 0LL);
      }
    }
  }
  return v14;
}

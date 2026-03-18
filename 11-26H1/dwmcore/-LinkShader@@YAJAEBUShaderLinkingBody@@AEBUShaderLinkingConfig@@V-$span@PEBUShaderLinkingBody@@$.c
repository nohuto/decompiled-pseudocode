/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1800FFEB0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     PrepareSamplers @ 0x180145AF4 (PrepareSamplers.c)
 *     UseFragmentsModuleNoRef @ 0x180145C30 (UseFragmentsModuleNoRef.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180145E00 (--1-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uhash_.c)
 *     GetExpectedVertexShaderDesc @ 0x180145E5C (GetExpectedVertexShaderDesc.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180145F14 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     LoadShaderBody @ 0x180146764 (LoadShaderBody.c)
 *     AppendShaderBody @ 0x1801469E8 (AppendShaderBody.c)
 *     DiscoverSamplers @ 0x180146CEC (DiscoverSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x180146DE0 (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     HasWhiteNoise @ 0x180146E00 (HasWhiteNoise.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18014700C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     InitializeShaderLinkingInput @ 0x180147FD0 (InitializeShaderLinkingInput.c)
 *     AppendLights @ 0x1801D25E0 (AppendLights.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinkShader(
        __int64 a1,
        __int64 a2,
        struct _EVENT_DATA_DESCRIPTOR *a3,
        char *a4,
        struct ID3D10Blob **a5)
{
  __int64 v5; // r15
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 Ptr; // rcx
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r12
  unsigned int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  bool v20; // al
  __int64 v21; // r9
  int v22; // edx
  char v23; // r14
  __int64 ExpectedVertexShaderDesc; // rax
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  int v28; // edx
  __int64 v29; // r15
  int v30; // r12d
  int v31; // eax
  __int64 j; // r14
  int v33; // r14d
  int v34; // r8d
  int v35; // eax
  int v36; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v37; // rdx
  int v38; // eax
  __int64 v39; // r8
  __int64 v41; // rbx
  int v42; // r8d
  int ShaderBody; // eax
  int v44; // eax
  _QWORD *v45; // rcx
  _QWORD *i; // rdi
  int v47; // r15d
  unsigned int v48; // eax
  int v49; // eax
  int ConversionShader; // eax
  int v51; // eax
  int v52; // eax
  int appended; // eax
  int v54; // eax
  int v55; // eax
  bool v56; // zf
  char **v57; // rax
  int v58; // eax
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v61; // [rsp+50h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR *v62; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v63; // [rsp+60h] [rbp-A0h]
  struct ID3D10Blob **v64; // [rsp+68h] [rbp-98h]
  struct ID3D11Linker *ppLinker; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  char v67[80]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v68[2]; // [rsp+D0h] [rbp-30h] BYREF
  bool v69[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v70; // [rsp+F4h] [rbp-Ch]
  char v71[24]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+110h] [rbp+10h] BYREF
  char *v73; // [rsp+130h] [rbp+30h] BYREF
  char v74; // [rsp+138h] [rbp+38h]

  v5 = a1;
  *(_QWORD *)v71 = a1;
  v64 = a5;
  v73 = a4;
  v62 = a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)&ppLinker, a2);
  v9 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1u,
      &v72);
  Ptr = a3->Ptr;
  *(_QWORD *)&v72.Size = v68;
  v11 = 0;
  *(_DWORD *)v69 = *(_DWORD *)(v5 + 40);
  v12 = *(_QWORD **)&a3->Size;
  memset(v68, 0, sizeof(v68));
  v72.Ptr = 4LL;
  v13 = v12;
  v14 = &v12[Ptr];
  v61 = v12;
  v63 = Ptr;
  if ( v12 != v14 )
  {
    v47 = *(_DWORD *)v69;
    do
    {
      v47 += *(_DWORD *)(*v13 + 40LL);
      v48 = DiscoverSamplers(*v13, &v72);
      if ( v11 > v48 )
        v48 = v11;
      ++v13;
      v11 = v48;
    }
    while ( v13 != v14 );
    *(_DWORD *)v69 = v47;
    v5 = *(_QWORD *)v71;
  }
  v15 = DiscoverSamplers(v5, &v72);
  if ( v11 > v15 )
    v15 = v11;
  v16 = 0LL;
  v17 = 0LL;
  v18 = v15;
  do
  {
    v19 = (unsigned int)v17;
    if ( (unsigned int)v17 >= 4uLL )
      goto LABEL_37;
    v20 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(a2 + 32LL * (unsigned int)v17));
    v17 = (unsigned int)(v22 + 1);
    *((_BYTE *)v68 + v21 + 2) = v20;
    if ( v20 )
    {
      *(_DWORD *)((char *)v68 + v21 + 4) = v16;
      if ( v18 <= (unsigned int)v17 )
        v18 = v17;
      v16 = (unsigned int)(v16 + 1);
    }
  }
  while ( (unsigned int)v17 < 4 );
  v23 = HasWhiteNoise(v5);
  if ( !v23 )
  {
    v45 = v61;
    for ( i = v61; i != &v45[v63]; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v23 = 1;
        break;
      }
      v45 = v61;
    }
  }
  v72 = *v62;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc((__int64 *)v5, &v72, a2, v15, v23);
  *(_QWORD *)v73 = ExpectedVertexShaderDesc;
  v25 = InitializeShaderLinkingInput(&ppLinker);
  v26 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x4E6u, 0LL);
    goto LABEL_32;
  }
  v27 = UseFragmentsModuleNoRef((CShaderLinkingGraphBuilder *)&ppLinker, *(unsigned int *)v69, &v60);
  v26 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x4E7u, 0LL);
    goto LABEL_32;
  }
  v29 = v60;
  if ( v15 > 2 )
  {
    v30 = 0;
  }
  else
  {
    v30 = 0;
    if ( !v23 )
      goto LABEL_18;
  }
  *(_DWORD *)v69 = 16843008;
  v70 = 258;
  v72.Ptr = 3LL;
  *(_QWORD *)&v72.Size = v69;
  LOWORD(v28) = v23 != 0 ? 12 : 259;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               (unsigned int)&ppLinker,
               v28,
               (unsigned int)word_1802F327A,
               v60,
               (__int64)"DecodeTexcoord3",
               (__int64)&v72);
  v26 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x4F3u, 0LL);
    goto LABEL_32;
  }
LABEL_18:
  v69[0] = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(&v72, v18);
  *(_QWORD *)&v72.Size = v68;
  if ( v72.Ptr == -1LL )
  {
LABEL_37:
    ((void (__fastcall *)(__int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v19, v17, v16);
    __debugbreak();
  }
  v31 = PrepareSamplers((__int64)&ppLinker, a2, &v72);
  v26 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x500u, 0LL);
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < LODWORD(v62->Ptr); j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v63 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v41 = v61[j];
      LOWORD(v72.Reserved) = (unsigned __int8)(j + 48);
      v60 = v41;
      qmemcpy(&v72, "BodyFragment", 12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
      ShaderBody = LoadShaderBody((unsigned int)&ppLinker, v41, v42, v30, (__int64)&v72, (__int64)&v59);
      v26 = ShaderBody;
      if ( ShaderBody < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderBody, 0x50Bu, 0LL);
        goto LABEL_55;
      }
      v9 = v59;
      v44 = AppendShaderBody(
              (unsigned int)&ppLinker,
              (unsigned __int16)j | 0x500u,
              v60,
              a2,
              (__int64)&v72,
              v59,
              v29,
              (__int64)v69);
      v26 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x50Cu, 0LL);
        goto LABEL_32;
      }
      v30 += *(_DWORD *)(v60 + 40);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v59);
    v33 = *(_DWORD *)v71;
    v35 = LoadShaderBody((unsigned int)&ppLinker, *(_DWORD *)v71, v34, v30, (__int64)word_1802F327A, (__int64)&v59);
    v26 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x512u, 0LL);
LABEL_55:
      v9 = v59;
      goto LABEL_32;
    }
    v9 = v59;
    v36 = AppendShaderBody((unsigned int)&ppLinker, 10, v33, a2, (__int64)word_1802F327A, v59, v29, (__int64)v69);
    v26 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x513u, 0LL);
      goto LABEL_32;
    }
    if ( *(_BYTE *)(a2 + 133)
      && (v72.Ptr = 5LL,
          *(_QWORD *)&v72.Size = &unk_180382170,
          v55 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)&ppLinker,
                  10,
                  (unsigned int)word_1802F327A,
                  v29,
                  (__int64)"ApplyPSClipPlanes",
                  (__int64)&v72),
          v26 = v55,
          v55 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x524u, 0LL);
    }
    else
    {
      if ( *(_BYTE *)(a2 + 135) )
      {
        v72.Ptr = 2LL;
        *(_QWORD *)&v72.Size = &unk_1802F5CC4;
        v49 = CShaderLinkingGraphBuilder::AppendNode(
                (unsigned int)&ppLinker,
                10,
                (unsigned int)word_1802F327A,
                v29,
                (__int64)"AlphaMultiply",
                (__int64)&v72);
        v26 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x532u, 0LL);
          goto LABEL_32;
        }
      }
      if ( !v69[0] && *(_DWORD *)(a2 + 128) != -1 )
      {
        v54 = AppendLights(10LL, &ppLinker, a2 + 128, 0xFFFFFFFFLL);
        v26 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0x539u, 0LL);
          goto LABEL_32;
        }
      }
      if ( *(_BYTE *)(a2 + 137) && *(_BYTE *)(a2 + 136) )
      {
        v73 = "NoOp";
        ConversionShader = ColorConversion::GetConversionShader(
                             DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                             0,
                             8,
                             DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                             (struct ColorConversion::Shader *)&v73,
                             v69);
        v26 = ConversionShader;
        if ( ConversionShader < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ConversionShader, 0x549u, 0LL);
          goto LABEL_32;
        }
        v72.Ptr = 1LL;
        *(_QWORD *)&v72.Size = "\n";
        v51 = CShaderLinkingGraphBuilder::AppendNode(
                (unsigned int)&ppLinker,
                10,
                (unsigned int)word_1802F327A,
                v29,
                (__int64)v73,
                (__int64)&v72);
        v26 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x54Cu, 0LL);
          goto LABEL_32;
        }
        v72.Ptr = 1LL;
        *(_QWORD *)&v72.Size = "\n";
        v52 = CShaderLinkingGraphBuilder::AppendNode(
                (unsigned int)&ppLinker,
                10,
                (unsigned int)word_1802F327A,
                v29,
                (__int64)"BoostSDRLuminance",
                (__int64)&v72);
        v26 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x550u, 0LL);
          goto LABEL_32;
        }
      }
      if ( !*(_BYTE *)(a2 + 132) )
        goto LABEL_30;
      v56 = *(_BYTE *)(a2 + 137) == 0;
      *(_QWORD *)&v72.Size = v69;
      v57 = &v73;
      LODWORD(v73) = 1114532173;
      if ( !v56 )
        v57 = (char **)v71;
      HIDWORD(v73) = 1684956524;
      v74 = 0;
      strcpy(v71, "MinBlend_HDR");
      *(_WORD *)v69 = 10;
      v72.Ptr = 1LL;
      v58 = CShaderLinkingGraphBuilder::AppendNode(
              (unsigned int)&ppLinker,
              10,
              (unsigned int)word_1802F327A,
              v29,
              (__int64)v57,
              (__int64)&v72);
      v26 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x55Au, 0LL);
      }
      else
      {
LABEL_30:
        v38 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)&ppLinker, v37, v64);
        v26 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x55Du, 0LL);
      }
    }
  }
LABEL_32:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v39,
      1u,
      &v72);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::~_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>((__int64)v67);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppLinker);
  return v26;
}

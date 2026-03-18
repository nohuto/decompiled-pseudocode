/*
 * XREFs of AppendLights @ 0x1801D25E0
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     AppendShaderBody @ 0x1801469E8 (AppendShaderBody.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x180145A44 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     LinkLightShader @ 0x18025E868 (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18025F508 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, CShaderLinkingGraphBuilder *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned __int16 v16; // si
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int NodeFromOutputArgument; // eax
  bool v21; // zf
  int v22; // eax
  __int16 v23; // r14
  int v24; // r14d
  int v25; // eax
  int appended; // eax
  int v27; // eax
  __int64 v28; // rcx
  _WORD v30[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int128 v32; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v33; // [rsp+90h] [rbp+30h] BYREF

  v33 = a1;
  v4 = qword_1803DEC68;
  if ( !qword_1803DEC68 )
  {
    v8 = D3DLoadModule(&unk_180364390, 0xEE3DuLL, &qword_1803DEC68);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3DFu, 0LL);
      return v9;
    }
    v4 = qword_1803DEC68;
  }
  *(_QWORD *)&v31 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  v11 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, __int128 *))CreateInstance)(
          qword_1803DEC68,
          word_1802F327A,
          &v31);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3E5u, 0LL);
    goto LABEL_30;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v31 + 24LL))(v31, 1LL, 1LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x3EBu, 0LL);
    v28 = v31;
    if ( (_QWORD)v31 )
    {
      *(_QWORD *)&v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return v9;
  }
  v13 = CShaderLinkingGraphBuilder::UseLibrary(a2, (struct ID3D11ModuleInstance *)v31);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x3EDu, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
    return v9;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  v14 = *((_DWORD *)a2 + 20);
  v15 = v14 + 1;
  v16 = v14 | 0x600;
  *((_DWORD *)a2 + 20) = v15;
  if ( a4 >= 0 )
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v16, v33, (unsigned int)a4);
    v9 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NodeFromOutputArgument, 0x411u, 0LL);
      return v9;
    }
    v21 = *a3 == -1;
    v30[0] = 0;
    if ( v21 )
    {
      v24 = *((_DWORD *)a2 + 20);
      v32 = 0uLL;
      v25 = v24 + 1;
      v23 = v24 | 0x600;
      *((_DWORD *)a2 + 20) = v25;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (__int64)a2,
                   v23,
                   (__int64)word_1802F327A,
                   (__int64)qword_1803DEC68,
                   (__int64)"NoLightAccumulator",
                   &v32);
      v9 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x426u, 0LL);
        return v9;
      }
    }
    else
    {
      LOWORD(v31) = v33;
      *((_QWORD *)&v32 + 1) = &v31;
      WORD1(v31) = v16;
      *(_QWORD *)&v32 = 2LL;
      v22 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)qword_1803DEC68, (unsigned int)&v32, 1, (__int64)v30);
      v9 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x420u, 0LL);
        return v9;
      }
      v23 = v30[0];
    }
    *((_QWORD *)&v32 + 1) = &v31;
    LOWORD(v31) = v23;
    WORD1(v31) = v16;
    *(_QWORD *)&v32 = 2LL;
    v27 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v33,
            (__int64)word_1802F327A,
            (__int64)qword_1803DEC68,
            (__int64)"PostSceneLightingEffectLib",
            &v32);
    v9 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x42Du, 0LL);
  }
  else
  {
    *((_QWORD *)&v31 + 1) = &v33;
    *(_QWORD *)&v31 = 1LL;
    v17 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v16,
            (__int64)word_1802F327A,
            (__int64)qword_1803DEC68,
            (__int64)"UnPremultiplyForLighting",
            &v31);
    v9 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x3F7u, 0LL);
    }
    else
    {
      *((_QWORD *)&v32 + 1) = &v31;
      v30[0] = 0;
      LOWORD(v31) = v16;
      *(_QWORD *)&v32 = 1LL;
      v18 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)qword_1803DEC68, (unsigned int)&v32, 0, (__int64)v30);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x404u, 0LL);
      }
      else
      {
        LOWORD(v31) = v30[0];
        *((_QWORD *)&v32 + 1) = &v31;
        WORD1(v31) = v33;
        *(_QWORD *)&v32 = 2LL;
        v19 = CShaderLinkingGraphBuilder::AppendNode(
                (__int64)a2,
                v33,
                (__int64)word_1802F327A,
                (__int64)qword_1803DEC68,
                (__int64)"PostLightingLib",
                &v32);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x40Bu, 0LL);
      }
    }
  }
  return v9;
}

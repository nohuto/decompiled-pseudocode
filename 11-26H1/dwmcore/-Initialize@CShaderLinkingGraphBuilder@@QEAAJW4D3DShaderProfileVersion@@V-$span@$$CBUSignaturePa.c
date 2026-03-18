/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801473A4
 * Callers:
 *     InitializeShaderLinkingInput @ 0x180147FD0 (InitializeShaderLinkingInput.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x180147750 (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 *     ?reserve@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX_K@Z @ 0x180148310 (-reserve@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18025F350 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(
        struct ID3D11Linker **ppLinker,
        char a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r13
  unsigned int v5; // r12d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int64 v13; // xmm0_8
  HRESULT v14; // eax
  unsigned int v15; // edi
  struct ID3D11Linker **v16; // rbx
  HRESULT v17; // eax
  struct ID3D11Linker *v18; // rdi
  HRESULT (__stdcall *UseLibrary)(ID3D11Linker *, struct ID3D11ModuleInstance *); // rbx
  int v20; // eax
  unsigned int v21; // r14d
  struct ID3D11Linker **v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+59h] [rbp-A7h]
  char v33; // [rsp+5Dh] [rbp-A3h]
  __int16 v34; // [rsp+5Eh] [rbp-A2h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  _BYTE v39[24]; // [rsp+90h] [rbp-70h]
  _OWORD v40[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h]
  char v42[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v43; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-8h] BYREF
  char v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+101h] [rbp+1h]
  char v47; // [rsp+105h] [rbp+5h]

  v3 = *a3;
  v5 = *(_DWORD *)a3;
  *((_BYTE *)ppLinker + 84) = a2;
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  std::vector<_D3D11_PARAMETER_DESC>::reserve(&v28, v3);
  v7 = a3[1];
  v8 = v7 + 32 * v3;
  v35 = v7;
  if ( v7 != v8 )
  {
    v9 = *((_QWORD *)&v28 + 1);
    do
    {
      v10 = *(_DWORD *)(v7 + 28);
      v37 = *(_OWORD *)(v7 + 8);
      LODWORD(v38) = *(_DWORD *)(v7 + 24);
      DWORD2(v38) = 1;
      *(_OWORD *)&v39[8] = 0LL;
      DWORD1(v38) = v10 != 1;
      HIDWORD(v38) = v10;
      v11 = v38;
      *(_QWORD *)v39 = 0x100000000LL;
      v12 = *(_OWORD *)v39;
      v13 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v39[8], *(__m128d *)&v39[8]);
      v40[1] = v38;
      v40[0] = v37;
      v40[2] = *(_OWORD *)v39;
      v41 = v13;
      if ( v9 == v29 )
      {
        std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v28, v9, v40);
        v9 = *((_QWORD *)&v28 + 1);
      }
      else
      {
        *(_OWORD *)v9 = v37;
        *(_OWORD *)(v9 + 16) = v11;
        *(_OWORD *)(v9 + 32) = v12;
        *(_QWORD *)(v9 + 48) = v13;
        v9 = *((_QWORD *)&v28 + 1) + 56LL;
        *((_QWORD *)&v28 + 1) += 56LL;
      }
      v7 += 32LL;
    }
    while ( v7 != v8 );
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppLinker);
  v14 = D3DCreateLinker(ppLinker);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x45u, 0LL);
  }
  else
  {
    v16 = ppLinker + 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppLinker + 1);
    v17 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
    v15 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x46u, 0LL);
    }
    else
    {
      v18 = *v16;
      UseLibrary = (*v16)->lpVtbl->UseLibrary;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      v20 = ((__int64 (__fastcall *)(struct ID3D11Linker *, _QWORD, __int64, __int64 *))UseLibrary)(
              v18,
              v28,
              0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v28 + 1) - v28) >> 3),
              &v27);
      v15 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x4Au, 0LL);
      }
      else
      {
        v21 = 0;
        if ( v5 )
        {
          v22 = ppLinker + 2;
          do
          {
            v23 = v27;
            v24 = 0LL;
            v36 = 0LL;
            v30 = 0LL;
            v32 = 0;
            v33 = 0;
            v34 = 0;
            if ( v27 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
              v24 = v23;
              v30 = v23;
            }
            v31 = v21;
            if ( v21 >= v3 )
            {
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            v44 = v24;
            v43 = *(_WORD *)(32LL * v21 + v35);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
            v46 = v36;
            v47 = v36;
            v45 = v21;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              v22,
              v42,
              &v43);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
            ++v21;
          }
          while ( v21 < v5 );
        }
      }
    }
  }
  v25 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( (_QWORD)v28 )
    std::_Deallocate<16>((void *)v28, 8 * ((v29 - (__int64)v28) >> 3));
  return v15;
}

/*
 * XREFs of UseFragmentsModuleNoRef @ 0x180145C30
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x180145A44 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180146B90 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(CShaderLinkingGraphBuilder *this, unsigned int a2, _QWORD *a3)
{
  CShaderLinkingGraphBuilder *v4; // rdi
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, const char *, struct ID3D11ModuleInstance **); // rbx
  int v10; // eax
  int v11; // eax
  struct ID3D11ModuleInstance *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-10h]
  struct ID3D11ModuleInstance *v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v4 = this;
  v15 = 0LL;
  LOBYTE(this) = *((_BYTE *)this + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(this, &v16);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v14 = 28;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, v14, 0LL);
    goto LABEL_8;
  }
  v8 = v16;
  v9 = *(__int64 (__fastcall **)(__int64, const char *, struct ID3D11ModuleInstance **))(*(_QWORD *)v16 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  v10 = v9(v8, word_1802F327A, &v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Du, 0LL);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v15->lpVtbl->BindResource)(
            v15,
            0LL,
            0LL,
            4LL);
    v7 = v11;
    if ( v11 >= 0 )
    {
      FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v15->lpVtbl->BindSampler)(
                               v15,
                               0LL,
                               0LL,
                               4LL);
      v7 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 33;
      }
      else
      {
        FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v15->lpVtbl->BindConstantBuffer)(
                                 v15,
                                 0LL,
                                 0LL,
                                 a2);
        v7 = FragmentsModuleNoRef;
        if ( FragmentsModuleNoRef < 0 )
        {
          v14 = 42;
        }
        else
        {
          FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v15->lpVtbl->BindConstantBuffer)(
                                   v15,
                                   2LL,
                                   2LL);
          v7 = FragmentsModuleNoRef;
          if ( FragmentsModuleNoRef >= 0 )
          {
            CShaderLinkingGraphBuilder::UseLibrary(v4, v15);
            *a3 = v8;
            goto LABEL_8;
          }
          v14 = 48;
        }
      }
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x20u, 0LL);
  }
LABEL_8:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct ID3D11ModuleInstance *))v12->lpVtbl->Release)(v12);
  }
  return v7;
}

/*
 * XREFs of LoadShaderBody @ 0x180146764
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180146B90 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LoadShaderBody(
        __int64 a1,
        __int64 a2,
        struct ID3D11Module *a3,
        unsigned int a4,
        __int64 a5,
        struct ID3D11Module **a6)
{
  _QWORD *v7; // r14
  int FragmentsModuleNoRef; // eax
  unsigned int v10; // ebx
  HRESULT v11; // eax
  struct ID3D11Module *v12; // rbx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rdi
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  struct ID3D11Module *v17; // rcx
  struct ID3D11Module *v18; // rcx
  struct ID3D11Module *v19; // rcx
  struct ID3D11Module *v21; // rcx
  struct ID3D11Module *v22; // rdi
  unsigned int v23; // ebx
  struct ID3D11Module *ppModule; // [rsp+60h] [rbp+30h] BYREF
  struct ID3D11Module *v25; // [rsp+70h] [rbp+40h] BYREF

  v25 = a3;
  v7 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  ppModule = 0LL;
  v25 = 0LL;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v25);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, 0x339u, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 16) )
    {
      v22 = v25;
      if ( ppModule == v25 )
        goto LABEL_11;
      if ( v25 )
        ((void (__fastcall *)(struct ID3D11Module *))v25->lpVtbl->AddRef)(v25);
      v17 = ppModule;
      ppModule = v22;
      if ( !v17 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppModule);
    v11 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x340u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    }
    else
    {
      v12 = ppModule;
      CreateInstance = ppModule->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      v14 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11Module **))CreateInstance)(
              v12,
              a5,
              &v25);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x341u, 0LL);
      }
      else
      {
        ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, _QWORD))v25->lpVtbl->CreateInstance)(
          v25,
          0LL,
          0LL,
          a4);
        ((void (__fastcall *)(struct ID3D11Module *, __int64, __int64, _QWORD))v25->lpVtbl->CreateInstance)(
          v25,
          1LL,
          1LL,
          0LL);
        v15 = *(_WORD *)(a2 + 44);
        if ( (v15 & 0xFF00) == 0x200 )
        {
          v23 = (unsigned __int8)v15;
          ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, __int64))v25->lpVtbl[1].AddRef)(
            v25,
            (unsigned __int8)v15,
            (unsigned __int8)v15,
            1LL);
          ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, __int64))v25->lpVtbl[1].CreateInstance)(
            v25,
            v23,
            v23,
            1LL);
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Module *))(*(_QWORD *)*v7 + 32LL))(*v7, v25);
        v10 = v16;
        if ( v16 >= 0 )
        {
          v17 = v25;
          if ( !v25 )
          {
LABEL_11:
            v18 = ppModule;
            ppModule = 0LL;
            *a6 = v18;
            goto LABEL_12;
          }
          v25 = 0LL;
LABEL_10:
          ((void (__fastcall *)(struct ID3D11Module *))v17->lpVtbl->Release)(v17);
          goto LABEL_11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x35Cu, 0LL);
      }
      v21 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        ((void (__fastcall *)(struct ID3D11Module *))v21->lpVtbl->Release)(v21);
      }
    }
  }
LABEL_12:
  v19 = ppModule;
  if ( ppModule )
  {
    ppModule = 0LL;
    ((void (__fastcall *)(struct ID3D11Module *))v19->lpVtbl->Release)(v19);
  }
  return v10;
}

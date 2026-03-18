/*
 * XREFs of PrepareSamplers @ 0x180145AF4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PopulateSamplerArguments @ 0x180145780 (PopulateSamplerArguments.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180146B90 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     PerformSample @ 0x1801479B0 (PerformSample.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrepareSamplers(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r14
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ebx
  __int64 v9; // r15
  __int64 i; // rdi
  _BYTE *v11; // r9
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v14);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef >= 0 )
  {
    v9 = v14;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)a3; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = (_BYTE *)(a3[1] + 8 * i);
      if ( *v11 || v11[2] )
      {
        v12 = PopulateSamplerArguments(v4, a2, i, v11, v9);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x316u, 0LL);
          return v7;
        }
        if ( *(_BYTE *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a3, (unsigned int)i) + 1) )
        {
          v13 = PerformSample(v4, a2, i, (unsigned __int16)i | 0x100u, (unsigned __int16)i | 0x200u, v9);
          v7 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x320u, 0LL);
            return v7;
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FragmentsModuleNoRef, 0x30Fu, 0LL);
  }
  return v7;
}

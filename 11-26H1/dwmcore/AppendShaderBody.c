/*
 * XREFs of AppendShaderBody @ 0x1801469E8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x180144F34 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     AppendCustomSamplerShaderBody @ 0x1801452A0 (AppendCustomSamplerShaderBody.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     PerformSample @ 0x1801479B0 (PerformSample.c)
 *     AppendLights @ 0x1801D25E0 (AppendLights.c)
 */

__int64 __fastcall AppendShaderBody(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v12; // rax
  int appended; // eax
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int16 v16; // r14
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF

  if ( (a3[11] & 0xFF00) == 0x200 )
    return AppendCustomSamplerShaderBody(a1, a2, (__int128 *)a3, a4, a5, a6, a7);
  v12 = *((_QWORD *)a3 + 4);
  v21 = *(_OWORD *)a3;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a2, a5, a6, v12, (__int64)&v21);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x483u, 0LL);
  }
  else
  {
    v16 = *((_WORD *)a3 + 22);
    if ( v16 == 11 )
    {
      v18 = AppendLights(a2, a1, a4 + 128, *a3);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x488u, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v16 & 0xFF00) == 0x100 )
    {
      v19 = CShaderLinkingGraphBuilder::SwizzleNode(a1, a2, v14);
      v15 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x491u, 0LL);
      }
      else
      {
        v20 = PerformSample(a1, a4, (unsigned __int8)v16, a2, a2, a7);
        v15 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x498u, 0LL);
      }
    }
  }
  return v15;
}

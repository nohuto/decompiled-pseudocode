/*
 * XREFs of AppendColorConversion @ 0x1801486F0
 * Callers:
 *     AppendColorModifications @ 0x1801485B0 (AppendColorModifications.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorConversion(__int64 a1, __int64 a2, __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int16 v6; // r10
  int appended; // eax
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  __int16 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v5 = 0;
  v6 = a3;
  if ( *(_DWORD *)(a4 + 8) > 1u )
  {
    *(_QWORD *)&v12 = 1LL;
    *((_QWORD *)&v12 + 1) = &v13;
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3, (__int64)word_1802F327A, a2, *(_QWORD *)a4, &v12);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x243u, 0LL);
      return v5;
    }
    v6 = v13;
  }
  if ( a5 )
  {
    *(_QWORD *)&v12 = 1LL;
    *((_QWORD *)&v12 + 1) = &v13;
    v11 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v6,
            (__int64)word_1802F327A,
            a2,
            (__int64)"BoostSDRLuminance",
            &v12);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x248u, 0LL);
  }
  return v5;
}

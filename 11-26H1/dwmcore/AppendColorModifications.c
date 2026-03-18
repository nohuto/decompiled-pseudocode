/*
 * XREFs of AppendColorModifications @ 0x1801485B0
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801452A0 (AppendCustomSamplerShaderBody.c)
 *     PerformSample @ 0x1801479B0 (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorConversion @ 0x1801486F0 (AppendColorConversion.c)
 */

__int64 __fastcall AppendColorModifications(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int16 v5; // ax
  int v8; // eax
  unsigned int v9; // ebx
  int appended; // eax
  int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v5 = a3;
  if ( *(_BYTE *)(a2 + 24) )
  {
    *(_QWORD *)&v13 = 1LL;
    *((_QWORD *)&v13 + 1) = &v14;
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3, (__int64)word_1802F327A, a4, (__int64)"IgnoreAlpha", &v13);
    v9 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x25Au, 0LL);
      return v9;
    }
    v5 = v14;
  }
  if ( *(_BYTE *)(a2 + 25) )
  {
    *(_QWORD *)&v13 = 1LL;
    *((_QWORD *)&v13 + 1) = &v14;
    v12 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v5,
            (__int64)word_1802F327A,
            a4,
            (__int64)"UnBoostSDRLuminance",
            &v13);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x260u, 0LL);
      return v9;
    }
    v5 = v14;
  }
  v8 = AppendColorConversion(a1, a4, v5, a2, 0);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x263u, 0LL);
  return v9;
}

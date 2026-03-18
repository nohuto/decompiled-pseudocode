/*
 * XREFs of DecodeInputTexcoord @ 0x1801456DC
 * Callers:
 *     PopulateSamplerArguments @ 0x180145780 (PopulateSamplerArguments.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x180144F34 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall DecodeInputTexcoord(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // zf
  int appended; // eax
  unsigned int v6; // ebx
  int v8; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v10; // [rsp+60h] [rbp+18h] BYREF

  LOWORD(a3) = a3 | 0x100;
  v4 = *(_BYTE *)(a2 + 134) == 0;
  v10 = a3;
  if ( v4 )
  {
    v8 = CShaderLinkingGraphBuilder::SwizzleNode(a1, a3, a3);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x208u, 0LL);
  }
  else
  {
    v9[0] = 1LL;
    v9[1] = &v10;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 (unsigned __int16)a3,
                 (unsigned int)word_1802F327A,
                 a4,
                 (__int64)"FlattenTexcoords",
                 (__int64)v9);
    v6 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x203u, 0LL);
  }
  return v6;
}

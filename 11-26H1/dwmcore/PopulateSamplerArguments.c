/*
 * XREFs of PopulateSamplerArguments @ 0x180145780
 * Callers:
 *     PrepareSamplers @ 0x180145AF4 (PrepareSamplers.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DecodeInputTexcoord @ 0x1801456DC (DecodeInputTexcoord.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall PopulateSamplerArguments(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  int v8; // edx
  _BYTE *v9; // rdi
  unsigned __int16 v10; // cx
  unsigned int v12; // ebx
  int appended; // eax
  int v14; // eax
  char v16; // al
  int v17; // eax
  unsigned __int16 v18; // [rsp+30h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _BYTE v21[17]; // [rsp+50h] [rbp-20h] BYREF
  char v22; // [rsp+61h] [rbp-Fh]
  char v23; // [rsp+62h] [rbp-Eh]

  v8 = (unsigned __int16)a3;
  v9 = (_BYTE *)(a2 + 32LL * a3);
  v10 = a3 | 0x400;
  v12 = 0;
  v18 = a3 | 0x400;
  if ( a4[2] )
  {
    if ( v9[23] || v9[18] )
    {
      *(_WORD *)&v21[14] = (unsigned __int8)(a4[4] + 48);
      v19 = 0LL;
      v20 = 0LL;
      qmemcpy(v21, "GetSamplerData", 14);
      LOWORD(v8) = a3 | 0x300;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v8,
                   (unsigned int)word_1802F327A,
                   a5,
                   (__int64)v21,
                   (__int64)&v19);
      v12 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x2EEu, 0LL);
        return v12;
      }
      v10 = v18;
    }
    if ( v9[20] || v9[19] )
    {
      v16 = a4[4];
      v23 = 0;
      v22 = v16 + 48;
      v19 = 0LL;
      v20 = 0LL;
      qmemcpy(v21, "GetSamplerDataExt", sizeof(v21));
      v17 = CShaderLinkingGraphBuilder::AppendNode(
              a1,
              v10,
              (unsigned int)word_1802F327A,
              a5,
              (__int64)v21,
              (__int64)&v19);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2F4u, 0LL);
        return v12;
      }
    }
  }
  if ( *a4 )
  {
    if ( !v9[23] )
    {
      v14 = DecodeInputTexcoord(a1, a2, a3, a5);
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2FDu, 0LL);
    }
  }
  return v12;
}

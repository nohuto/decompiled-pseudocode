/*
 * XREFs of ApplyTexcoordTransformations @ 0x180147F20
 * Callers:
 *     PerformSample @ 0x1801479B0 (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ApplyTexcoordExtendMode @ 0x180148370 (ApplyTexcoordExtendMode.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned __int16 v5; // r14
  __int64 v6; // rdi
  char v10; // cl
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // r12
  int v15; // eax
  __int16 v16; // r9
  int v17; // eax
  int appended; // eax
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+90h] [rbp+18h] BYREF
  char v21; // [rsp+92h] [rbp+1Ah] BYREF

  v5 = a4;
  v6 = 32LL * a3;
  if ( *(_BYTE *)(v6 + a2 + 21) )
    return 0LL;
  LOBYTE(a4) = *(_BYTE *)(v6 + a2 + 16);
  v10 = *(_BYTE *)(v6 + a2 + 20);
  if ( (_BYTE)a4 == *(_BYTE *)(v6 + a2 + 17) )
  {
    v11 = ApplyTexcoordExtendMode(a1, v5, a3, a4, v10, a5, 0LL);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x227u, 0LL);
  }
  else
  {
    v14 = a5;
    v15 = ApplyTexcoordExtendMode(a1, v5, a3, a4, v10, a5, (__int64)&v20);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x22Du, 0LL);
    }
    else
    {
      LOBYTE(v16) = *(_BYTE *)(v6 + a2 + 17);
      v17 = ApplyTexcoordExtendMode(a1, v5, a3, v16, *(_BYTE *)(v6 + a2 + 20), v14, (__int64)&v21);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x22Eu, 0LL);
      }
      else
      {
        *(_QWORD *)&v19 = 2LL;
        *((_QWORD *)&v19 + 1) = &v20;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v5,
                     (__int64)word_1802F327A,
                     v14,
                     (__int64)"BorderEffectCombine",
                     &v19);
        v12 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x230u, 0LL);
      }
    }
  }
  return v12;
}

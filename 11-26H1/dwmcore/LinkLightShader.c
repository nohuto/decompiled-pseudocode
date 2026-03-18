/*
 * XREFs of LinkLightShader @ 0x18025E868
 * Callers:
 *     AppendLights @ 0x1801D25E0 (AppendLights.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_K@Z @ 0x1801B2F08 (--A-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 *a4, char a5, __int16 *a6)
{
  unsigned int v9; // ebx
  int v10; // ecx
  int appended; // eax
  unsigned int i; // edi
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int128 v16; // xmm0
  unsigned __int64 v17; // rbx
  __int16 v18; // dx
  int v19; // eax
  __int128 v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v25; // [rsp+80h] [rbp-9h] BYREF

  if ( a6 )
  {
    v10 = *(_DWORD *)(a1 + 80);
    v25 = 0uLL;
    *(_DWORD *)(a1 + 80) = v10 + 1;
    *a6 = v10 | 0x600;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v10 | 0x600u,
                 (__int64)word_1802F327A,
                 a3,
                 (__int64)"InitLightAccumulator",
                 &v25);
    v9 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x37Du, 0LL);
      return v9;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        return v9;
      v13 = (*a2 >> (4 * i)) & 0xF;
      if ( v13 != 15 )
        break;
LABEL_31:
      ;
    }
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
          {
            v9 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3B6u, 0LL);
            return v9;
          }
          if ( a5 )
          {
            qmemcpy(v24, "SpotSceneLightingEffectLib", 26);
            WORD5(v24[1]) = (unsigned __int8)(i + 48);
          }
          else
          {
            HIBYTE(v24[0]) = i + 48;
            qmemcpy(v24, "SpotLightingLib", 15);
            LOBYTE(v24[1]) = 0;
          }
        }
        else if ( a5 )
        {
          qmemcpy(v24, "PointSceneLightingEffectLib", 27);
          *(_WORD *)((char *)&v24[1] + 11) = (unsigned __int8)(i + 48);
        }
        else
        {
          LOWORD(v24[1]) = (unsigned __int8)(i + 48);
          v24[0] = *(_OWORD *)"PointLightingLib";
        }
LABEL_24:
        LODWORD(v25) = 196610;
        if ( i )
          LODWORD(v25) = 327684;
        v17 = 0LL;
        WORD2(v25) = *a6;
        *(_DWORD *)((char *)&v25 + 6) = 0;
        WORD5(v25) = 0;
        do
        {
          if ( v17 >= *a4 )
            break;
          *((_WORD *)&v25 + v17 + 3) = *(_WORD *)gsl::span<enum ShaderLinkingArgument const,-1>::operator[](a4, v17);
          ++v17;
        }
        while ( v17 + 3 < 6 );
        gsl::details::extent_type<-1>::extent_type<-1>(&v23, *a4 + 3);
        if ( v23 == -1 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v18 = *a6;
        *(_QWORD *)&v22 = v23;
        *((_QWORD *)&v22 + 1) = &v25;
        v19 = CShaderLinkingGraphBuilder::AppendNode(a1, v18, (__int64)word_1802F327A, a3, (__int64)v24, &v22);
        v9 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3CAu, 0LL);
          return v9;
        }
        goto LABEL_31;
      }
      if ( a5 )
      {
        qmemcpy(v24, "DistantSceneLightingEffectLib", 29);
        *(_WORD *)((char *)&v24[1] + 13) = (unsigned __int8)(i + 48);
        goto LABEL_24;
      }
      v16 = *(_OWORD *)"DistantLightingLib";
      LOWORD(v24[1]) = *(_WORD *)"ib";
      WORD1(v24[1]) = (unsigned __int8)(i + 48);
    }
    else
    {
      if ( a5 )
      {
        strcpy((char *)v24, "AmbientSceneLightingEffectLib0");
        goto LABEL_24;
      }
      v16 = *(_OWORD *)"AmbientLightingLib";
      strcpy((char *)&v24[1], "ib0");
    }
    v24[0] = v16;
    goto LABEL_24;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x378u, 0LL);
  return v9;
}

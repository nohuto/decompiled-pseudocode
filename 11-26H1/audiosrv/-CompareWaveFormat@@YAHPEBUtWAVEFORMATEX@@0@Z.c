/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18000C258 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18000CEE8 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000D45C (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000DA5C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     AudioServerGetDevicePeriod @ 0x18002B820 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18002BD70 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180042F44 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180078940 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180137F28 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180145064 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  int wFormatTag; // r8d
  WORD cbSize; // ax
  __m128i v5; // xmm2
  __int64 v6; // xmm1_8
  int v7; // r8d
  __int16 v8; // r11
  int v9; // ecx
  WORD v10; // ax
  __m128i v11; // xmm2
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int16 v14; // r10
  __int16 v15; // r9
  int v16; // edx
  __int16 v17; // ax
  WORD nChannels; // di
  WORD wBitsPerSample; // r10
  __int128 v21; // xmm0
  WORD v22; // si
  WORD v23; // di
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[40]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v30[40]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    wFormatTag = a1->wFormatTag;
    cbSize = a1->cbSize;
    memset(v30, 0, sizeof(v30));
    memset(v29, 0, sizeof(v29));
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v25 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v25 )
          v25 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v25 )
        {
          v26 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v26 )
            v26 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v26 )
            return v2;
        }
      }
      v5 = *(__m128i *)&a1->wFormatTag;
      v6 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)&v30[16] = *(_OWORD *)&a1->cbSize;
      v7 = *(_DWORD *)&v30[20];
      *(__m128i *)v30 = v5;
      *(_QWORD *)&v30[32] = v6;
      v8 = _mm_cvtsi128_si32(v5);
    }
    else
    {
      if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( nChannels != 2 && nChannels != 1 )
        return v2;
      wBitsPerSample = a1->wBitsPerSample;
      if ( wBitsPerSample != 8 && (((wBitsPerSample - 16) & 0xFFE7) != 0 || wBitsPerSample == 40) )
        return v2;
      v21 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v30[18] = a1->wBitsPerSample;
      *(GUID *)&v30[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v30[24] = wFormatTag;
      v8 = -2;
      *(_OWORD *)v30 = v21;
      v7 = (nChannels == 1) + 3;
      *(_WORD *)v30 = -2;
    }
    v9 = a2->wFormatTag;
    v10 = a2->cbSize;
    *(_WORD *)&v30[16] = 22;
    if ( (_WORD)v9 != 0xFFFE )
    {
      if ( v10 && (((_WORD)v9 - 1) & 0xFFFD) != 0 )
        return v2;
      v22 = a2->nChannels;
      if ( v22 != 2 && v22 != 1 )
        return v2;
      v23 = a2->wBitsPerSample;
      if ( v23 != 8 && (((v23 - 16) & 0xFFE7) != 0 || v23 == 40) )
        return v2;
      v24 = *(_OWORD *)&a2->wFormatTag;
      *(_WORD *)&v29[18] = a2->wBitsPerSample;
      *(GUID *)&v29[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v29[24] = v9;
      v14 = -2;
      *(_OWORD *)v29 = v24;
      v13 = (v22 == 1) + 3;
      *(_WORD *)v29 = -2;
      goto LABEL_9;
    }
    if ( v10 == 22 )
      goto LABEL_8;
    v27 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v27 )
      v27 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v27 )
      goto LABEL_8;
    v28 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v28 )
      v28 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v28 )
    {
LABEL_8:
      v11 = *(__m128i *)&a2->wFormatTag;
      v12 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)&v29[16] = *(_OWORD *)&a2->cbSize;
      v13 = *(_DWORD *)&v29[20];
      *(__m128i *)v29 = v11;
      *(_QWORD *)&v29[32] = v12;
      v14 = _mm_cvtsi128_si32(v11);
LABEL_9:
      *(_WORD *)&v29[16] = 22;
      if ( *(_WORD *)&v30[2] )
      {
        v15 = *(_WORD *)&v29[2];
      }
      else
      {
        v15 = 0;
        *(_WORD *)&v29[2] = 0;
        *(_DWORD *)&v29[8] = 0;
        *(_WORD *)&v29[12] = 0;
      }
      if ( *(_DWORD *)&v30[4] )
      {
        v16 = *(_DWORD *)&v29[4];
      }
      else
      {
        v16 = 0;
        *(_QWORD *)&v29[4] = 0LL;
      }
      if ( HIWORD(*(_QWORD *)&v30[8]) )
      {
        v17 = *(_WORD *)&v29[14];
      }
      else
      {
        v17 = 0;
        *(_DWORD *)&v29[12] = 0;
      }
      if ( !v7 )
        v13 = 0;
      *(_DWORD *)&v29[20] = v13;
      if ( !v8 )
      {
        v14 = 0;
        *(_WORD *)v29 = 0;
      }
      if ( !v15 )
      {
        *(_WORD *)&v30[2] = 0;
        *(_DWORD *)&v30[8] = 0;
        *(_WORD *)&v30[12] = 0;
      }
      if ( !v16 )
        *(_QWORD *)&v30[4] = 0LL;
      if ( !v17 )
        *(_DWORD *)&v30[12] = 0;
      if ( !v13 )
        v7 = 0;
      *(_DWORD *)&v30[20] = v7;
      if ( !v14 )
        *(_WORD *)v30 = 0;
      if ( !memcmp_0(&v30[24], &v29[24], 0x10uLL) && !memcmp_0(v30, v29, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}

/*
 * XREFs of BuildGetLogPageCommand @ 0x14000F760
 * Callers:
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x140019C28 (BuildGetLogPageCommandForTelemetryLog.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     ProtocolCommandCompletion @ 0x140020940 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140023580 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8)
{
  unsigned __int64 v9; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  int v13; // r9d
  __m128i v14; // xmm5
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // r9d
  __int64 PhysicalAddress; // rax
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  __m128i si128; // xmm6
  unsigned int v25; // r11d
  __m128i v26; // xmm4
  __int64 v27; // rax
  __m128i v28; // xmm2
  __int64 v29; // rax
  __int64 v30; // r11
  int v31; // [rsp+50h] [rbp+18h] BYREF

  v9 = a5;
  v11 = *(_QWORD *)(a1 + 1560);
  v12 = a4;
  v13 = a6;
  v14 = _mm_unpacklo_epi64((__m128i)a5, (__m128i)a5);
  if ( (unsigned __int8)a3 <= 9u && (v15 = 954, _bittest(&v15, a3))
    || (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)(a3 + 64) <= 9u && (v19 = 823, _bittest(&v19, a3 + 64)) )
  {
    v13 = -1;
  }
  *(_BYTE *)(a2 + 4136) = a3;
  v16 = *(_DWORD *)(a2 + 4136) & 0xFFFF7FFF;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4100) = v13;
  *(_DWORD *)(a2 + 4136) = v16 ^ (v16 ^ ((((unsigned int)v12 >> 2) - 1) << 16)) & 0xFFF0000;
  if ( (v9 & 0xFFF) == 0 && (_DWORD)v12 )
  {
    *(_QWORD *)(a2 + 4120) = v9;
    if ( (unsigned int)v12 > 0x1000 )
    {
      v20 = (unsigned int)(v12 + 4095) >> 12;
      if ( v20 == 2 )
      {
        PhysicalAddress = v9 + 4096;
      }
      else
      {
        v22 = 0;
        v31 = 0;
        v23 = v20 - 1;
        if ( v23 )
        {
          if ( v23 < 8 )
            goto LABEL_22;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v25 = 4;
          do
          {
            v26 = _mm_loadl_epi64(&_xmm);
            v27 = v22;
            v28 = _mm_cvtsi32_si128(v22);
            v22 += 8;
            *(__m128i *)(a2 + 8 * v27) = _mm_add_epi64(
                                           _mm_unpacklo_epi32(
                                             _mm_add_epi32(
                                               _mm_slli_epi32(_mm_add_epi32(_mm_shuffle_epi32(v28, 0), v26), 0xCu),
                                               _mm_move_epi64(si128)),
                                             (__m128i)0LL),
                                           v14);
            *(__m128i *)(a2 + 8LL * (v25 - 2)) = _mm_add_epi64(
                                                   _mm_unpacklo_epi32(
                                                     _mm_add_epi32(
                                                       _mm_slli_epi32(
                                                         _mm_add_epi32(
                                                           _mm_shuffle_epi32(_mm_cvtsi32_si128(v25 - 2), 0),
                                                           v26),
                                                         0xCu),
                                                       _mm_move_epi64(si128)),
                                                     (__m128i)0LL),
                                                   v14);
            *(__m128i *)(a2 + 8LL * v25) = _mm_add_epi64(
                                             _mm_unpacklo_epi32(
                                               _mm_add_epi32(
                                                 _mm_slli_epi32(
                                                   _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v25), 0), v26),
                                                   0xCu),
                                                 _mm_move_epi64(si128)),
                                               (__m128i)0LL),
                                             v14);
            v29 = v25 + 2;
            v25 += 8;
            *(__m128i *)(a2 + 8 * v29) = _mm_add_epi64(
                                           _mm_unpacklo_epi32(
                                             _mm_add_epi32(
                                               _mm_slli_epi32(
                                                 _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v29), 0), v26),
                                                 0xCu),
                                               _mm_move_epi64(si128)),
                                             (__m128i)0LL),
                                           v14);
          }
          while ( v22 < (v23 & 0xFFFFFFF8) );
          if ( v22 < v23 )
          {
LABEL_22:
            v30 = a2 + 8LL * v22;
            do
            {
              ++v22;
              v30 += 8LL;
              *(_QWORD *)(v30 - 8) = v9 + (v22 << 12);
            }
            while ( v22 < v23 );
          }
        }
        PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, a2, &v31);
      }
      *(_QWORD *)(a2 + 4128) = PhysicalAddress;
    }
    else
    {
      *(_QWORD *)(a2 + 4128) = 0LL;
    }
  }
  *(_WORD *)(a2 + 4142) = a8;
  result = *(unsigned __int8 *)(v11 + 261);
  if ( (result & 4) != 0 )
  {
    v18 = a7;
    *(_DWORD *)(a2 + 4138) = (v12 >> 2) - 1;
    result = (unsigned int)v18 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4148) = HIDWORD(v18);
    *(_DWORD *)(a2 + 4144) = result;
  }
  return result;
}

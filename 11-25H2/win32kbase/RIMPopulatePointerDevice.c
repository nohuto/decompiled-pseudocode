/*
 * XREFs of RIMPopulatePointerDevice @ 0x1401E1634
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1401555B0 (RIMComputeSpecificHighMetricValue.c)
 *     RIMIsInputUsagePresent @ 0x140160C3C (RIMIsInputUsagePresent.c)
 *     RIMCheckPressureUsageStatus @ 0x14017FB54 (RIMCheckPressureUsageStatus.c)
 *     RIMIsEssentialUsage @ 0x140180360 (RIMIsEssentialUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetDeviceButtons @ 0x1401E3DF8 (RIMGetDeviceButtons.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1401EA7F0 (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMRetrieveNormalizationRange @ 0x1401F5964 (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 *v6; // r12
  struct _HIDP_PREPARSED_DATA *v7; // r13
  NTSTATUS SpecificValueCaps; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned __int16 *v16; // r13
  unsigned __int16 v17; // r12
  __int64 v18; // rdx
  int v19; // ecx
  __m128i v20; // xmm5
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  __m128i v24; // xmm5
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rdx
  int v33; // ecx
  unsigned int v34; // [rsp+48h] [rbp-59h]
  unsigned int v35; // [rsp+4Ch] [rbp-55h]
  unsigned int v36; // [rsp+50h] [rbp-51h]
  __int128 v37; // [rsp+68h] [rbp-39h] BYREF
  __int128 v38; // [rsp+78h] [rbp-29h]
  __int128 v39; // [rsp+88h] [rbp-19h]
  __m128i v40; // [rsp+98h] [rbp-9h]
  __int64 v41; // [rsp+A8h] [rbp+7h]
  USHORT ValueCapsLength; // [rsp+110h] [rbp+6Fh] BYREF
  struct _HIDP_PREPARSED_DATA *v44; // [rsp+118h] [rbp+77h]
  unsigned __int16 *v45; // [rsp+120h] [rbp+7Fh]

  v45 = a4;
  v44 = a3;
  v4 = *(_DWORD *)(a2 + 368);
  v5 = 0;
  v36 = -1;
  v35 = -1;
  v6 = a4;
  ValueCapsLength = 0;
  v7 = a3;
  if ( (v4 & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 47);
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(a2 + 784), 0, 0LL, &ValueCapsLength, v7);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v10 = 6LL;
  v11 = (_DWORD *)(a2 + 32);
  do
  {
    *v11 = -1;
    v11 += 4;
    --v10;
  }
  while ( v10 );
  ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * ValueCapsLength, 0x6A6E6952u);
  if ( !ValueCaps )
    return 0LL;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(a2 + 784), 0, ValueCaps, &ValueCapsLength, v7) >= 0 )
  {
    v14 = 0;
    v15 = 0;
    v34 = 0;
    if ( ValueCapsLength )
    {
      v16 = v45;
      do
      {
        if ( v15 >= 6 )
          break;
        v17 = *v16;
        if ( *v16 == 2 )
          v17 = 1;
        if ( (unsigned int)RIMIsEssentialUsage(ValueCaps[v14].UsagePage, ValueCaps[v14].Range.UsageMin, v17) )
        {
          v18 = 60LL * v34;
          *(_WORD *)(v18 + a2 + 408) = ValueCaps[v14].UsagePage;
          *(_WORD *)(60 * (v34 + 7LL) + a2) = ValueCaps[v14].Range.UsageMin;
          *(_DWORD *)(v18 + a2 + 412) = ValueCaps[v14].ReportID;
          *(_WORD *)(v18 + a2 + 418) = ValueCaps[v14].LinkUsagePage;
          *(_DWORD *)(v18 + a2 + 424) = ValueCaps[v14].HasNull;
          *(_DWORD *)(v18 + a2 + 440) = ValueCaps[v14].LogicalMin;
          *(_DWORD *)(v18 + a2 + 444) = ValueCaps[v14].LogicalMax;
          *(_DWORD *)(v18 + a2 + 448) = ValueCaps[v14].PhysicalMin;
          *(_DWORD *)(v18 + a2 + 452) = ValueCaps[v14].PhysicalMax;
          *(_WORD *)(v18 + a2 + 464) = ValueCaps[v14].BitSize;
          v19 = *(_DWORD *)(a2 + 364);
          if ( v19 == 3 || (*(_DWORD *)(a2 + 368) & 8) != 0 && v19 == 2 )
          {
            if ( ValueCaps[v14].Range.UsageMin == 48 && ValueCaps[v14].UsagePage == 1 )
            {
              v20 = *(__m128i *)&ValueCaps[v14].PhysicalMin;
              v36 = v14;
              v21 = *(_OWORD *)&ValueCaps[v14].UsagePage;
              v22 = *(_OWORD *)&ValueCaps[v14].HasNull;
              v23 = *(_OWORD *)&ValueCaps[v14].UnitsExp;
              v41 = *(_QWORD *)&ValueCaps[v14].NotRange.DesignatorIndex;
              v37 = v21;
              v38 = v22;
              v39 = v23;
              v40 = v20;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) - _mm_cvtsi128_si32(v20),
                                        (__int64)&v37)
                                    + 1;
              *(_DWORD *)(a2 + 124) = ValueCaps[v14].LogicalMin;
              *(_DWORD *)(a2 + 132) = ValueCaps[v14].LogicalMax + 1;
            }
            if ( ValueCaps[v14].Range.UsageMin == 49 && ValueCaps[v14].UsagePage == 1 )
            {
              v24 = *(__m128i *)&ValueCaps[v14].PhysicalMin;
              v35 = v14;
              v25 = *(_OWORD *)&ValueCaps[v14].UsagePage;
              v26 = *(_OWORD *)&ValueCaps[v14].HasNull;
              v27 = *(_OWORD *)&ValueCaps[v14].UnitsExp;
              v41 = *(_QWORD *)&ValueCaps[v14].NotRange.DesignatorIndex;
              v37 = v25;
              v38 = v26;
              v39 = v27;
              v40 = v24;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        _mm_cvtsi128_si32(_mm_srli_si128(v24, 4)) - _mm_cvtsi128_si32(v24),
                                        (__int64)&v37)
                                    + 1;
              *(_DWORD *)(a2 + 128) = ValueCaps[v14].LogicalMin;
              *(_DWORD *)(a2 + 136) = ValueCaps[v14].LogicalMax + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, ValueCaps[v14].UsagePage, ValueCaps[v14].Range.UsageMin, v17);
          v28 = 16LL * v34;
          *(_DWORD *)(a2 + 16 * (v34 + 2LL)) = v34;
          *(_WORD *)(v28 + a2 + 28) = ValueCaps[v14].UsagePage;
          *(_WORD *)(v28 + a2 + 30) = ValueCaps[v14].Range.UsageMin;
          LODWORD(v28) = ValueCaps[v14].Range.UsageMin;
          v29 = *(_OWORD *)&ValueCaps[v14].HasNull;
          v37 = *(_OWORD *)&ValueCaps[v14].UsagePage;
          v30 = *(_OWORD *)&ValueCaps[v14].UnitsExp;
          v38 = v29;
          v31 = *(__m128i *)&ValueCaps[v14].PhysicalMin;
          v39 = v30;
          v41 = *(_QWORD *)&ValueCaps[v14].NotRange.DesignatorIndex;
          v40 = v31;
          RIMRetrieveNormalizationRange((unsigned __int16)v37, v28, v17, (unsigned int)&v37, a2 + 16LL * v34 + 36);
          v15 = ++v34;
        }
        else
        {
          v15 = v34;
        }
        ++v14;
      }
      while ( v14 < ValueCapsLength );
      v7 = v44;
      v6 = v45;
    }
    if ( v6[1] == 13 && *v6 == 2 && RIMIsInputUsagePresent(v7, 2LL, 0x5Bu) && RIMIsInputUsagePresent(v7, v32, 0x91u) )
      *(_DWORD *)(a2 + 368) |= 0x8000u;
    v33 = *(_DWORD *)(a2 + 364);
    *(_DWORD *)(a2 + 780) = v15;
    if ( (v33 != 3 && ((*(_DWORD *)(a2 + 368) & 8) == 0 || v33 != 2)
       || (int)RIMIDEValidateLogicalDeviceSize(a2, v36, v35) >= 0)
      && (int)RIMGetDeviceButtons(a1, a2, v7, v6) >= 0 )
    {
      v5 = 1;
    }
  }
  GreDeleteFastMutex((char *)ValueCaps);
  return v5;
}

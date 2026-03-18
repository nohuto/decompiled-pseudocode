/*
 * XREFs of RIMPopulatePointerDevice @ 0x14016A024
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMIsEssentialUsage @ 0x14016A53C (RIMIsEssentialUsage.c)
 *     RIMRetrieveNormalizationRange @ 0x14016A7E8 (RIMRetrieveNormalizationRange.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x14016A974 (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x140192F2C (RIMComputeSpecificHighMetricValue.c)
 *     RIMIsInputUsagePresent @ 0x1401A5CA8 (RIMIsInputUsagePresent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCheckPressureUsageStatus @ 0x1401B4BE8 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 *v6; // r13
  struct _HIDP_PREPARSED_DATA *v7; // r12
  NTSTATUS SpecificValueCaps; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned __int16 *v18; // r12
  unsigned __int16 v19; // r13
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __m128i v25; // xmm1
  int v26; // ecx
  __m128i v28; // xmm5
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __m128i v32; // xmm5
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  unsigned int v36; // [rsp+48h] [rbp-59h]
  unsigned int v37; // [rsp+4Ch] [rbp-55h]
  unsigned int v38; // [rsp+50h] [rbp-51h]
  __int128 v39; // [rsp+68h] [rbp-39h] BYREF
  __int128 v40; // [rsp+78h] [rbp-29h]
  __int128 v41; // [rsp+88h] [rbp-19h]
  __m128i v42; // [rsp+98h] [rbp-9h]
  __int64 v43; // [rsp+A8h] [rbp+7h]
  USHORT ValueCapsLength; // [rsp+110h] [rbp+6Fh] BYREF
  struct _HIDP_PREPARSED_DATA *v46; // [rsp+118h] [rbp+77h]
  unsigned __int16 *v47; // [rsp+120h] [rbp+7Fh]

  v47 = a4;
  v46 = a3;
  v4 = *(_DWORD *)(a2 + 368);
  v5 = 0;
  v38 = -1;
  v37 = -1;
  v6 = a4;
  ValueCapsLength = 0;
  v7 = a3;
  if ( (v4 & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
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
    v16 = 0;
    v17 = 0;
    v36 = 0;
    if ( ValueCapsLength )
    {
      v18 = v47;
      do
      {
        if ( v17 >= 6 )
          break;
        v19 = *v18;
        if ( *v18 == 2 )
          v19 = 1;
        if ( (unsigned int)RIMIsEssentialUsage(ValueCaps[v16].UsagePage, ValueCaps[v16].Range.UsageMin, v19) )
        {
          v20 = 60LL * v36;
          *(_WORD *)(v20 + a2 + 408) = ValueCaps[v16].UsagePage;
          *(_WORD *)(60 * (v36 + 7LL) + a2) = ValueCaps[v16].Range.UsageMin;
          *(_DWORD *)(v20 + a2 + 412) = ValueCaps[v16].ReportID;
          *(_WORD *)(v20 + a2 + 418) = ValueCaps[v16].LinkUsagePage;
          *(_DWORD *)(v20 + a2 + 424) = ValueCaps[v16].HasNull;
          *(_DWORD *)(v20 + a2 + 440) = ValueCaps[v16].LogicalMin;
          *(_DWORD *)(v20 + a2 + 444) = ValueCaps[v16].LogicalMax;
          *(_DWORD *)(v20 + a2 + 448) = ValueCaps[v16].PhysicalMin;
          *(_DWORD *)(v20 + a2 + 452) = ValueCaps[v16].PhysicalMax;
          *(_WORD *)(v20 + a2 + 464) = ValueCaps[v16].BitSize;
          v21 = *(_DWORD *)(a2 + 364);
          if ( v21 == 3 || (*(_DWORD *)(a2 + 368) & 8) != 0 && v21 == 2 )
          {
            if ( ValueCaps[v16].Range.UsageMin == 48 && ValueCaps[v16].UsagePage == 1 )
            {
              v28 = *(__m128i *)&ValueCaps[v16].PhysicalMin;
              v38 = v16;
              v29 = *(_OWORD *)&ValueCaps[v16].UsagePage;
              v30 = *(_OWORD *)&ValueCaps[v16].HasNull;
              v31 = *(_OWORD *)&ValueCaps[v16].UnitsExp;
              v43 = *(_QWORD *)&ValueCaps[v16].NotRange.DesignatorIndex;
              v39 = v29;
              v40 = v30;
              v41 = v31;
              v42 = v28;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v28, 4)) - _mm_cvtsi128_si32(v28)),
                                        &v39)
                                    + 1;
              *(_DWORD *)(a2 + 124) = ValueCaps[v16].LogicalMin;
              *(_DWORD *)(a2 + 132) = ValueCaps[v16].LogicalMax + 1;
            }
            if ( ValueCaps[v16].Range.UsageMin == 49 && ValueCaps[v16].UsagePage == 1 )
            {
              v32 = *(__m128i *)&ValueCaps[v16].PhysicalMin;
              v37 = v16;
              v33 = *(_OWORD *)&ValueCaps[v16].UsagePage;
              v34 = *(_OWORD *)&ValueCaps[v16].HasNull;
              v35 = *(_OWORD *)&ValueCaps[v16].UnitsExp;
              v43 = *(_QWORD *)&ValueCaps[v16].NotRange.DesignatorIndex;
              v39 = v33;
              v40 = v34;
              v41 = v35;
              v42 = v32;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v32, 4)) - _mm_cvtsi128_si32(v32)),
                                        &v39)
                                    + 1;
              *(_DWORD *)(a2 + 128) = ValueCaps[v16].LogicalMin;
              *(_DWORD *)(a2 + 136) = ValueCaps[v16].LogicalMax + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, ValueCaps[v16].UsagePage, ValueCaps[v16].Range.UsageMin, v19);
          v22 = 16LL * v36;
          *(_DWORD *)(a2 + 16 * (v36 + 2LL)) = v36;
          *(_WORD *)(v22 + a2 + 28) = ValueCaps[v16].UsagePage;
          *(_WORD *)(v22 + a2 + 30) = ValueCaps[v16].Range.UsageMin;
          LODWORD(v22) = ValueCaps[v16].Range.UsageMin;
          v23 = *(_OWORD *)&ValueCaps[v16].HasNull;
          v39 = *(_OWORD *)&ValueCaps[v16].UsagePage;
          v24 = *(_OWORD *)&ValueCaps[v16].UnitsExp;
          v40 = v23;
          v25 = *(__m128i *)&ValueCaps[v16].PhysicalMin;
          v41 = v24;
          v43 = *(_QWORD *)&ValueCaps[v16].NotRange.DesignatorIndex;
          v42 = v25;
          RIMRetrieveNormalizationRange((unsigned __int16)v39, v22, v19, (unsigned int)&v39, a2 + 16LL * v36 + 36);
          v17 = ++v36;
        }
        else
        {
          v17 = v36;
        }
        ++v16;
      }
      while ( v16 < ValueCapsLength );
      v7 = v46;
      v6 = v47;
    }
    if ( v6[1] == 13 && *v6 == 2 && (unsigned int)RIMIsInputUsagePresent(v7) && (unsigned int)RIMIsInputUsagePresent(v7) )
      *(_DWORD *)(a2 + 368) |= 0x8000u;
    v26 = *(_DWORD *)(a2 + 364);
    *(_DWORD *)(a2 + 780) = v17;
    if ( (v26 != 3 && ((*(_DWORD *)(a2 + 368) & 8) == 0 || v26 != 2)
       || (int)RIMIDEValidateLogicalDeviceSize(a2, v38, v37) >= 0)
      && (int)RIMGetDeviceButtons(a1, a2, v7, v6) >= 0 )
    {
      v5 = 1;
    }
  }
  GreDeleteFastMutex((char *)ValueCaps, v13, v14, v15);
  return v5;
}

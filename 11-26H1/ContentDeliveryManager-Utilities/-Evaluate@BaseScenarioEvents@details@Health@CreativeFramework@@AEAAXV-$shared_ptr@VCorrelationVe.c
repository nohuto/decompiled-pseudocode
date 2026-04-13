/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F91C
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180048734 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003BCB0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18004819C (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReadInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x1800482EC (--$ReadInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@.c)
 *     ??$ReadInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthTrackingInfo@123@AEA_N2PEBG@Z @ 0x180048390 (--$ReadInfo@UHealthTrackingInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@He.c)
 *     ??$ReadInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x180048434 (--$ReadInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180048544 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18004863C (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ??$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x180048ECC (--$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA?AW4HealthEvaluationResult@234@W45234@@Z @ 0x180057710 (-ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA-AW4H.c)
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800598E0 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int16 v6; // bx
  __int16 v7; // si
  _QWORD *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rbx
  const wchar_t *v11; // rax
  __int16 v12; // r9
  HKEY v13; // r8
  __int64 v14; // rax
  char v15; // dl
  _BYTE *v16; // r12
  _QWORD *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  std::_Ref_count_base *v22; // rcx
  int v23; // [rsp+30h] [rbp-D0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v25; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-A0h]
  _QWORD *v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-78h]
  _QWORD v32[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v34[512]; // [rsp+B0h] [rbp-50h] BYREF

  v25 = (const wchar_t *)a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::HealthTrackingInfo>(
    a1,
    (_DWORD *)(a1 + 8),
    (void *)(a1 + 16),
    (_BYTE *)(a1 + 249),
    (_BYTE *)(a1 + 250));
  CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
    a1,
    (_DWORD *)(a1 + 104),
    (_OWORD *)(a1 + 112),
    (_BYTE *)(a1 + 251),
    (_BYTE *)(a1 + 252));
  CreativeFramework::Health::details::BaseScenarioEvents::ReadInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
    a1,
    (_DWORD *)(a1 + 144),
    (_OWORD *)(a1 + 152),
    (_BYTE *)(a1 + 253),
    (_BYTE *)(a1 + 254));
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v28 = *(_QWORD *)(a1 + 152);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  if ( (v5 & 2) != 0 )
    v6 = 2;
  else
    v6 = (v5 & 1) != 0;
  v7 = CreativeFramework::Health::details::BaseScenarioEvents::ResolveHealthResultWithTolerance(a1, v6);
  CreativeFramework::Health::details::HealthTrackingInfo::ToString(a1 + 16, v32);
  v23 = *(_DWORD *)(a1 + 136);
  StringCchPrintfW(
    v34,
    0x200uLL,
    (size_t *)L"{ %llu; %llu; %llu; %u }",
    *(_QWORD *)(a1 + 112),
    *(_QWORD *)(a1 + 120),
    *(_QWORD *)(a1 + 128),
    v23);
  std::wstring::wstring((__int64)v30);
  v8 = v30;
  if ( v31 >= 8 )
    v8 = (_QWORD *)v30[0];
  v29 = v8;
  v9 = (const wchar_t *)v32;
  if ( v33 >= 8 )
    v9 = (const wchar_t *)v32[0];
  v26 = v9;
  v27 = v5;
  LOWORD(SystemTimeAsFileTime.dwLowDateTime) = v7;
  v10 = (const wchar_t *)(a1 + 184);
  if ( *(_QWORD *)(a1 + 208) < 8uLL )
    v11 = (const wchar_t *)(a1 + 184);
  else
    v11 = *(const wchar_t **)v10;
  v25 = v11;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    &v25,
    (__int16 *)&SystemTimeAsFileTime,
    &v27);
  v12 = *(_WORD *)(a1 + 160);
  v13 = (HKEY)(a1 + 177);
  if ( *(_QWORD *)(a1 + 152) <= *(_QWORD *)(a1 + 168) || *(_BYTE *)v13 )
    v14 = 1LL;
  else
    v14 = *(_BYTE *)v13;
  if ( v12 == v7
    && v28
    && (unsigned int)(v28 + 711573504 * v14)
     + (((unsigned int)v28 + 864000000000LL * v14 + (v28 & 0xFFFFFFFF00000000uLL)) & 0xFFFFFFFF00000000uLL) > v4 )
  {
    v16 = (_BYTE *)(a1 + 253);
  }
  else
  {
    *(_WORD *)(a1 + 160) = v7;
    *(_QWORD *)(a1 + 152) = v4;
    if ( v12 == v7 )
    {
      v15 = *(_BYTE *)v13 + 1;
      if ( *(_BYTE *)v13 == 0xFF )
        v15 = -1;
    }
    else
    {
      v15 = 1;
    }
    *(_BYTE *)v13 = v15;
    v16 = (_BYTE *)(a1 + 253);
    *(_BYTE *)(a1 + 253) = 1;
    v17 = v30;
    v27 = v5;
    LOWORD(SystemTimeAsFileTime.dwLowDateTime) = v7;
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( v31 >= 8 )
        v17 = (_QWORD *)v30[0];
      v28 = (unsigned __int64)v17;
      v18 = (const wchar_t *)v32;
      if ( v33 >= 8 )
        v18 = (const wchar_t *)v32[0];
      v25 = v18;
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v10 = *(const wchar_t **)v10;
      v26 = v10;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        &v26,
        (__int16 *)&SystemTimeAsFileTime,
        &v27);
    }
    else
    {
      if ( v31 >= 8 )
        v17 = (_QWORD *)v30[0];
      v28 = (unsigned __int64)v17;
      v19 = (const wchar_t *)v32;
      if ( v33 >= 8 )
        v19 = (const wchar_t *)v32[0];
      v25 = v19;
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v10 = *(const wchar_t **)v10;
      v26 = v10;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        &v26,
        (__int16 *)&SystemTimeAsFileTime,
        &v27);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
    a1,
    (const BYTE *)(a1 + 144),
    v13,
    v16,
    (_BYTE *)(a1 + 254));
  LOBYTE(v20) = 1;
  std::wstring::_Tidy(v30, v20, 0LL);
  LOBYTE(v21) = 1;
  std::wstring::_Tidy(v32, v21, 0LL);
  v22 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
}

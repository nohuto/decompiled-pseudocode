/*
 * XREFs of PopCalculateCsSummary @ 0x140422F4C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x140423CBC (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopBatteryCapacityToRate @ 0x140510144 (PopBatteryCapacityToRate.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     PopCalculateTotalHwDripsResidencyV0 @ 0x14053547C (PopCalculateTotalHwDripsResidencyV0.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x140B23970 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x140B48578 (PopQueryInputSuppressionCount.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140B4B700 (PopQueryPowerButtonSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  int v4; // r12d
  int v5; // eax
  int v6; // ecx
  LARGE_INTEGER InterruptTimePrecise; // rbx
  unsigned __int64 v8; // rsi
  unsigned int EnergyDrainFromDischage; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // r8
  int v17; // eax
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  LONGLONG v25; // rbx
  KIRQL v26; // al
  int v27; // ebx
  char v28; // r10
  int v29; // ecx
  __int128 v30; // xmm0
  char v31; // al
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  int v35; // edx
  KIRQL v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v41; // [rsp+20h] [rbp-A9h]
  __int64 v42; // [rsp+28h] [rbp-A1h]
  __int64 v43; // [rsp+30h] [rbp-99h]
  int v44; // [rsp+38h] [rbp-91h]
  int v45; // [rsp+3Ch] [rbp-8Dh]
  int v46; // [rsp+40h] [rbp-89h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-81h] BYREF
  __int128 v48; // [rsp+50h] [rbp-79h] BYREF
  __int128 v49; // [rsp+60h] [rbp-69h] BYREF
  __int128 v50; // [rsp+70h] [rbp-59h]
  __int64 v51; // [rsp+80h] [rbp-49h]
  unsigned __int64 v52; // [rsp+88h] [rbp-41h]
  unsigned __int64 v53; // [rsp+90h] [rbp-39h]
  __int64 v54; // [rsp+98h] [rbp-31h]
  __int64 v55; // [rsp+A0h] [rbp-29h]
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int64 v57; // [rsp+B0h] [rbp-19h]
  __int128 v58; // [rsp+B8h] [rbp-11h] BYREF
  int v59; // [rsp+130h] [rbp+67h]
  int v60; // [rsp+138h] [rbp+6Fh] BYREF
  int v61; // [rsp+140h] [rbp+77h]
  int v62; // [rsp+148h] [rbp+7Fh]

  DWORD2(v48) = 0;
  *(_QWORD *)&v48 = 0LL;
  v51 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v58 = 0LL;
  v4 = 0;
  v40 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  PopCalculateIdleInformation(&v49);
  v5 = ((__int64 (*)(void))Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline)();
  v6 = 0;
  if ( v5 )
    v6 = v51;
  v46 = v6;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v8 = (InterruptTimePrecise.QuadPart - qword_140E27088) / 0xAuLL;
  PopCurrentPowerState(&v58);
  if ( v8 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v58));
    v59 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v8);
  }
  else
  {
    v59 = 0;
  }
  v10 = PopMeasureEnergyChange(&v48, &CsSessionEnergyCounter);
  v62 = HIDWORD(xmmword_140F10688);
  if ( HIDWORD(xmmword_140F10688) )
  {
    v11 = (unsigned int)(100 * xmmword_140F10698) % HIDWORD(xmmword_140F10688);
    LODWORD(v10) = (unsigned int)(100 * xmmword_140F10698) / HIDWORD(xmmword_140F10688);
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v12 = 0LL;
  v61 = v10;
  if ( (xmmword_140F10688 & 0x40000000) == 0 )
    v12 = (unsigned int)xmmword_140F10698;
  v44 = v12;
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v12, v11) )
  {
    v14 = qword_140E27090;
    if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)qword_140E27090 )
    {
      v15 = 0LL;
      v4 = 4;
    }
    else
    {
      v15 = *((_QWORD *)&v49 + 1) - qword_140E27090;
      v4 = (v8 < *((_QWORD *)&v49 + 1) - qword_140E27090) + 1;
    }
  }
  else
  {
    v15 = *((_QWORD *)&v49 + 1) - qword_140E27090;
  }
  v45 = DWORD2(v50) - dword_140E270A0;
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v14, v13) )
  {
    v43 = -1LL;
    if ( qword_140E27128 == -1 || (_QWORD)v50 == -1LL )
    {
      v17 = 128;
    }
    else if ( (unsigned __int64)v50 < qword_140E27128 )
    {
      v43 = 0LL;
      v17 = 64;
    }
    else
    {
      v16 = v8;
      v17 = v8 < (__int64)v50 - qword_140E27128 ? 32 : 16;
      if ( (__int64)v50 - qword_140E27128 <= v8 )
        v16 = v50 - qword_140E27128;
      v43 = v16;
    }
    v4 |= v17;
  }
  else
  {
    v43 = PopCalculateTotalHwDripsResidencyV0(qword_140E27128, v50, v8);
  }
  *((_QWORD *)&v18 + 1) = (KiAccumulatedDeepSleepTimerRebasing - qword_140E270A8) / 0xAuLL;
  v57 = *((_QWORD *)&v18 + 1);
  v52 = v8 + qword_140E27098 - v49;
  v19 = _InterlockedExchangeAdd64(&qword_140E27200, 0LL);
  if ( v19 )
  {
    v18 = (v19 - qword_140E27088) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    v19 = (v19 - qword_140E27088) / 0xA;
  }
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(
                       KiAccumulatedDeepSleepTimerRebasing - qword_140E270A8,
                       *((_QWORD *)&v18 + 1)) )
  {
    v20 = PpmConvertTimeTo(qword_140E270C8, 1000000LL);
    v40 = v20;
  }
  else
  {
    v20 = qword_140E270C8;
  }
  v42 = v20 - PpmConvertTimeTo(qword_140E270B8, 1000000LL);
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v22, v21) )
    v23 = v8 - v40;
  else
    v23 = v8 - qword_140E270C8;
  v24 = qword_140E270D8;
  v41 = v23;
  if ( qword_140E270D0 )
  {
    if ( qword_140E27088 <= (unsigned __int64)qword_140E270D0 )
      v25 = InterruptTimePrecise.QuadPart - qword_140E270D0;
    else
      v25 = InterruptTimePrecise.QuadPart - qword_140E27088;
    v24 = v25 + qword_140E270D8;
  }
  v53 = v24 / 0xA;
  v54 = PpmConvertTimeTo(qword_140E270E8, 1000000LL);
  v55 = PpmConvertTimeTo(qword_140E270F8, 1000000LL);
  v56 = PpmConvertTimeTo(qword_140E27110, 1000000LL);
  v26 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v27 = dword_140E0B8E0;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v26);
  v60 = 0;
  PopQueryInputSuppressionCount(&v60);
  v60 = 0;
  PopQueryPowerButtonSuppressionCount(&v60);
  v29 = v60 - dword_140E27194;
  v30 = v48;
  *(_DWORD *)a1 = v59;
  *(_DWORD *)(a1 + 24) = v62;
  *(_DWORD *)(a1 + 28) = v44;
  *(_QWORD *)(a1 + 48) = v52;
  *(_DWORD *)(a1 + 56) = v45;
  *(_QWORD *)(a1 + 72) = v42;
  *(_QWORD *)(a1 + 88) = v53;
  *(_QWORD *)(a1 + 96) = v54;
  *(_QWORD *)(a1 + 104) = v55;
  *(_QWORD *)(a1 + 392) = v56;
  *(_QWORD *)(a1 + 80) = v41;
  *(_QWORD *)(a1 + 144) = v43;
  *(_OWORD *)(a1 + 8) = v30;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v15;
  *(_QWORD *)(a1 + 64) = v19;
  *(_DWORD *)(a1 + 128) = v27;
  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 120) = dword_140E270A4;
  *(_QWORD *)(a1 + 112) = v57;
  v31 = 2 * v61;
  *(_QWORD *)(a1 + 152) = v32;
  *(_QWORD *)(a1 + 160) = v33;
  *(_BYTE *)(a1 + 136) = v31 | v28 & 1;
  *(_BYTE *)(a1 + 137) = HIBYTE(word_140E27158);
  *(_DWORD *)(a1 + 176) = dword_140E27140;
  *(_DWORD *)(a1 + 180) = dword_140E27144;
  *(_BYTE *)(a1 + 184) = byte_140E27148;
  *(_DWORD *)(a1 + 188) = dword_140E2714C;
  *(_DWORD *)(a1 + 192) = dword_140E27150;
  *(_DWORD *)(a1 + 196) = dword_140E27154;
  *(_DWORD *)(a1 + 200) = dword_140E2715C;
  *(_DWORD *)(a1 + 204) = dword_140E27160;
  *(_BYTE *)(a1 + 208) = byte_140E27164;
  *(_DWORD *)(a1 + 212) = HIDWORD(v58);
  *(_DWORD *)(a1 + 216) = DWORD2(v58);
  *(_BYTE *)(a1 + 224) = byte_140E2716C;
  *(_BYTE *)(a1 + 225) = byte_140E2716D;
  *(_DWORD *)(a1 + 228) = dword_140E27170;
  v34 = dword_140E27174;
  *(_DWORD *)(a1 + 344) = v29;
  *(_DWORD *)(a1 + 232) = v34;
  *(_DWORD *)(a1 + 240) = v35;
  *(_QWORD *)(a1 + 248) = qword_140E27118;
  *(_QWORD *)(a1 + 256) = qword_140E27120;
  *(_DWORD *)(a1 + 236) = dword_140E27198;
  *(_DWORD *)(a1 + 348) = dword_140E2719C;
  *(_DWORD *)(a1 + 352) = dword_140E271A0;
  *(_QWORD *)(a1 + 360) = qword_140E271A8;
  *(_DWORD *)(a1 + 368) = dword_140E271B0;
  *(_QWORD *)(a1 + 376) = qword_140E271B8;
  *(_DWORD *)(a1 + 384) = dword_140E271C0;
  v36 = KeAcquireSpinLockRaiseToDpc(&qword_140F10278);
  *(_QWORD *)(a1 + 272) = qword_140F10268;
  *(_QWORD *)(a1 + 264) = qword_140F10270;
  *(_QWORD *)(a1 + 280) = PopDisplayOnPerformance;
  KeReleaseSpinLock(&qword_140F10278, v36);
  result = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v38, v37);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 488) = v46 - dword_140E271D0;
    *(_QWORD *)(a1 + 472) = qword_140E271C8;
    *(LARGE_INTEGER *)(a1 + 480) = PerformanceCounter;
    *(_DWORD *)(a1 + 448) = v4;
    *(_QWORD *)(a1 + 456) = qword_140E27090;
    result = *((_QWORD *)&v49 + 1);
    *(_QWORD *)(a1 + 464) = *((_QWORD *)&v49 + 1);
  }
  return result;
}

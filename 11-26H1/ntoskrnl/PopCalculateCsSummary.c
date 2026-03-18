/*
 * XREFs of PopCalculateCsSummary @ 0x14042A4C8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x14042AB2C (PopBatteryGetEnergyDrainFromDischage.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopBatteryCapacityToRate @ 0x1405166D4 (PopBatteryCapacityToRate.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140526BA0 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     PopCalculateTotalHwDripsResidencyV0 @ 0x140532FFC (PopCalculateTotalHwDripsResidencyV0.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x140B21570 (PopMeasureEnergyChange.c)
 *     PopQueryInputSuppressionCount @ 0x140B46548 (PopQueryInputSuppressionCount.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140B49970 (PopQueryPowerButtonSuppressionCount.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  int v4; // r12d
  int v5; // eax
  int v6; // ecx
  __int64 InterruptTimePrecise; // rbx
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
  ULONGLONG v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  KIRQL v26; // al
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // r10
  int v34; // ecx
  __int128 v35; // xmm0
  char v36; // al
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  int v40; // edx
  KIRQL v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 result; // rax
  ULONGLONG v45; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v46; // [rsp+20h] [rbp-A9h]
  ULONGLONG v47; // [rsp+28h] [rbp-A1h]
  __int64 v48; // [rsp+30h] [rbp-99h]
  int v49; // [rsp+38h] [rbp-91h]
  int v50; // [rsp+3Ch] [rbp-8Dh]
  int v51; // [rsp+40h] [rbp-89h]
  unsigned __int64 v52; // [rsp+48h] [rbp-81h] BYREF
  __int128 v53; // [rsp+50h] [rbp-79h] BYREF
  __int128 v54; // [rsp+60h] [rbp-69h] BYREF
  __int128 v55; // [rsp+70h] [rbp-59h]
  __int64 v56; // [rsp+80h] [rbp-49h]
  unsigned __int64 v57; // [rsp+88h] [rbp-41h]
  unsigned __int64 v58; // [rsp+90h] [rbp-39h]
  ULONGLONG v59; // [rsp+98h] [rbp-31h]
  ULONGLONG v60; // [rsp+A0h] [rbp-29h]
  ULONGLONG v61; // [rsp+A8h] [rbp-21h]
  __int64 v62; // [rsp+B0h] [rbp-19h]
  __int128 v63; // [rsp+B8h] [rbp-11h] BYREF
  int v64; // [rsp+130h] [rbp+67h]
  int v65; // [rsp+138h] [rbp+6Fh] BYREF
  int v66; // [rsp+140h] [rbp+77h]
  int v67; // [rsp+148h] [rbp+7Fh]

  DWORD2(v53) = 0;
  *(_QWORD *)&v53 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v63 = 0LL;
  v4 = 0;
  v45 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  PopCalculateIdleInformation(&v54);
  v5 = ((__int64 (*)(void))Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline)();
  v6 = 0;
  if ( v5 )
    v6 = v56;
  v51 = v6;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v52);
  v8 = (InterruptTimePrecise - qword_140E26F48) / 0xAuLL;
  PopCurrentPowerState(&v63);
  if ( v8 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage((unsigned int)PopCsConsumption, HIDWORD(v63));
    v64 = PopBatteryCapacityToRate(EnergyDrainFromDischage, v8);
  }
  else
  {
    v64 = 0;
  }
  v10 = PopMeasureEnergyChange(&v53, &unk_140F0F5E0);
  v67 = HIDWORD(xmmword_140F0FEC8);
  if ( HIDWORD(xmmword_140F0FEC8) )
  {
    v11 = (unsigned int)(100 * xmmword_140F0FED8) % HIDWORD(xmmword_140F0FEC8);
    LODWORD(v10) = (unsigned int)(100 * xmmword_140F0FED8) / HIDWORD(xmmword_140F0FEC8);
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v12 = 0LL;
  v66 = v10;
  if ( (xmmword_140F0FEC8 & 0x40000000) == 0 )
    v12 = (unsigned int)xmmword_140F0FED8;
  v49 = v12;
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v12, v11) )
  {
    v14 = qword_140E26F50;
    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)qword_140E26F50 )
    {
      v15 = 0LL;
      v4 = 4;
    }
    else
    {
      v15 = *((_QWORD *)&v54 + 1) - qword_140E26F50;
      v4 = (v8 < *((_QWORD *)&v54 + 1) - qword_140E26F50) + 1;
    }
  }
  else
  {
    v15 = *((_QWORD *)&v54 + 1) - qword_140E26F50;
  }
  v50 = DWORD2(v55) - dword_140E26F60;
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v14, v13) )
  {
    v48 = -1LL;
    if ( qword_140E26FE8 == -1 || (_QWORD)v55 == -1LL )
    {
      v17 = 128;
    }
    else if ( (unsigned __int64)v55 < qword_140E26FE8 )
    {
      v48 = 0LL;
      v17 = 64;
    }
    else
    {
      v16 = v8;
      v17 = v8 < (__int64)v55 - qword_140E26FE8 ? 32 : 16;
      if ( (__int64)v55 - qword_140E26FE8 <= v8 )
        v16 = v55 - qword_140E26FE8;
      v48 = v16;
    }
    v4 |= v17;
  }
  else
  {
    v48 = PopCalculateTotalHwDripsResidencyV0(qword_140E26FE8, v55, v8);
  }
  *((_QWORD *)&v18 + 1) = (KiAccumulatedDeepSleepTimerRebasing - qword_140E26F68) / 0xAuLL;
  v62 = *((_QWORD *)&v18 + 1);
  v57 = v8 + qword_140E26F58 - v54;
  v19 = _InterlockedExchangeAdd64(&qword_140E270C0, 0LL);
  if ( v19 )
  {
    v18 = (v19 - qword_140E26F48) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    v19 = (v19 - qword_140E26F48) / 0xA;
  }
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(
                       KiAccumulatedDeepSleepTimerRebasing - qword_140E26F68,
                       *((_QWORD *)&v18 + 1)) )
  {
    v20 = PpmConvertTimeTo(qword_140E26F88, 0xF4240uLL);
    v45 = v20;
  }
  else
  {
    v20 = qword_140E26F88;
  }
  v47 = v20 - PpmConvertTimeTo(qword_140E26F78, 0xF4240uLL);
  if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v22, v21) )
    v23 = v8 - v45;
  else
    v23 = v8 - qword_140E26F88;
  v24 = qword_140E26F98;
  v46 = v23;
  if ( qword_140E26F90 )
  {
    if ( qword_140E26F48 <= (unsigned __int64)qword_140E26F90 )
      v25 = InterruptTimePrecise - qword_140E26F90;
    else
      v25 = InterruptTimePrecise - qword_140E26F48;
    v24 = v25 + qword_140E26F98;
  }
  v58 = v24 / 0xA;
  v59 = PpmConvertTimeTo(qword_140E26FA8, 0xF4240uLL);
  v60 = PpmConvertTimeTo(qword_140E26FB8, 0xF4240uLL);
  v61 = PpmConvertTimeTo(qword_140E26FD0, 0xF4240uLL);
  v26 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v27 = dword_140E0B8D0;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v26);
  v28 = 0LL;
  v29 = 0LL;
  if ( PpmPlatformStates && (unsigned int)dword_140E27100 < *(_DWORD *)PpmPlatformStates )
  {
    v30 = *(_QWORD *)(PpmPlatformStates + 48);
    v31 = 1032LL * (unsigned int)dword_140E27100;
    v28 = *(_QWORD *)(v31 + v30 + 104);
    v29 = *(_QWORD *)(v31 + v30 + 96);
  }
  v65 = 0;
  PopQueryInputSuppressionCount(&v65, PpmPlatformStates, v28 - qword_140E26FF0, v29 - qword_140E26FF8);
  v32 = (unsigned int)(v65 - dword_140E27050);
  v65 = 0;
  PopQueryPowerButtonSuppressionCount(&v65, v32);
  v34 = v65 - dword_140E27054;
  v35 = v53;
  *(_DWORD *)a1 = v64;
  *(_DWORD *)(a1 + 24) = v67;
  *(_DWORD *)(a1 + 28) = v49;
  *(_QWORD *)(a1 + 48) = v57;
  *(_DWORD *)(a1 + 56) = v50;
  *(_QWORD *)(a1 + 72) = v47;
  *(_QWORD *)(a1 + 88) = v58;
  *(_QWORD *)(a1 + 96) = v59;
  *(_QWORD *)(a1 + 104) = v60;
  *(_QWORD *)(a1 + 392) = v61;
  *(_QWORD *)(a1 + 80) = v46;
  *(_QWORD *)(a1 + 144) = v48;
  *(_OWORD *)(a1 + 8) = v35;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v15;
  *(_QWORD *)(a1 + 64) = v19;
  *(_DWORD *)(a1 + 128) = v27;
  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 120) = dword_140E26F64;
  *(_QWORD *)(a1 + 112) = v62;
  v36 = 2 * v66;
  *(_QWORD *)(a1 + 152) = v37;
  *(_QWORD *)(a1 + 160) = v38;
  *(_BYTE *)(a1 + 136) = v36 | v33 & 1;
  *(_BYTE *)(a1 + 137) = HIBYTE(word_140E27018);
  *(_DWORD *)(a1 + 176) = dword_140E27000;
  *(_DWORD *)(a1 + 180) = dword_140E27004;
  *(_BYTE *)(a1 + 184) = byte_140E27008;
  *(_DWORD *)(a1 + 188) = dword_140E2700C;
  *(_DWORD *)(a1 + 192) = dword_140E27010;
  *(_DWORD *)(a1 + 196) = dword_140E27014;
  *(_DWORD *)(a1 + 200) = dword_140E2701C;
  *(_DWORD *)(a1 + 204) = dword_140E27020;
  *(_BYTE *)(a1 + 208) = byte_140E27024;
  *(_DWORD *)(a1 + 212) = HIDWORD(v63);
  *(_DWORD *)(a1 + 216) = DWORD2(v63);
  *(_BYTE *)(a1 + 224) = byte_140E2702C;
  *(_BYTE *)(a1 + 225) = byte_140E2702D;
  *(_DWORD *)(a1 + 228) = dword_140E27030;
  v39 = dword_140E27034;
  *(_DWORD *)(a1 + 344) = v34;
  *(_DWORD *)(a1 + 232) = v39;
  *(_DWORD *)(a1 + 240) = v40;
  *(_QWORD *)(a1 + 248) = qword_140E26FD8;
  *(_QWORD *)(a1 + 256) = qword_140E26FE0;
  *(_DWORD *)(a1 + 236) = dword_140E27058;
  *(_DWORD *)(a1 + 348) = dword_140E2705C;
  *(_DWORD *)(a1 + 352) = dword_140E27060;
  *(_QWORD *)(a1 + 360) = qword_140E27068;
  *(_DWORD *)(a1 + 368) = dword_140E27070;
  *(_QWORD *)(a1 + 376) = qword_140E27078;
  *(_DWORD *)(a1 + 384) = dword_140E27080;
  v41 = KeAcquireSpinLockRaiseToDpc(&unk_140F10EF8);
  *(_QWORD *)(a1 + 272) = unk_140F10EE8;
  *(_QWORD *)(a1 + 264) = unk_140F10EF0;
  *(_QWORD *)(a1 + 280) = unk_140F10EE0;
  KeReleaseSpinLock(&unk_140F10EF8, v41);
  result = Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v43, v42);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 488) = v51 - dword_140E27090;
    *(_QWORD *)(a1 + 472) = qword_140E27088;
    *(_QWORD *)(a1 + 480) = v52;
    *(_DWORD *)(a1 + 448) = v4;
    *(_QWORD *)(a1 + 456) = qword_140E26F50;
    result = *((_QWORD *)&v54 + 1);
    *(_QWORD *)(a1 + 464) = *((_QWORD *)&v54 + 1);
  }
  return result;
}

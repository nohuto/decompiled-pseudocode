/*
 * XREFs of ACPIThermalWorker @ 0x1400C6DC0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x14002CD78 (WPP_RECORDER_SF_Dqssdddd.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x14003B044 (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x14003B65C (WPP_RECORDER_SF_dqssdddd.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x140040694 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x140045350 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalStopZoneWorker @ 0x14006A72C (ACPIThermalStopZoneWorker.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400A9848 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckPolicySupport @ 0x1400AA968 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalBuildConstraints @ 0x1400BAA20 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1400BAB98 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalGetParameter @ 0x1400C7DF4 (ACPIThermalGetParameter.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalReadTemperature @ 0x1400D0330 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  __int64 v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // r15
  union _LARGE_INTEGER v8; // rax
  __int64 v9; // r15
  int Parameter; // eax
  unsigned __int64 v11; // rcx
  union _LARGE_INTEGER v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // eax
  unsigned __int64 v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  PVOID v20; // r14
  union _LARGE_INTEGER v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 *v24; // rax
  __int64 v25; // r15
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rbx
  _WORD *v30; // rcx
  _WORD *v31; // rax
  __int64 v32; // r9
  __int16 v33; // dx
  int v34; // eax
  __int64 v35; // rcx
  PVOID v36; // rbx
  union _LARGE_INTEGER v37; // rax
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp-78h] BYREF
  union _LARGE_INTEGER v41; // [rsp+98h] [rbp-70h]
  __int64 OverrideHandle; // [rsp+A0h] [rbp-68h]
  unsigned int v43; // [rsp+A8h] [rbp-60h] BYREF
  int v44; // [rsp+ACh] [rbp-5Ch]
  PVOID v45; // [rsp+B0h] [rbp-58h] BYREF
  PVOID P; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v47[10]; // [rsp+C0h] [rbp-48h] BYREF
  int v48; // [rsp+E8h] [rbp-20h]
  union _LARGE_INTEGER Interval; // [rsp+F0h] [rbp-18h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v51; // [rsp+108h] [rbp+0h] BYREF
  __int128 v52; // [rsp+118h] [rbp+10h]
  __int128 v53; // [rsp+128h] [rbp+20h]

  v44 = a2;
  Interval.QuadPart = 0LL;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  v45 = 0LL;
  v2 = a2;
  v43 = 0;
  P = 0LL;
  v39 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  result = MEMORY[0xFFFFF78000000008];
  v41.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x8000000) != 0 )
    return result;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(__int64 **)(a1 + 760);
  v48 = v2 & 0x202;
  if ( (v2 & 0x202) != 0 )
    IoCancelIrp(*(PIRP *)(v5 + 208));
  if ( (v2 & 0x10) != 0 )
  {
    qmemcpy(v47, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v47));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v22 = ACPIThermalCheckNativeTemperatureSupport(a1);
    v23 = 0;
    *(_DWORD *)(v5 + 100) = 1;
    *(_BYTE *)(v5 + 274) = v22 >= 0;
    do
    {
      v24 = AMLIGetNamedChild(v6, v47[v23]);
      v25 = (__int64)v24;
      if ( !v24 )
        break;
      ACPIThermalBuildConstraints(v24, a1, 0, v23);
      AMLIDereferenceHandleEx(v25);
      ++v23;
    }
    while ( v23 < 0xA );
    v26 = AMLIGetNamedChild(v6, 1280528479);
    v2 = v44;
    v27 = (__int64)v26;
    if ( v26 )
    {
      ACPIThermalBuildConstraints(v26, a1, 1, 1u);
      AMLIDereferenceHandleEx(v27);
      *(_BYTE *)(v5 + 33) = 1;
    }
    v28 = AMLIGetNamedChild(v6, 1146770527);
    v29 = (__int64)v28;
    if ( v28 )
    {
      ACPIThermalBuildConstraints(v28, a1, 1, 0);
      AMLIDereferenceHandleEx(v29);
      *(_BYTE *)(v5 + 33) = 1;
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    if ( (int)ACPIGet(a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&v45, (__int64)&v43) >= 0 )
    {
      if ( v43 <= 2 || (v43 & 1) != 0 )
        goto LABEL_72;
      v30 = v45;
      if ( *((_WORD *)v45 + ((unsigned __int64)v43 >> 1) - 1) )
        goto LABEL_73;
      *(_OWORD *)(v5 + 304) = 0LL;
      if ( !v30 )
        goto LABEL_71;
      v31 = v30;
      v32 = 0x7FFFLL;
      do
      {
        if ( !*v31 )
          break;
        ++v31;
        --v32;
      }
      while ( v32 );
      if ( v32 )
      {
        if ( v5 == -304 )
          goto LABEL_72;
        v33 = 2 * (0x7FFF - v32);
        *(_QWORD *)(v5 + 312) = v30;
        *(_WORD *)(v5 + 304) = v33;
        *(_WORD *)(v5 + 306) = v33 + 2;
      }
      if ( v32 )
      {
LABEL_71:
        v30 = 0LL;
        v45 = 0LL;
        goto LABEL_73;
      }
LABEL_72:
      v30 = v45;
LABEL_73:
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
    }
  }
  if ( (v2 & 0x101) != 0 )
    ACPIThermalUpdateConstraints(a1);
  if ( (v2 & 4) != 0 )
  {
    qmemcpy(v47, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v47));
    OverrideHandle = ACPIThermalGetOverrideHandle(a1);
    v7 = OverrideHandle;
    ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v39);
    v8 = v41;
    *(_DWORD *)(v5 + 4) = v39;
    Time = v8;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        TimeFields.Minute,
        TimeFields.Hour,
        0x17u,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, v7, 843273311LL, &v39);
    *(_DWORD *)(v5 + 8) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        TimeFields.Minute,
        TimeFields.Hour,
        0x18u,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, v7, 1448300639LL, &v39);
    *(_DWORD *)(v5 + 20) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 20) / 0xAu,
        TimeFields.Second,
        0x19u,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v39);
    *(_DWORD *)(v5 + 28) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 28) / 0xAu,
        TimeFields.Second,
        0x1Au,
        (__int64)Timeout);
    v9 = OverrideHandle;
    Parameter = ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v39);
    LODWORD(v11) = v39;
    *(_DWORD *)(v5 + 332) = v39;
    if ( Parameter < 0 )
    {
      v34 = ACPIThermalGetParameter(a1, v9, 1347638367LL, &v39);
      v11 = v39;
      *(_DWORD *)(v5 + 336) = v39;
      if ( v34 >= 0 )
      {
        v11 *= 100LL;
        v39 = v11;
      }
    }
    v12 = v41;
    *(_DWORD *)(v5 + 12) = v11;
    Time = v12;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        TimeFields.Minute,
        TimeFields.Hour,
        0x1Bu,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, v9, 861029215LL, &v39);
    *(_DWORD *)(v5 + 24) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 24) / 0xAu,
        TimeFields.Second,
        0x1Cu,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v39);
    *(_DWORD *)(v5 + 76) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 76) / 0xAu,
        TimeFields.Second,
        0x1Du,
        (__int64)Timeout);
    ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v39);
    *(_DWORD *)(v5 + 104) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 104) / 0xAu,
        TimeFields.Second,
        0x1Eu,
        (__int64)Timeout);
    v13 = 0LL;
    while ( 1 )
    {
      v14 = OverrideHandle;
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v47[v13], &v39) < 0 )
        break;
      *(_DWORD *)(v5 + 4 * v13 + 36) = v39;
      Time = v41;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 4 * v13 + 36) / 0xAu,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          (int)Timeout);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= 0xA )
      {
        v14 = OverrideHandle;
        break;
      }
    }
    *(_BYTE *)(v5 + 32) = v13;
    v15 = ACPIThermalGetParameter(a1, v14, 1280593247LL, &v39);
    v2 = v44;
    if ( v15 < 0
      && (*(_DWORD *)(v5 + 128) & 2) != 0
      && (v35 = *(_QWORD *)(a1 + 760),
          v51 = 0LL,
          v52 = 0LL,
          v53 = 0LL,
          TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID,
          (int)ACPIAmliEvaluateDsm(v35, (unsigned int)&TimeFields, 0, 1, (__int64)&v51, (__int64)&P) >= 0) )
    {
      v36 = P;
      if ( *((_WORD *)P + 1) == 1 )
        v16 = *((unsigned int *)P + 4);
      else
        v16 = v39;
      AMLIFreeDataBuffs((__int64)P);
      ExFreePoolWithTag(v36, 0x52706341u);
    }
    else
    {
      v16 = v39;
    }
    if ( v16 > 0x64 )
      LODWORD(v16) = 100;
    v37 = v41;
    *(_DWORD *)(v5 + 80) = v16;
    Time = v37;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x20u,
        (int)Timeout);
    v17 = *(_DWORD *)(v5 + 128);
    v18 = 0LL;
    v39 = 0LL;
    if ( (v17 & 8) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 760);
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      TimeFields = (struct _TIME_FIELDS)THRM_EXTENSIONS_DSM_UUID;
      if ( (int)ACPIAmliEvaluateDsm(v19, (unsigned int)&TimeFields, 0, 3, (__int64)&v51, (__int64)&P) >= 0 )
      {
        v20 = P;
        if ( *((_WORD *)P + 1) == 1 )
          v18 = *((unsigned int *)P + 4);
        AMLIFreeDataBuffs((__int64)P);
        ExFreePoolWithTag(v20, 0x52706341u);
        if ( v18 > 0x64 )
          v18 = 100LL;
        v39 = v18;
      }
    }
    v21 = v41;
    *(_DWORD *)(v5 + 84) = v18;
    Time = v21;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x21u,
        (int)Timeout);
    ACPIThermalGetParameter(a1, v14, 1348097119LL, &v39);
    *(_DWORD *)(v5 + 88) = v39;
    Time = v41;
    TimeFields = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5 + 88) / 0xAu,
        TimeFields.Second,
        0x22u,
        (__int64)Timeout);
  }
  if ( v48 )
  {
    if ( *(_BYTE *)(v5 + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeWaitForSingleObject((PVOID)(v5 + 248), Executive, 0, 0, 0LL);
    ACPIThermalLoop(a1, 0x4000000LL);
    if ( (v2 & 2) != 0 )
      ACPIThermalReadTemperature(a1, 1LL);
    if ( (v2 & 0x200) != 0 )
      ACPIThermalReadTemperature(a1, 0LL);
  }
  return ACPIThermalLoop(a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
}

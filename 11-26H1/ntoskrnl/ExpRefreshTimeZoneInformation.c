/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140B1209C
 * Callers:
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1408364F8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     RtlSetSystemGlobalData @ 0x1404BE960 (RtlSetSystemGlobalData.c)
 *     ExLocalTimeToSystemTime @ 0x1404C6E60 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x140800DE4 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x140804C34 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140804D4C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408051C8 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     EtwTraceTimeZoneBiasChange @ 0x140827C20 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x140835C90 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x140836264 (ExpReadSiloTimeZoneMarker.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A13354 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140B125BC (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x140B12754 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpInitializeTimeZoneInformation @ 0x140B12860 (ExpInitializeTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B12910 (ExpWriteTimeZoneBias.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140B12960 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140B129D4 (ExpWriteTimeZoneBiasStartEnd.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  bool v2; // r12
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r15
  unsigned __int64 CurrentServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  int TimeZoneInformationWorker; // ebx
  int v11; // r9d
  int v12; // ecx
  __int64 v14; // rsi
  LARGE_INTEGER v15; // rbx
  int v16; // r13d
  __int64 v17; // r12
  _QWORD *v18; // rdi
  LARGE_INTEGER v19; // rbx
  int v20; // eax
  __int64 v21; // r13
  wchar_t *v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int16 Year; // r12
  __int64 v27; // rdx
  int v28; // edx
  int v29; // r9d
  bool SiloTimeZoneMarker; // al
  wchar_t *v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  int RegistryHandle; // edi
  LARGE_INTEGER v35; // rdi
  int v36; // ecx
  int v37; // eax
  char v38; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER v39; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Time; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v44; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v45; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v46; // [rsp+90h] [rbp-78h] BYREF
  TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  wchar_t Buf2[34]; // [rsp+A8h] [rbp-60h] BYREF
  TIME_FIELDS v49; // [rsp+ECh] [rbp-1Ch] BYREF
  int v50; // [rsp+FCh] [rbp-Ch]
  TIME_FIELDS v51; // [rsp+140h] [rbp+38h] BYREF
  int v52; // [rsp+150h] [rbp+48h]
  __int16 v53; // [rsp+154h] [rbp+4Ch]
  char v54; // [rsp+254h] [rbp+14Ch]
  WCHAR v55[264]; // [rsp+258h] [rbp+150h] BYREF

  memset_0(Buf2, 0, 0x1B0uLL);
  v44.QuadPart = 0LL;
  v2 = 0;
  v45.QuadPart = 0LL;
  v3 = 0LL;
  LocalTime.QuadPart = 0LL;
  v43 = 0LL;
  v4 = 1;
  v38 = 0;
  TimeFields = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = PsGetServerSiloGlobals(CurrentServerSilo);
  v8 = ServerSiloGlobals[153];
  if ( *(_QWORD *)(v8 + 592) )
    v4 = 0;
  else
    ExpInitializeTimeZoneInformation(v7, ServerSiloGlobals[153]);
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( !PsIsCurrentThreadInServerSilo()
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v31 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v9 = 3LL;
    v32 = (_OWORD *)v8;
    do
    {
      *(_OWORD *)v31 = *v32;
      *((_OWORD *)v31 + 1) = v32[1];
      *((_OWORD *)v31 + 2) = v32[2];
      *((_OWORD *)v31 + 3) = v32[3];
      *((_OWORD *)v31 + 4) = v32[4];
      *((_OWORD *)v31 + 5) = v32[5];
      *((_OWORD *)v31 + 6) = v32[6];
      v31 += 64;
      v33 = v32[7];
      v32 += 8;
      *((_OWORD *)v31 - 1) = v33;
      --v9;
    }
    while ( v9 );
    TimeZoneInformationWorker = 0;
    *(_OWORD *)v31 = *v32;
    *((_OWORD *)v31 + 1) = v32[1];
    *((_OWORD *)v31 + 2) = v32[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    ++*(_DWORD *)(v8 + 1000);
    LOBYTE(v9) = v4;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v9);
    v11 = 0;
    v12 = 1;
LABEL_8:
    EtwTraceTimeZoneInformationRefresh(v12, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v11, v4);
    return 0;
  }
  v14 = MEMORY[0xFFFFF78000000014];
  v15.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 440);
  Time = v15;
  if ( !v54 )
  {
    if ( v53 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( RtlpCheckDynamicTimeZoneInformation((char *)Buf2, TimeFields.Year) )
      {
        v2 = 1;
        v38 = 1;
LABEL_14:
        RtlpSetTimeZoneInformationWorker(Buf2, 0x1B0u);
        goto LABEL_16;
      }
    }
  }
  if ( v4
    && (int)RtlGetPersistedStateLocation(
              L"TimeZoneInformationSettings",
              L"TargetNtPath",
              0LL,
              0,
              v55,
              0x208u,
              (unsigned int *)&v39) >= 0 )
  {
    Handle = 0LL;
    RegistryHandle = RtlpGetRegistryHandle(0, v55, 0, &Handle);
    v2 = RegistryHandle == -1073741772;
    v38 = v2;
    if ( Handle )
      ZwClose(Handle);
    if ( RegistryHandle == -1073741772 )
      goto LABEL_14;
  }
LABEL_16:
  v16 = *(_DWORD *)Buf2;
  Handle = (HANDLE)-1LL;
  v46.QuadPart = -1LL;
  if ( v49.Month && v51.Month )
  {
    if ( !RtlCutoverTimeToSystemTime(&v49, &v44, &Time) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v11) = v38;
      v12 = 2;
      goto LABEL_8;
    }
    v35 = v44;
    Handle = (HANDLE)v44.QuadPart;
    if ( !RtlCutoverTimeToSystemTime(&v51, &v45, &Time) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v11) = v2;
      v12 = 3;
      goto LABEL_8;
    }
    v46 = v45;
    if ( v15.QuadPart >= v45.QuadPart && v15.QuadPart >= v35.QuadPart )
    {
      v39.QuadPart = 0LL;
      v19.QuadPart = 0LL;
      v36 = (v35.QuadPart <= v45.QuadPart) + 1;
LABEL_57:
      v18 = (_QWORD *)(v8 + 432);
      *(_DWORD *)(v8 + 432) = v36;
      v17 = v8 + 512;
      v37 = v50;
      if ( v36 == 2 )
        v37 = v52;
      v16 += v37;
      goto LABEL_18;
    }
    if ( v45.QuadPart >= v35.QuadPart )
    {
      if ( v15.QuadPart < v35.QuadPart || v15.QuadPart >= v45.QuadPart )
        goto LABEL_56;
    }
    else if ( v15.QuadPart >= v45.QuadPart && v15.QuadPart < v35.QuadPart )
    {
LABEL_56:
      v19 = v35;
      v36 = 2;
      v39 = v35;
      goto LABEL_57;
    }
    v19 = v45;
    v39 = v45;
    v36 = 1;
    goto LABEL_57;
  }
  v17 = v8 + 512;
  KeCancelTimer((PKTIMER)(v8 + 512));
  v18 = (_QWORD *)(v8 + 432);
  *(_DWORD *)(v8 + 432) = 0;
  v19.QuadPart = 0LL;
  v39.QuadPart = 0LL;
LABEL_18:
  if ( *(_DWORD *)(v8 + 436) != v16 )
  {
    v43 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v43);
    EtwTraceTimeZoneBiasChange(v16, *(_DWORD *)(v8 + 436));
  }
  v20 = 60 * v16;
  *(_DWORD *)(v8 + 436) = v16;
  v21 = 3LL;
  v22 = Buf2;
  *(_QWORD *)(v8 + 440) = 10000000LL * v20;
  v23 = (_OWORD *)v8;
  do
  {
    *v23 = *(_OWORD *)v22;
    v23[1] = *((_OWORD *)v22 + 1);
    v23[2] = *((_OWORD *)v22 + 2);
    v23[3] = *((_OWORD *)v22 + 3);
    v23[4] = *((_OWORD *)v22 + 4);
    v23[5] = *((_OWORD *)v22 + 5);
    v23[6] = *((_OWORD *)v22 + 6);
    v23 += 8;
    v24 = *((_OWORD *)v22 + 7);
    v22 += 64;
    *(v23 - 1) = v24;
    --v21;
  }
  while ( v21 );
  v25 = *(_OWORD *)v22;
  ExpSystemIsInCmosMode = 0;
  *v23 = v25;
  v23[1] = *((_OWORD *)v22 + 1);
  v23[2] = *((_OWORD *)v22 + 2);
  RtlSetSystemGlobalData(6, v18, 4);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v19.QuadPart )
  {
    ExLocalTimeToSystemTime(&v39, (PLARGE_INTEGER)(v8 + 992));
    KiSetTimerEx(v17, *(_QWORD *)(v8 + 992), 0, 0, v8 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v8 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 944), &LocalTime);
  ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v8 + 936));
  KiSetTimerEx(v8 + 672, *(_QWORD *)(v8 + 936), 0, 0, v8 + 608);
  *(_WORD *)(v8 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 968), &LocalTime);
  ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v8 + 960));
  KiSetTimerEx(v8 + 832, *(_QWORD *)(v8 + 960), 0, 0, v8 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v8 + 440);
  if ( v19.QuadPart )
    v27 = *(_QWORD *)(v8 + 992);
  else
    v27 = *(_QWORD *)(v8 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v14, v27);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v8 + 436));
  if ( Year != *(_WORD *)(v8 + 984) )
  {
    if ( RtlpUpdateDynamicTimeZones(Year) )
      *(_WORD *)(v8 + 984) = Year;
  }
  LOBYTE(v28) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v28,
    (unsigned int)&Handle,
    (unsigned int)&v46,
    (__int64)&v39);
  LOBYTE(v29) = v38;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v29, v4);
  return 1;
}

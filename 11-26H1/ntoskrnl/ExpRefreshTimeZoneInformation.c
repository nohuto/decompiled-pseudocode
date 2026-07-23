/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140B13E1C
 * Callers:
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     RtlSetSystemGlobalData @ 0x1404B81B0 (RtlSetSystemGlobalData.c)
 *     ExLocalTimeToSystemTime @ 0x1404C0810 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x140806884 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x14080A6D4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14080A7EC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14080AC68 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 *     EtwTraceTimeZoneBiasChange @ 0x14082DE60 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14083BED0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x14083C4A4 (ExpReadSiloTimeZoneMarker.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A12544 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140B1433C (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x140B144D4 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpInitializeTimeZoneInformation @ 0x140B145E0 (ExpInitializeTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B14690 (ExpWriteTimeZoneBias.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140B146E0 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140B14754 (ExpWriteTimeZoneBiasStartEnd.c)
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
  BOOLEAN v11; // r9
  int v12; // r9d
  int v13; // ecx
  __int64 v15; // rsi
  LARGE_INTEGER v16; // rbx
  int v17; // r13d
  __int64 v18; // r12
  void *v19; // rdi
  LARGE_INTEGER v20; // rbx
  int v21; // eax
  __int64 v22; // r13
  wchar_t *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int16 Year; // r12
  __int64 v28; // rdx
  int v29; // edx
  int v30; // r9d
  bool SiloTimeZoneMarker; // al
  wchar_t *v32; // rcx
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  int RegistryHandle; // edi
  BOOLEAN v36; // r9
  LARGE_INTEGER v37; // rdi
  int v38; // ecx
  int v39; // eax
  char v40; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER v41; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Time; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 Buffer; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v47; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v48; // [rsp+90h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  wchar_t Buf2[34]; // [rsp+A8h] [rbp-60h] BYREF
  _TIME_FIELDS CutoverTime; // [rsp+ECh] [rbp-1Ch] BYREF
  int v52; // [rsp+FCh] [rbp-Ch]
  _TIME_FIELDS v53; // [rsp+140h] [rbp+38h] BYREF
  int v54; // [rsp+150h] [rbp+48h]
  __int16 v55; // [rsp+154h] [rbp+4Ch]
  char v56; // [rsp+254h] [rbp+14Ch]
  WCHAR TargetPath[264]; // [rsp+258h] [rbp+150h] BYREF

  memset_0(Buf2, 0, 0x1B0uLL);
  SystemTime.QuadPart = 0LL;
  v2 = 0;
  v47.QuadPart = 0LL;
  v3 = 0LL;
  LocalTime.QuadPart = 0LL;
  Buffer = 0LL;
  v4 = 1;
  v40 = 0;
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
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v32 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v9 = 3LL;
    v33 = (_OWORD *)v8;
    do
    {
      *(_OWORD *)v32 = *v33;
      *((_OWORD *)v32 + 1) = v33[1];
      *((_OWORD *)v32 + 2) = v33[2];
      *((_OWORD *)v32 + 3) = v33[3];
      *((_OWORD *)v32 + 4) = v33[4];
      *((_OWORD *)v32 + 5) = v33[5];
      *((_OWORD *)v32 + 6) = v33[6];
      v32 += 64;
      v34 = v33[7];
      v33 += 8;
      *((_OWORD *)v32 - 1) = v34;
      --v9;
    }
    while ( v9 );
    TimeZoneInformationWorker = 0;
    *(_OWORD *)v32 = *v33;
    *((_OWORD *)v32 + 1) = v33[1];
    *((_OWORD *)v32 + 2) = v33[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    ++*(_DWORD *)(v8 + 1000);
    LOBYTE(v9) = v4;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v9);
    v12 = 0;
    v13 = 1;
LABEL_8:
    EtwTraceTimeZoneInformationRefresh(v13, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v12, v4);
    return 0;
  }
  v15 = MEMORY[0xFFFFF78000000014];
  v16.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 440);
  Time = v16;
  if ( !v56 )
  {
    if ( v55 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( RtlpCheckDynamicTimeZoneInformation((char *)Buf2, TimeFields.Year) )
      {
        v2 = 1;
        v40 = 1;
LABEL_14:
        RtlpSetTimeZoneInformationWorker(Buf2, 0x1B0u);
        goto LABEL_16;
      }
    }
  }
  if ( v4
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         (PULONG)&v41) >= 0 )
  {
    Handle = 0LL;
    RegistryHandle = RtlpGetRegistryHandle(0, TargetPath, 0, &Handle);
    v2 = RegistryHandle == -1073741772;
    v40 = v2;
    if ( Handle )
      ZwClose(Handle);
    if ( RegistryHandle == -1073741772 )
      goto LABEL_14;
  }
LABEL_16:
  v17 = *(_DWORD *)Buf2;
  Handle = (HANDLE)-1LL;
  v48.QuadPart = -1LL;
  if ( CutoverTime.Month && v53.Month )
  {
    if ( !RtlCutoverTimeToSystemTime(&CutoverTime, &SystemTime, &Time, v11) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v12) = v40;
      v13 = 2;
      goto LABEL_8;
    }
    v37 = SystemTime;
    Handle = (HANDLE)SystemTime.QuadPart;
    if ( !RtlCutoverTimeToSystemTime(&v53, &v47, &Time, v36) )
    {
      ++*(_DWORD *)(v8 + 1000);
      ExpSystemIsInCmosMode = 1;
      ExpLogRefreshTimeZoneInformationCutoverFail();
      LOBYTE(v12) = v2;
      v13 = 3;
      goto LABEL_8;
    }
    v48 = v47;
    if ( v16.QuadPart >= v47.QuadPart && v16.QuadPart >= v37.QuadPart )
    {
      v41.QuadPart = 0LL;
      v20.QuadPart = 0LL;
      v38 = (v37.QuadPart <= v47.QuadPart) + 1;
LABEL_57:
      v19 = (void *)(v8 + 432);
      *(_DWORD *)(v8 + 432) = v38;
      v18 = v8 + 512;
      v39 = v52;
      if ( v38 == 2 )
        v39 = v54;
      v17 += v39;
      goto LABEL_18;
    }
    if ( v47.QuadPart >= v37.QuadPart )
    {
      if ( v16.QuadPart < v37.QuadPart || v16.QuadPart >= v47.QuadPart )
        goto LABEL_56;
    }
    else if ( v16.QuadPart >= v47.QuadPart && v16.QuadPart < v37.QuadPart )
    {
LABEL_56:
      v20 = v37;
      v38 = 2;
      v41 = v37;
      goto LABEL_57;
    }
    v20 = v47;
    v41 = v47;
    v38 = 1;
    goto LABEL_57;
  }
  v18 = v8 + 512;
  KeCancelTimer((PKTIMER)(v8 + 512));
  v19 = (void *)(v8 + 432);
  *(_DWORD *)(v8 + 432) = 0;
  v20.QuadPart = 0LL;
  v41.QuadPart = 0LL;
LABEL_18:
  if ( *(_DWORD *)(v8 + 436) != v17 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v17, *(_DWORD *)(v8 + 436));
  }
  v21 = 60 * v17;
  *(_DWORD *)(v8 + 436) = v17;
  v22 = 3LL;
  v23 = Buf2;
  *(_QWORD *)(v8 + 440) = 10000000LL * v21;
  v24 = (_OWORD *)v8;
  do
  {
    *v24 = *(_OWORD *)v23;
    v24[1] = *((_OWORD *)v23 + 1);
    v24[2] = *((_OWORD *)v23 + 2);
    v24[3] = *((_OWORD *)v23 + 3);
    v24[4] = *((_OWORD *)v23 + 4);
    v24[5] = *((_OWORD *)v23 + 5);
    v24[6] = *((_OWORD *)v23 + 6);
    v24 += 8;
    v25 = *((_OWORD *)v23 + 7);
    v23 += 64;
    *(v24 - 1) = v25;
    --v22;
  }
  while ( v22 );
  v26 = *(_OWORD *)v23;
  ExpSystemIsInCmosMode = 0;
  *v24 = v26;
  v24[1] = *((_OWORD *)v23 + 1);
  v24[2] = *((_OWORD *)v23 + 2);
  RtlSetSystemGlobalData(GlobalDataIdTimeZoneId, v19, 4u);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v20.QuadPart )
  {
    ExLocalTimeToSystemTime(&v41, (PLARGE_INTEGER)(v8 + 992));
    KiSetTimerEx(v18, *(_QWORD *)(v8 + 992), 0, 0, v8 + 448);
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
  if ( v20.QuadPart )
    v28 = *(_QWORD *)(v8 + 992);
  else
    v28 = *(_QWORD *)(v8 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v15, v28);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v8 + 436));
  if ( Year != *(_WORD *)(v8 + 984) )
  {
    if ( RtlpUpdateDynamicTimeZones(Year) )
      *(_WORD *)(v8 + 984) = Year;
  }
  LOBYTE(v29) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v29,
    (unsigned int)&Handle,
    (unsigned int)&v48,
    (__int64)&v41);
  LOBYTE(v30) = v40;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v30, v4);
  return 1;
}

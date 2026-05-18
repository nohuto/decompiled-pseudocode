/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000D9E0 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800025E4 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002880 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x180003478 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180003638 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x1800037A4 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x180007080 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 *     ??1CallWithHangTimeout@@QEAA@XZ @ 0x1800073A0 (--1CallWithHangTimeout@@QEAA@XZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180007EC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180009810 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180009CF0 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues @ 0x18000B7D0 (_unnamed_type_gDwmInitTelemetryAggregator_--ReportAggregatedValues.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000C490 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000CFB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000F2E4 (DwmpSignalSessionShutdown.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // r12d
  HANDLE v2; // r15
  RTL_SRWLOCK *v3; // rsi
  _DWORD *v4; // rax
  unsigned int v5; // edx
  signed int v6; // edi
  HANDLE v7; // rbx
  int v8; // eax
  HANDLE EventW; // rbx
  signed int LastError; // eax
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax
  signed int v14; // eax
  HANDLE hProcess; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  HANDLE hToken; // [rsp+60h] [rbp-A0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  GUID *v22; // [rsp+80h] [rbp-80h] BYREF
  GUID *v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v26[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v27[32]; // [rsp+130h] [rbp+30h] BYREF

  v1 = (unsigned int)Parameter;
  v26[0] = 6881367;
  v26[1] = 7536750;
  v26[2] = 6357108;
  v26[3] = 6029360;
  v26[4] = 6619204;
  v26[5] = 6357094;
  v26[6] = 7078005;
  v26[7] = 116;
  _o_wcscpy_s(v27, 16LL, v26);
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  StartupInfo.lpDesktop = (LPWSTR)v27;
  v2 = 0LL;
  hToken = 0LL;
  v3 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
  {
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v3 = (RTL_SRWLOCK *)CallWithHangTimeout::CallWithHangTimeout(v4, v5);
  }
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001E6A8 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v6 = 1;
    goto LABEL_57;
  }
  if ( ghDwmProcess )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        v7 = ghDwmProcess;
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = GetProcessId(v7);
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
    v8 = CleanupOldDwmProcess();
    v6 = v8;
    if ( v8 < 0 )
    {
      v11 = 1273;
LABEL_55:
      v12 = v8;
      goto LABEL_56;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = 0;
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
  }
  if ( gDwmFirstLaunch )
  {
    EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
    if ( !EventW )
    {
      if ( GetLastError() != 183 )
        goto LABEL_30;
      SetLastError(0);
      EventW = OpenEventW(0x100000u, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
      if ( !EventW )
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        if ( v6 >= 0 )
          v6 = -2003304445;
        DoStackCaptureDirect(v6, 0x1AEu);
        v11 = 1296;
LABEL_27:
        v12 = v6;
LABEL_56:
        DoStackCaptureDirect(v12, v11);
        goto LABEL_57;
      }
    }
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
LABEL_30:
    if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v8 = MapDwmVirtualAccountAndAdjustPrivileges();
  v6 = v8;
  if ( v8 < 0 )
  {
    v11 = 1314;
    goto LABEL_55;
  }
  v13 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v6 = v13;
  if ( v13 < 0 )
  {
    DoStackCaptureDirect(v13, 0x525u);
    v2 = hToken;
    goto LABEL_57;
  }
  SetLastError(0);
  v2 = hToken;
  if ( !CreateProcessAsUserW(
          hToken,
          L"dwm.exe",
          0LL,
          0LL,
          0LL,
          0,
          0x4000420u,
          0LL,
          0LL,
          &StartupInfo,
          &ProcessInformation) )
  {
    v14 = GetLastError();
    v6 = v14;
    if ( v14 > 0 )
      v6 = (unsigned __int16)v14 | 0x80070000;
    v11 = 1337;
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_27;
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        hProcess = ProcessInformation.hProcess;
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = GetProcessId(hProcess);
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
    if ( IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v6 = -2147467259;
      TraceLoggingWriteEtw(4LL, 2147500037LL, 0LL);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_57:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v6 < 0 )
  {
    LODWORD(qword_18001ADFC) = qword_18001ADFC + 1;
    ++HIDWORD(qword_18001ADFC);
    if ( SHIDWORD(qword_18001ADFC) > 10 )
    {
      unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
      HIDWORD(qword_18001ADFC) = 0;
    }
    if ( (unsigned int)dword_18001A000 > 5
      && (qword_18001A010 & 0x400000000000LL) != 0
      && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
    {
      LODWORD(hToken) = v6;
      v22 = &gDwmInitTargetAppSessionGuid;
      v24 = 0x1000000LL;
      v23 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v16,
        (__int64)&unk_18001586F,
        v17,
        v18,
        (__int64)&v24,
        (__int64 *)&v23,
        (__int64)&hToken,
        (__int64 *)&v22);
    }
    unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
    TraceLoggingWriteEtw(2LL, (unsigned int)v6, 0LL);
  }
  dword_18001E6A8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v6 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCaptureDirect(v6, 0x5D1u);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl)
    && v3 )
  {
    CallWithHangTimeout::~CallWithHangTimeout((struct _TP_TIMER **)v3);
    operator delete(v3);
  }
  TraceLoggingWriteEtw(10LL, (unsigned int)v6, v1);
  return 0LL;
}

/*
 * XREFs of wmain @ 0x140001618
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400012C0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     SmpGetSoftBootStatus @ 0x1400010B8 (SmpGetSoftBootStatus.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x140001140 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     WppInitUm @ 0x140001200 (WppInitUm.c)
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140005530 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140005610 (SmpWaitForSingleSubSys.c)
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpUnlockKnownSubSysList @ 0x1400073F0 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140008630 (SmpWaitForSubSysStartup.c)
 *     SmpGetFirstSessionId @ 0x14000B56C (SmpGetFirstSessionId.c)
 *     SmpGetCoreProcessIds @ 0x14000B788 (SmpGetCoreProcessIds.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpReadyBootSync @ 0x14000DC58 (SmpReadyBootSync.c)
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 *     SmpTerminate @ 0x140018DC4 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140018EAC (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(int a1, PCWSTR *a2, __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v20; // eax
  void *v21; // r14
  int v22; // eax
  __int64 v23; // rsi
  NTSTATUS v24; // edi
  NTSTATUS InformationProcess; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 Parameters; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-D0h]
  __int64 v29; // [rsp+50h] [rbp-C8h]
  __int64 v30; // [rsp+58h] [rbp-C0h]
  int v31; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-B4h]
  __int64 v33; // [rsp+68h] [rbp-B0h] BYREF
  int v34; // [rsp+70h] [rbp-A8h]
  _DWORD ProcessInformation[2]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-98h] BYREF
  __int128 v37; // [rsp+88h] [rbp-90h] BYREF
  __int64 v38; // [rsp+98h] [rbp-80h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-78h] BYREF
  int v40; // [rsp+B0h] [rbp-68h]
  __int64 v41; // [rsp+B8h] [rbp-60h] BYREF
  _DWORD v42[8]; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-38h]
  int v44; // [rsp+E8h] [rbp-30h]
  int v45; // [rsp+120h] [rbp+8h] BYREF
  __int64 v46; // [rsp+130h] [rbp+18h] BYREF

  v46 = a3;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v44 = 0;
  DestinationString = 0LL;
  v45 = 0;
  v37 = 0LL;
  v38 = 0LL;
  Parameters = (unsigned __int64)&DestinationString;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  LODWORD(v46) = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v46, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation();
  if ( (unsigned int)EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle) )
    SmpTraceHandle = 0LL;
  qword_1400314D0 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_1400314D8 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WppInitUm();
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  SmpGetSoftBootStatus();
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v31 = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v31, 4u);
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v45 = 3;
      v8 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v45, 4u);
      v9 = (unsigned int)v8;
      if ( v8 < 0 )
      {
        SmpLogFailure("wmain", 353LL, (unsigned int)v8);
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v10 = (unsigned int)v9;
        v28 = v9;
        goto LABEL_39;
      }
    }
    if ( a4 )
      SmpDebug = a4;
    v41 = 0LL;
    v36 = 0LL;
    RtlInitializeSRWLock(&v37);
    v11 = TpAllocPool((char *)&v37 + 8, 0LL);
    v12 = (unsigned int)v11;
    if ( v11 >= 0 )
    {
      LODWORD(v38) = SmpNumberInitialSessions;
      v14 = TpSetPoolMinThreads(*((_QWORD *)&v37 + 1), (unsigned int)(SmpNumberInitialSessions + 1));
      v12 = v14;
      if ( v14 >= 0 )
      {
        SmpCallbackEnviron = 3;
        xmmword_140031508 = 0LL;
        qword_140031518 = 0LL;
        xmmword_140031520 = 0LL;
        qword_140031530 = 0LL;
        dword_140031538 = 0;
        dword_14003153C = 1;
        dword_140031540 = 72;
        *(_QWORD *)&xmmword_140031508 = *((_QWORD *)&v37 + 1);
        v15 = SmpInit();
        v12 = (unsigned int)v15;
        if ( v15 < 0 )
        {
          SmpLogFailure("wmain", 428LL, (unsigned int)v15);
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_13;
        }
        v16 = TpAllocAlpcCompletion(&v41, SmpApiConnectionPort, SmpApiCallback, &v37, &SmpCallbackEnviron);
        v12 = (unsigned int)v16;
        if ( v16 >= 0 )
        {
          v17 = TpAllocWork(&v36, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v12 = v17;
          if ( v17 >= 0 )
          {
            v18 = 0;
            v32 = 0;
            while ( v18 < SmpNumberInitialSessions )
            {
              TpPostWork(v36);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v18 )
              {
                v34 = 0;
                v33 = 0LL;
                v39[0] = 1LL;
                v39[1] = &v33;
                v40 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, &v33);
                  v20 = SmpGetFirstSessionId();
                  v21 = (void *)SmpSearchKnownSubSysDatabase(v20, v39);
                  SmpUnlockKnownSubSysList(&v33);
                }
                while ( !v21 );
                v22 = SmpWaitForSingleSubSys(v21);
                v23 = v22;
                if ( v22 < 0 )
                {
                  SmpLogFailure("wmain", 537LL, (unsigned int)v22);
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  SmpInitProgressByLine = 543;
                  SmpInitReturnStatus = v23;
                  SmpInitLastCall = (__int64)SmpWaitForSingleSubSys;
                  v10 = v23;
                  v28 = v23;
                  goto LABEL_39;
                }
                SmpDereferenceKnownSubSys(v21);
              }
              v32 = ++v18;
            }
            SmpGetCoreProcessIds(0LL, &v33);
            v24 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v24 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v42[0] = v24;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(
                                     SmpCoreSubsysProcess[0],
                                     ProcessBasicInformation,
                                     v42,
                                     0x30u,
                                     0LL);
              v24 = v42[0];
            }
            v10 = v24;
            if ( InformationProcess < 0 )
              v10 = -1073741823LL;
            v28 = v10;
LABEL_39:
            SmpLogFailureString("wmain", 611LL, DestinationString.Buffer, v10);
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x140001D2CLL);
          }
          SmpLogFailure("wmain", 476LL, (unsigned int)v17);
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 486;
          SmpInitReturnStatus = v12;
          v13 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocWork;
        }
        else
        {
          SmpLogFailure("wmain", 446LL, (unsigned int)v16);
          RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
          SmpInitProgressByLine = 456;
          SmpInitReturnStatus = v12;
          v13 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocAlpcCompletion;
        }
      }
      else
      {
        SmpLogFailure("wmain", 406LL, (unsigned int)v14);
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 416;
        SmpInitReturnStatus = v12;
        v13 = TpSetPoolMinThreads;
      }
    }
    else
    {
      SmpLogFailure("wmain", 380LL, (unsigned int)v11);
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 390;
      SmpInitReturnStatus = v12;
      v13 = TpAllocPool;
    }
    SmpInitLastCall = (__int64)v13;
LABEL_13:
    v10 = v12;
    v28 = v12;
    goto LABEL_39;
  }
  SmscMain((unsigned int)a1, a2, a4);
  return 0LL;
}

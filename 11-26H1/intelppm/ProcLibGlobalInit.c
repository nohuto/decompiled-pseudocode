/*
 * XREFs of ProcLibGlobalInit @ 0x14004B8C0
 * Callers:
 *     DriverEntry @ 0x14004A5E0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1400032E0 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x140003AC0 (WPP_RECORDER_SF_dd.c)
 *     HviIsAnyHypervisorPresent @ 0x1400042D4 (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     HviGetHypervisorFeatures @ 0x140005B18 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140005B58 (HviIsHypervisorMicrosoftCompatible.c)
 *     HviGetEnlightenmentInformation @ 0x140010184 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 *     GetRegistryDwordValue @ 0x1400288D0 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x14002C78C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x14002C810 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x14002CA54 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x14002CB44 (ProcLibTraceThrottleStatesErrata.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14002CB70 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     GetRegistryQwordValue @ 0x14002CC24 (GetRegistryQwordValue.c)
 *     GetHiddenProcessorPresence @ 0x14003DF20 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x14003DFCC (GetHvPpmCapabilities.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1400484A0 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x14004A948 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x14004AAB0 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x14004C678 (PopulateEnergyEstimationModel.c)
 *     InitializeHvProcessorInfo @ 0x14004C9E0 (InitializeHvProcessorInfo.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned int v7; // r8d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // si
  char v15; // r15
  __int64 v16; // rdx
  ULONG v17; // ecx
  const CHAR *v18; // r8
  const CHAR *v19; // r9
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  int *v25; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  const char *v30; // rax
  int v31; // edx
  int v32; // edx
  int v34; // [rsp+30h] [rbp-51h]
  int v35; // [rsp+38h] [rbp-49h]
  int v36; // [rsp+48h] [rbp-39h] BYREF
  int v37; // [rsp+4Ch] [rbp-35h] BYREF
  int v38; // [rsp+50h] [rbp-31h] BYREF
  int v39; // [rsp+54h] [rbp-2Dh] BYREF
  int v40; // [rsp+58h] [rbp-29h] BYREF
  int v41; // [rsp+5Ch] [rbp-25h] BYREF
  __int128 v42; // [rsp+60h] [rbp-21h] BYREF
  __int128 v43; // [rsp+70h] [rbp-11h]
  __int64 v44; // [rsp+80h] [rbp-1h]
  __int128 InputBuffer; // [rsp+88h] [rbp+7h] BYREF
  __int128 v46; // [rsp+98h] [rbp+17h] BYREF

  v41 = 0;
  v39 = 0;
  v38 = 0;
  v40 = 0;
  LODWORD(v44) = 0;
  InputBuffer = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1400194C0, (ULONG)296);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_130:
      v7 = 3;
      goto LABEL_131;
    }
    return v3;
  }
  v5 = dword_1400194C0;
  if ( dword_1400194C0 != 87 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v6 = 11;
    v35 = 87;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v6,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      v5,
      v35);
    return (unsigned int)-1073741735;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400191A8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 12;
LABEL_12:
    v7 = 4;
LABEL_131:
    v34 = v2;
    goto LABEL_132;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400191B8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 13;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400191B0);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 14;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140019800);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 15;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400191C0);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 16;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_140019820);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 17;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1400197F8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v4 = 18;
    goto LABEL_12;
  }
  GetHvPpmCapabilities((bool *)&byte_140019AD5, (bool *)&byte_140019AD4, &byte_140019AD2, (bool *)&byte_140019AD3);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_140019834 = 0;
  v9 = 2LL;
  qword_140019828 = WorkItem;
  qword_1400191F0 = (__int64)&qword_1400191E8;
  qword_1400191E8 = (__int64)&qword_1400191E8;
  qword_140019200 = (__int64)&qword_1400191F8;
  qword_1400191F8 = (__int64)&qword_1400191F8;
  qword_140019210 = (__int64)&qword_140019208;
  qword_140019208 = (__int64)&qword_140019208;
  qword_140019220 = (__int64)&qword_140019218;
  qword_140019218 = (__int64)&qword_140019218;
  qword_140019230 = (__int64)&qword_140019228;
  qword_140019228 = (__int64)&qword_140019228;
  qword_140019810 = (__int64)&qword_140019808;
  qword_140019808 = (__int64)&qword_140019808;
  qword_140019B08 = (__int64)&qword_140019B00;
  qword_140019B00 = (__int64)&qword_140019B00;
  v10 = &unk_1400191C8;
  v11 = (char *)&unk_1400191C8;
  qword_140019AF8 = 0LL;
  do
  {
    v10[1] = v11;
    *v10 = v11;
    v11 += 16;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v41);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1400191A0);
  GetRegistryQwordValue(v13, v12, &qword_140019198);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v38);
  if ( v38 )
    byte_140019850 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowUnvalidatedCppcQos",
    &v39);
  if ( v39 )
    byte_140019B10 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v40);
  qword_1400196F0 = (__int64)RegisterKernelIdleStates;
  byte_140019AD1 = 0;
  qword_140019738 = (__int64)RegisterHiddenIdleStates;
  byte_140019740 = v40 == 0;
  dword_140019744 = 0;
  qword_1400196F8 = (__int64)RegisterKernelPerfStates;
  qword_140019708 = (__int64)RegisterKernelPerfFeedback;
  qword_140019710 = (__int64)RegisterKernelLegacyPcc;
  qword_140019700 = (__int64)RegisterKernelCap;
  qword_140019718 = (__int64)RegisterKernelCpc;
  qword_140019720 = (__int64)RegisterKernelPepPerf;
  qword_140019728 = (__int64)GetNtProcessorNumber;
  qword_140019730 = (__int64)RegisterKernelPackage;
  v37 = 0;
  HviGetHypervisorFeatures();
  v14 = 0;
  byte_140019748 = 0;
  v15 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v14 = (BYTE8(InputBuffer) & 0x20) != 0;
    byte_140019AD1 = 1;
    HviGetEnlightenmentInformation();
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 && (v46 & 0x1000) == 0 )
    {
      if ( byte_140019AD5 )
      {
        v3 = InitializeHvProcessorInfo(4096LL);
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        if ( !byte_140019AD3 )
        {
          dword_140019744 = 1;
          qword_1400196F8 = (__int64)RegisterHvPerfStatesCounters;
          qword_140019708 = (__int64)RegisterHvPerfFeedbackCounters;
          qword_140019710 = (__int64)RegisterHvLegacyPccCounters;
          qword_140019718 = (__int64)RegisterHvCpcCounters;
        }
        qword_140019738 = (__int64)RegisterHvIdleStates;
        if ( byte_140019AD2 )
          byte_140019AD1 = 0;
        else
          qword_1400196F0 = (__int64)RegisterHvIdleStates;
        byte_140019B11 = 1;
        qword_140019728 = (__int64)GetLpIndex;
        qword_140019730 = (__int64)RegisterHvPackage;
      }
      dword_140019AC8 = GetHiddenProcessorPresence();
      goto LABEL_62;
    }
    v15 = 1;
    qword_1400196F0 = (__int64)RegisterGuestIdleStates;
    if ( (v46 & 0x1000) != 0 && byte_140019AD5 )
      qword_140019708 = (__int64)RegisterHvPerfFeedbackCounters;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v37);
    if ( !v37 )
    {
      qword_1400196F8 = (__int64)RegisterNoop;
      qword_140019710 = (__int64)RegisterNoop;
      qword_140019700 = (__int64)RegisterNoop;
      qword_140019718 = (__int64)RegisterNoop;
      qword_140019720 = (__int64)RegisterNoop;
      if ( v14 )
      {
        byte_140019748 = 1;
      }
      else
      {
        qword_140019708 = (__int64)RegisterNoop;
        qword_140019730 = (__int64)RegisterNoop;
      }
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v42) >= 0 )
  {
    v5 = v42;
    if ( (_DWORD)v42 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v6 = 19;
      v35 = 1;
      goto LABEL_7;
    }
    qword_140019578 = *((_QWORD *)&v42 + 1);
    xmmword_140019580 = v43;
    qword_140019590 = v44;
  }
  dword_140019ACC = dword_1400191A4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_140019AC8 = 2;
LABEL_62:
  WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 0x4000LL, 1919119952LL);
  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v2 = EtwRegister(
           &PPM_ETW_PROVIDER,
           (PETWENABLECALLBACK)ProcLibTraceControlCallback,
           0LL,
           (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
    v3 = v2;
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 21;
        goto LABEL_130;
      }
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140018C60);
      ProcLibEtwRegistered = 1;
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, (ULONG)16, 0LL, (ULONG)0);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v2 = CollectAcpiBiosInfo(v17, v16, v18, v19);
        v3 = v2;
        if ( v2 >= 0 )
        {
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v36);
          v20 = v36 == 2;
          v36 = 1;
          v21 = 0;
          if ( v20 )
            v21 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v36);
          if ( v36 == 2 )
            v21 |= 2u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v36);
          if ( v36 == 2 )
            v21 |= 0x3300000u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v36);
          if ( v36 == 2 )
            v21 |= 0x80000000;
          v22 = v21;
          v23 = 0x180891100277LL;
          qword_140019198 = v21 | (unsigned __int64)qword_140019198;
          dword_14001975C = v21;
          dword_140019340 = 1;
          dword_140019344 = 384;
          if ( v41 )
            v23 = 0x8181891500277LL;
          Globals[0] = v23 | 0x2010408800400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v25 = dword_1400198A8;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v24) = i;
              PopulateEnergyEstimationModel(v24, v25);
              v25 += 64;
            }
          }
          *(_QWORD *)&v46 = 0LL;
          TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140018C98);
          inited = InitDriver((__int64)&dword_140019340, &v46);
          v3 = inited;
          if ( inited >= 0 )
          {
            v28 = Globals[0] | v46;
            Globals[0] |= v46;
            if ( v15 )
            {
              qword_140019368 = 0LL;
              qword_140019380 = 0LL;
              qword_140019388 = 0LL;
              qword_140019390 = 0LL;
              qword_1400193B0 = 0LL;
              qword_140019398 = 0LL;
              qword_1400193A0 = 0LL;
              qword_1400193C0 = 0LL;
              qword_1400193C8 = 0LL;
              qword_1400193D0 = 0LL;
              byte_140019428 = 0;
              qword_140019430 = 0LL;
              qword_140019438 = 0LL;
              if ( !v14 )
                qword_1400193B8 = 0LL;
              v29 = v28 & 0xFFFE5FFFFFFFFFFFuLL;
              Globals[0] = v29;
              if ( !v37 )
                Globals[0] = v29 & 0xFFFFFFF7FFFFFFFFuLL;
            }
            if ( HviIsAnyHypervisorPresent() && HviIsHypervisorMicrosoftCompatible() )
              Globals[0] &= ~0x200000000uLL;
            if ( dword_140019744 != 1 )
              Globals[0] &= ~0x400000000000uLL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v30 = "Disabled";
              if ( dword_140019744 )
                v30 = "Enabled";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x19u,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                v30);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v31) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v31,
                    2,
                    26,
                    (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v31) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v31,
                    2,
                    27,
                    (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
                }
              }
            }
            DisplayPPMFlags(Globals[0], 5u);
            if ( (Globals[0] & v22 & 0x7F077) != 0 )
              ProcLibTraceIdleStatesErrata(0);
            if ( (Globals[0] & v22 & 0x70000000) != 0 )
              ProcLibTracePerfStatesErrata(0);
            if ( (Globals[0] & v22 & 0x3300000) != 0 )
              ProcLibTraceThrottleStatesErrata(0);
            if ( (Globals[0] & (unsigned int)v22 & 0x80000000) != 0 )
              ProcLibTracePccErrata(0);
            if ( qword_140019198 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v32) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v32,
                  2,
                  28,
                  (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
              }
              DisplayPPMFlags(~qword_140019198, 5u);
              Globals[0] &= ~qword_140019198;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v32) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v32,
                2,
                29,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
            DisplayPPMFlags(Globals[0], 4u);
            if ( qword_140019380 && (dword_1400191A0 & 0x70000000) != 0 )
              qword_140019380 = 0LL;
            if ( _bittest64(Globals, 0x23u) )
              HwDebugInitializeRegistryDebugRegisters(0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                3u,
                0x18u,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                inited);
            memset(&dword_140019340, 0, 0x180uLL);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = 23;
          goto LABEL_130;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 22;
        goto LABEL_130;
      }
    }
  }
  else
  {
    v3 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 20;
      v34 = -1073741670;
      v7 = 3;
LABEL_132:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v7,
        v4,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v34);
    }
  }
  return v3;
}

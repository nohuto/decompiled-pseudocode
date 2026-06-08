/*
 * XREFs of ProcLibGlobalInit @ 0x140045428
 * Callers:
 *     DriverEntry @ 0x140044148 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     HviGetEnlightenmentInformation @ 0x14000E434 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x14000E474 (HviGetHypervisorFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x14000E4B4 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14000E4F4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     InitDriver @ 0x140023F88 (InitDriver.c)
 *     GetRegistryDwordValue @ 0x1400243B4 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x140024460 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x140024E00 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x140024E84 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1400250C8 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1400251B8 (ProcLibTraceThrottleStatesErrata.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400251E4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x14003A80C (HwDebugInitializeRegistryDebugRegisters.c)
 *     GetHiddenProcessorPresence @ 0x14003D310 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x14003D3BC (GetHvPpmCapabilities.c)
 *     CollectAcpiBiosInfo @ 0x1400444B0 (CollectAcpiBiosInfo.c)
 *     DisplayPPMFlags @ 0x140044618 (DisplayPPMFlags.c)
 *     PopulateEnergyEstimationModel @ 0x1400461E0 (PopulateEnergyEstimationModel.c)
 *     InitializeHvProcessorInfo @ 0x140046704 (InitializeHvProcessorInfo.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // edi
  int v5; // r9d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // r8d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // si
  char v16; // r15
  ULONG v17; // ecx
  const CHAR *v18; // r8
  const CHAR *v19; // r9
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  int v28; // edx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  const char *v31; // rax
  int v32; // edx
  int v33; // edx
  int v35; // [rsp+30h] [rbp-51h]
  int v36; // [rsp+38h] [rbp-49h]
  int v37; // [rsp+48h] [rbp-39h] BYREF
  int v38; // [rsp+4Ch] [rbp-35h] BYREF
  int v39; // [rsp+50h] [rbp-31h] BYREF
  int v40; // [rsp+54h] [rbp-2Dh] BYREF
  int v41; // [rsp+58h] [rbp-29h] BYREF
  int v42; // [rsp+5Ch] [rbp-25h] BYREF
  __int128 v43; // [rsp+60h] [rbp-21h] BYREF
  __int128 v44; // [rsp+70h] [rbp-11h]
  __int64 v45; // [rsp+80h] [rbp-1h]
  __int128 InputBuffer; // [rsp+88h] [rbp+7h] BYREF
  __int128 v47; // [rsp+98h] [rbp+17h] BYREF

  v42 = 0;
  v40 = 0;
  v39 = 0;
  v41 = 0;
  LODWORD(v45) = 0;
  InputBuffer = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, (ULONG)0, &dword_1400158F0, (ULONG)296);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 10;
LABEL_130:
      v8 = 3;
      goto LABEL_131;
    }
    return v4;
  }
  v6 = dword_1400158F0;
  if ( dword_1400158F0 != 87 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v7 = 11;
    v36 = 87;
LABEL_7:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      v6,
      v36);
    return (unsigned int)-1073741735;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400155D8);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 12;
LABEL_12:
    v8 = 4;
LABEL_131:
    v35 = v2;
    goto LABEL_132;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400155E8);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 13;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400155E0);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 14;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_140015C30);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 15;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1400155F0);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 16;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_140015C50);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 17;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_140015C28);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    v5 = 18;
    goto LABEL_12;
  }
  GetHvPpmCapabilities((bool *)&byte_140015F05, (bool *)&byte_140015F04, &byte_140015F02, (bool *)&byte_140015F03);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_140015C64 = 0;
  v10 = 2LL;
  qword_140015C58 = WorkItem;
  qword_140015620 = (__int64)&qword_140015618;
  qword_140015618 = (__int64)&qword_140015618;
  qword_140015630 = (__int64)&qword_140015628;
  qword_140015628 = (__int64)&qword_140015628;
  qword_140015640 = (__int64)&qword_140015638;
  qword_140015638 = (__int64)&qword_140015638;
  qword_140015650 = (__int64)&qword_140015648;
  qword_140015648 = (__int64)&qword_140015648;
  qword_140015660 = (__int64)&qword_140015658;
  qword_140015658 = (__int64)&qword_140015658;
  qword_140015C40 = (__int64)&qword_140015C38;
  qword_140015C38 = (__int64)&qword_140015C38;
  qword_140015F38 = (__int64)&qword_140015F30;
  qword_140015F30 = (__int64)&qword_140015F30;
  v11 = &unk_1400155F8;
  v12 = (char *)&unk_1400155F8;
  qword_140015F28 = 0LL;
  do
  {
    v11[1] = v12;
    *v11 = v12;
    v12 += 16;
    v11 += 2;
    --v10;
  }
  while ( v10 );
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v42);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1400155D0);
  GetRegistryQwordValue(v14, v13, &qword_1400155C8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v39);
  if ( v39 )
    byte_140015C80 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowUnvalidatedCppcQos",
    &v40);
  if ( v40 )
    byte_140015F40 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v41);
  qword_140015B20 = (__int64)RegisterKernelIdleStates;
  byte_140015F01 = 0;
  qword_140015B68 = (__int64)RegisterHiddenIdleStates;
  byte_140015B70 = v41 == 0;
  dword_140015B74 = 0;
  qword_140015B28 = (__int64)RegisterKernelPerfStates;
  qword_140015B38 = (__int64)RegisterKernelPerfFeedback;
  qword_140015B40 = (__int64)RegisterKernelLegacyPcc;
  qword_140015B30 = (__int64)RegisterKernelCap;
  qword_140015B48 = (__int64)RegisterKernelCpc;
  qword_140015B50 = (__int64)RegisterKernelPepPerf;
  qword_140015B58 = (__int64)GetNtProcessorNumber;
  qword_140015B60 = (__int64)RegisterKernelPackage;
  v38 = 0;
  HviGetHypervisorFeatures();
  v15 = 0;
  byte_140015B78 = 0;
  v16 = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v15 = (BYTE8(InputBuffer) & 0x20) != 0;
    byte_140015F01 = 1;
    HviGetEnlightenmentInformation();
    InputBuffer = 0LL;
    HviGetHypervisorFeatures();
    if ( (InputBuffer & 0x100000000000LL) != 0 && (v47 & 0x1000) == 0 )
    {
      if ( byte_140015F05 )
      {
        v4 = InitializeHvProcessorInfo(4096LL);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        if ( !byte_140015F03 )
        {
          dword_140015B74 = 1;
          qword_140015B28 = (__int64)RegisterHvPerfStatesCounters;
          qword_140015B38 = (__int64)RegisterHvPerfFeedbackCounters;
          qword_140015B40 = (__int64)RegisterHvLegacyPccCounters;
          qword_140015B48 = (__int64)RegisterHvCpcCounters;
        }
        qword_140015B68 = (__int64)RegisterHvIdleStates;
        if ( byte_140015F02 )
          byte_140015F01 = 0;
        else
          qword_140015B20 = (__int64)RegisterHvIdleStates;
        byte_140015F41 = 1;
        qword_140015B58 = (__int64)GetLpIndex;
        qword_140015B60 = (__int64)RegisterHvPackage;
      }
      dword_140015EF8 = GetHiddenProcessorPresence();
      goto LABEL_62;
    }
    v16 = 1;
    qword_140015B20 = (__int64)RegisterGuestIdleStates;
    if ( (v47 & 0x1000) != 0 && byte_140015F05 )
      qword_140015B38 = (__int64)RegisterHvPerfFeedbackCounters;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v38);
    if ( !v38 )
    {
      qword_140015B28 = (__int64)RegisterNoop;
      qword_140015B40 = (__int64)RegisterNoop;
      qword_140015B30 = (__int64)RegisterNoop;
      qword_140015B48 = (__int64)RegisterNoop;
      qword_140015B50 = (__int64)RegisterNoop;
      if ( v15 )
      {
        byte_140015B78 = 1;
      }
      else
      {
        qword_140015B38 = (__int64)RegisterNoop;
        qword_140015B60 = (__int64)RegisterNoop;
      }
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v43) >= 0 )
  {
    v6 = v43;
    if ( (_DWORD)v43 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 19;
      v36 = 1;
      goto LABEL_7;
    }
    qword_1400159A8 = *((_QWORD *)&v43 + 1);
    xmmword_1400159B0 = v44;
    qword_1400159C0 = v45;
  }
  dword_140015EFC = dword_1400155D4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_140015EF8 = 2;
LABEL_62:
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)ExAllocatePool2(64LL, 0x4000LL, 1919119952LL);
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    v2 = EtwRegister(
           &PPM_ETW_PROVIDER,
           (PETWENABLECALLBACK)ProcLibTraceControlCallback,
           0LL,
           (PREGHANDLE)&WPP_MAIN_CB.Queue);
    v4 = v2;
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 21;
        goto LABEL_130;
      }
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1400150F8);
      ProcLibEtwRegistered = 1;
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, (ULONG)16, 0LL, (ULONG)0);
      v4 = v2;
      if ( v2 >= 0 )
      {
        v2 = CollectAcpiBiosInfo(v17, v3, v18, v19);
        v4 = v2;
        if ( v2 >= 0 )
        {
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v37);
          v20 = v37 == 2;
          v37 = 1;
          v21 = 0;
          if ( v20 )
            v21 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v37);
          if ( v37 == 2 )
            v21 |= 2u;
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v37);
          if ( v37 == 2 )
            v21 |= 0x3300000u;
          v37 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v37);
          if ( v37 == 2 )
            v21 |= 0x80000000;
          v22 = v21;
          v23 = 0x180891100277LL;
          qword_1400155C8 = v21 | (unsigned __int64)qword_1400155C8;
          dword_140015B8C = v21;
          dword_140015770 = 1;
          dword_140015774 = 384;
          if ( v42 )
            v23 = 0x8181891500277LL;
          Globals[0] = v23 | 0x2010408800400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v25 = (char *)&unk_140015CD8;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v24) = i;
              PopulateEnergyEstimationModel(v24, v25);
              v25 += 256;
            }
          }
          *(_QWORD *)&v47 = 0LL;
          TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140015130);
          inited = InitDriver((__int64)&dword_140015770, &v47);
          v4 = inited;
          if ( inited >= 0 )
          {
            v29 = Globals[0] | v47;
            Globals[0] |= v47;
            if ( v16 )
            {
              qword_140015798 = 0LL;
              qword_1400157B0 = 0LL;
              qword_1400157B8 = 0LL;
              qword_1400157C0 = 0LL;
              qword_1400157E0 = 0LL;
              qword_1400157C8 = 0LL;
              qword_1400157D0 = 0LL;
              qword_1400157F0 = 0LL;
              qword_1400157F8 = 0LL;
              qword_140015800 = 0LL;
              byte_140015858 = 0;
              qword_140015860 = 0LL;
              qword_140015868 = 0LL;
              if ( !v15 )
                qword_1400157E8 = 0LL;
              v30 = v29 & 0xFFFE5FFFFFFFFFFFuLL;
              Globals[0] = v30;
              if ( !v38 )
                Globals[0] = v30 & 0xFFFFFFF7FFFFFFFFuLL;
            }
            if ( HviIsAnyHypervisorPresent() && HviIsHypervisorMicrosoftCompatible() )
              Globals[0] &= ~0x200000000uLL;
            if ( dword_140015B74 != 1 )
              Globals[0] &= ~0x400000000000uLL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v31 = "Disabled";
              if ( dword_140015B74 )
                v31 = "Enabled";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x19u,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                v31);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v32) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v32,
                    2,
                    26,
                    (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v32) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v32,
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
            if ( qword_1400155C8 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v33) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v33,
                  2,
                  28,
                  (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
              }
              DisplayPPMFlags(~qword_1400155C8, 5u);
              Globals[0] &= ~qword_1400155C8;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v33,
                2,
                29,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
            DisplayPPMFlags(Globals[0], 4u);
            if ( qword_1400157B0 && (dword_1400155D0 & 0x70000000) != 0 )
              qword_1400157B0 = 0LL;
            if ( _bittest64(Globals, 0x23u) )
              HwDebugInitializeRegistryDebugRegisters(0);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v28) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                3,
                24,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                inited);
            }
            memset(&dword_140015770, 0, 0x180uLL);
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = 23;
          goto LABEL_130;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 22;
        goto LABEL_130;
      }
    }
  }
  else
  {
    v4 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 20;
      v35 = -1073741670;
      v8 = 3;
LABEL_132:
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        v8,
        v5,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v35);
    }
  }
  return v4;
}

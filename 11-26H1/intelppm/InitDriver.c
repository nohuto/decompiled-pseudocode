/*
 * XREFs of InitDriver @ 0x14004A03C
 * Callers:
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400042D4 (HviIsAnyHypervisorPresent.c)
 *     PctGetIntelEsuType @ 0x14000523C (PctGetIntelEsuType.c)
 *     IsTurboModeSupported @ 0x140005C34 (IsTurboModeSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x140005CA0 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x140005D14 (IsHwpSupported.c)
 *     IsACountMCountSupported @ 0x140005DBC (IsACountMCountSupported.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     GetRegistryDwordValue @ 0x1400288D0 (GetRegistryDwordValue.c)
 *     IsHwpNativeInterruptSupported @ 0x14002950C (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029588 (IsHgsInterruptSupported.c)
 *     IsMonitorMWaitSupported @ 0x14002A11C (IsMonitorMWaitSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x14002AF9C (IsNonwrappingACountMCountSupported.c)
 *     IsRdtResourcePrioritizationSupported @ 0x14002AFE8 (IsRdtResourcePrioritizationSupported.c)
 *     GetRegistryDwordValueNoDefault @ 0x14004841C (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v6; // r14
  __int64 v7; // rdi
  char v8; // dl
  __int64 v9; // rdi
  bool v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch] BYREF
  int v13; // [rsp+28h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  v12 = 0;
  v11 = 0;
  v4 = 12223;
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
    v4 = 32703;
  HviIsAnyHypervisorPresent();
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  v5 = 572522496LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  v6 = 0;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *(_WORD *)(a1 + 32) = 12;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  *(_WORD *)(a1 + 34) = 32;
  if ( IsACountMCountSupported() )
  {
    v5 = 639631360LL;
    *(_QWORD *)(a1 + 120) = GV3HardwareFeedback;
    if ( IsNonwrappingACountMCountSupported() )
    {
      v6 = 1;
      v5 = 0x8026200000LL;
    }
  }
  *(_QWORD *)(a1 + 160) = GetCppcPerfFeedbackHandler;
  v14 = 0LL;
  GetCpuIdInfo(1u, &v14);
  if ( (HIDWORD(v14) & 0x400000) != 0 )
    *(_QWORD *)(a1 + 128) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 136) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
      *(_QWORD *)(a1 + 112) = GetGV3PerfStateFlags;
      *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
    }
    else
    {
      v6 = 0;
      *(_QWORD *)(a1 + 144) = SetTurboDisablePolicy;
    }
  }
  v7 = v5 | 0x400000;
  if ( !v6 )
    v7 = v5;
  v8 = IsMonitorMWaitSupported();
  if ( !v8 )
    v8 = byte_140019AD4;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v7 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 176) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 200) = GetHwpPerfControlHandler;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowVmPerfControl",
      &v12);
    if ( v12 )
    {
      if ( qword_1400195A8 && (unsigned __int8)qword_1400195A8() )
        v7 |= 0x400000000000uLL;
    }
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v7 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 184) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 192) = ReConnectHwpInterrupt;
    *(_QWORD *)(a1 + 208) = EnableHwpInterrupt;
  }
  if ( IsRdtResourcePrioritizationSupported(&v11) )
  {
    v7 |= 0x4000000000000uLL;
    *(_QWORD *)(a1 + 168) = GetRdtResourcePrioritizationRegister;
    if ( v11 )
      *(_QWORD *)(a1 + 216) = EnablePackageRdtResourcePrioritization;
  }
  *(_DWORD *)(a1 + 320) = 409;
  *(_QWORD *)(a1 + 328) = -65536LL;
  *(_DWORD *)(a1 + 336) = 410;
  *(_QWORD *)(a1 + 344) = 0LL;
  if ( qword_140019578 && qword_140019580 && qword_140019588 && qword_140019590 )
    v7 |= 0x200000000000uLL;
  if ( dword_140019AC8 == 2 )
  {
    v13 = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
                (__int64)L"Count",
                (__int64)&v13) >= 0 )
    {
      if ( v13 )
        *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
    }
  }
  *(_BYTE *)(a1 + 232) = 1;
  *(_QWORD *)(a1 + 240) = InitEnergyCounters;
  *(_QWORD *)(a1 + 248) = UnInitEnergyCounters;
  *(_QWORD *)(a1 + 352) = GetHwDebugRegisters;
  *(_QWORD *)(a1 + 360) = InitMeasRegisters;
  *(_QWORD *)(a1 + 368) = QueryProcMeasValues;
  v9 = v7 | 0x1000000000000LL;
  if ( (unsigned int)PctGetIntelEsuType() != 2 )
  {
    v9 |= 0x800000000000uLL;
    *(_QWORD *)(a1 + 280) = PctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 288) = PctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 296) = PctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 304) = PctGetPlatformCtr;
    *(_QWORD *)(a1 + 312) = PctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 376) = PctResetCountersOnD0;
  }
  *a2 |= v9;
  if ( qword_140019570 )
    qword_140019570(&dword_140019B18, 0LL);
  return 0LL;
}

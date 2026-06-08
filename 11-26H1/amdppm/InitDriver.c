/*
 * XREFs of InitDriver @ 0x140023F88
 * Callers:
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000E620 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     IsEnergyMsrSupported @ 0x1400232B8 (IsEnergyMsrSupported.c)
 *     IsPackageEnergyMsrSupported @ 0x1400232FC (IsPackageEnergyMsrSupported.c)
 *     IsRaplSupported @ 0x140023340 (IsRaplSupported.c)
 *     IsMonitorMWaitSupported @ 0x140023630 (IsMonitorMWaitSupported.c)
 *     IsACountMCountSupported @ 0x140024298 (IsACountMCountSupported.c)
 *     GetRegistryDwordValue @ 0x1400243B4 (GetRegistryDwordValue.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  int v6; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 88) = SetFFHPStateHidden;
  byte_140015F00 = 1;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v4 = 0x8024000000LL;
    *(_QWORD *)(a1 + 120) = ACountMCountHardwareFeedback;
  }
  *(_QWORD *)(a1 + 160) = GetCppcPerfFeedbackHandler;
  v9 = 0LL;
  v8 = 0LL;
  GetCpuIdInfo(0x80000000, &v9);
  if ( (unsigned int)v9 >= 7 )
  {
    GetCpuIdInfo(0x80000007, &v8);
    if ( (WORD6(v8) & 0x200) != 0 )
      *(_QWORD *)(a1 + 144) = SetPerformanceBoostMode;
  }
  if ( (unsigned __int8)IsACountMCountSupported() )
  {
    v8 = 0LL;
    GetCpuIdInfo(1u, &v8);
    if ( (v8 & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)((unsigned int)v8 >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  if ( IsMonitorMWaitSupported() || byte_140015F04 )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  GetCpuIdInfo(0x80000000, &v8);
  if ( (unsigned int)v8 >= 0x80000008 )
  {
    GetCpuIdInfo(0x80000008, &v9);
    if ( (DWORD1(v9) & 0x8000000) != 0 )
    {
      *(_QWORD *)(a1 + 200) = GetCppcRequestMsrPerfControlHandler;
      GetRegistryDwordValue(
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
        L"AllowVmPerfControl",
        &v6);
      if ( v6 )
      {
        if ( qword_1400159D8 && (unsigned __int8)qword_1400159D8() )
          v4 |= 0x400000000000uLL;
      }
    }
  }
  if ( qword_1400159A8 && qword_1400159B0 && qword_1400159B8 && qword_1400159C0 )
    v4 |= 0x200000000000uLL;
  *(_DWORD *)(a1 + 320) = -1073676190;
  *(_QWORD *)(a1 + 240) = InitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 248) = UnInitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 328) = -16LL;
  if ( IsRaplSupported() && IsEnergyMsrSupported() && IsPackageEnergyMsrSupported() )
  {
    v4 |= 0x800000000000uLL;
    GetRegistryDwordValue(
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      L"BlockCorePerfCounters",
      &v7);
    *(_BYTE *)(a1 + 272) = v7 == 0;
    *(_QWORD *)(a1 + 280) = AmdPctDiscoverPlatformCtrs;
    *(_QWORD *)(a1 + 288) = AmdPctSnapPlatformCtrs;
    *(_QWORD *)(a1 + 296) = AmdPctEnumPlatfromCtr;
    *(_QWORD *)(a1 + 304) = AmdPctGetPlatformCtr;
    *(_QWORD *)(a1 + 312) = AmdPctGetPlatformCtrInfo;
    *(_QWORD *)(a1 + 376) = AmdResetCountersOnD0;
  }
  *a2 |= v4;
  return 0LL;
}

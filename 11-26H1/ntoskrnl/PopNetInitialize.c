/*
 * XREFs of PopNetInitialize @ 0x140CDB1D8
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x140603270 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopNetSetConnectivityConstraint @ 0x14077D290 (PopNetSetConnectivityConstraint.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     PopNetPublishWnfStateUpdate @ 0x140B3C16C (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140B3FBDC (PopTraceStandbyConnectivityUpdate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdi
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // ecx
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( !a1 )
  {
    v1 = RtlLengthRequiredSid(6u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v1, 0x74654E50u);
    v3 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v4 < 0 )
    {
      ExFreePoolWithTag(v3, 0x74654E50u);
      return (unsigned int)v4;
    }
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopPdcDeviceListLock.SchedulerApc.NormalContext = v3;
    PopInitializeIRTimer(
      (__int64)&PopPdcDeviceListLock.SchedulerApc.SystemArgument2,
      (__int64)PopNetEvaluationTimerCallback,
      v5,
      (__int64)PopNetEvaluationWorkerCallback,
      ExplicitScope,
      0,
      2);
    PopInitializeIRTimer(
      (__int64)&PopPdcDeviceListLock.OtherOperationCount,
      (__int64)PopNetRefreshTimerCallback,
      v6,
      (__int64)PopNetRefreshTimerWorkerCallback,
      ExplicitScopea,
      5,
      2);
    return 0;
  }
  if ( a1 != 3 )
    return 0;
  if ( PopPdcDeviceListLock.SchedulerApcFill3[53] )
    PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
  if ( PopEnforceDisconnectedStandby )
  {
    v7 = 2;
LABEL_19:
    PopNetSetConnectivityConstraint(v7);
    goto LABEL_20;
  }
  if ( !*(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[48] )
  {
    if ( !*(_DWORD *)&stru_140E67200.WaitBlockFill11[88] || !stru_140E67200.WaitBlockFill6[80] )
    {
      v7 = 6;
      goto LABEL_19;
    }
    if ( !PopPdcDeviceListLock.SchedulerApcFill3[52] && !PopNetStandbyState )
      PopNetPublishWnfStateUpdate(1);
  }
LABEL_20:
  ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
  if ( PopEnforceDisconnectedStandby )
    return 0;
  if ( !*(_DWORD *)&stru_140E67200.WaitBlockFill11[88] )
    return 0;
  if ( !stru_140E67200.WaitBlockFill6[80] )
    return 0;
  v4 = PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopNetLowPowerEpochCallback,
         0LL,
         0LL);
  if ( v4 >= 0 )
    return 0;
  return (unsigned int)v4;
}

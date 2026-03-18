/*
 * XREFs of PopNetInitialize @ 0x140CD4E38
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x1406007C0 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopNetSetConnectivityConstraint @ 0x14077A360 (PopNetSetConnectivityConstraint.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     PopNetPublishWnfStateUpdate @ 0x140B39F5C (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140B3DAFC (PopTraceStandbyConnectivityUpdate.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int Handle; // [rsp+20h] [rbp-28h]
  int Handlea; // [rsp+20h] [rbp-28h]
  char v11; // [rsp+50h] [rbp+8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v11 = 0;
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
    *(_QWORD *)&stru_140F0C428.WaitBlockFill11[112] = v3;
    PopInitializeIRTimer(
      (__int64)&stru_140F0C428.RelativeTimerBias,
      (__int64)PopNetEvaluationTimerCallback,
      v5,
      (__int64)PopNetEvaluationWorkerCallback,
      Handle,
      0,
      2);
    PopInitializeIRTimer(
      (__int64)&stru_140F0C428.StackBase,
      (__int64)PopNetRefreshTimerCallback,
      v6,
      (__int64)PopNetRefreshTimerWorkerCallback,
      Handlea,
      5,
      2);
    return 0;
  }
  if ( a1 != 3 )
    return 0;
  if ( stru_140F0C428.WaitBlockFill6[108] )
    PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
  if ( PopEnforceDisconnectedStandby )
  {
    v7 = 2;
LABEL_19:
    PopNetSetConnectivityConstraint(v7);
    goto LABEL_20;
  }
  if ( !HIDWORD(stru_140F0C428.Header.WaitListHead.Blink) )
  {
    if ( !*(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] || !stru_140E66FF0.WaitBlockFill6[84] )
    {
      v7 = 6;
      goto LABEL_19;
    }
    if ( !stru_140F0C428.WaitBlockFill7[120] && !PopNetStandbyState )
      PopNetPublishWnfStateUpdate(1);
  }
LABEL_20:
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v11);
  if ( PopEnforceDisconnectedStandby )
    return 0;
  if ( !*(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] )
    return 0;
  if ( !stru_140E66FF0.WaitBlockFill6[84] )
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

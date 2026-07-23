/*
 * XREFs of PopPowerSourceChangeCallback @ 0x1404F6940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1407D9B50 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1407D9D50 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopBroadcastSessionInfo @ 0x140ABE614 (PopBroadcastSessionInfo.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // di
  __int64 v14; // r10
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned int v18; // ebp
  GUID v19; // xmm0
  unsigned int SessionId; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // rcx
  GUID v26; // [rsp+28h] [rbp-40h] BYREF
  int v27; // [rsp+38h] [rbp-30h]

  v27 = 0;
  v3 = *a1;
  v26 = 0LL;
  v7 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v7 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  v8 = *(_QWORD *)GUID_BATTERY_COUNT.Data4;
  v9 = 0;
  v10 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1;
  if ( v7 )
  {
    v11 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - v3;
    if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == v3 )
      v11 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
    if ( v11 )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v12 = 1LL;
  v13 = 0;
  if ( !PopLidOpened )
    v13 = PopConsoleExternalDisplayConnected == 0;
  v14 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v14 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v14 )
  {
    if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80] )
    {
      v15 = v13;
      if ( *a2 == 1 )
        v15 = 1;
      v13 = v15;
      if ( PopDisableDisplayBurstOnPowerSourceChange )
        v13 = 1;
    }
    v10 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1;
    v8 = *(_QWORD *)GUID_BATTERY_COUNT.Data4;
  }
  v16 = v10 - *a1;
  if ( !v16 )
    v16 = v8 - a1[1];
  if ( v16 )
  {
    if ( v13 )
    {
      v19 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
      v17 = 43;
      v18 = 28;
    }
    else
    {
      v19 = GUID_ACDC_POWER_SOURCE;
      v17 = 5;
      v18 = 5;
    }
    v26 = v19;
  }
  else
  {
    if ( !v13 )
      v26 = GUID_BATTERY_COUNT;
    v17 = v13 ? 46 : 16;
    v18 = v13 ? 49 : 16;
    if ( v13 )
      goto LABEL_33;
  }
  v27 = *a2;
  PopBroadcastSessionInfo(0LL, 20LL, &v26);
LABEL_33:
  SessionId = TtmiGetSessionId(v16, v12, v8);
  v23 = SessionId;
  if ( v13 )
  {
    PopAcquirePolicyLock(v22, v21);
    PopPowerAggregatorForceSessionSwitch(v17);
    PopReleasePolicyLock();
  }
  else if ( SessionId != -1 && (unsigned __int8)TtmIsEnabled() )
  {
    TtmNotifySessionDisplayBurst(v23, v18);
  }
  v24 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 )
    v24 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v24 )
    PopPowerAggregatorNotifyAcDcStateChange();
  return v9;
}

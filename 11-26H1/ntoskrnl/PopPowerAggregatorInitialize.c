/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140D0B4DC
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     KeInitializeIRTimer @ 0x140456C5C (KeInitializeIRTimer.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x14060B9E4 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  __int64 v1; // rsi
  char *v2; // rdi
  PVOID *p_SparePtr; // r14
  $9980CF14F186DF3A31E0C19662059F30 *v4; // r12
  __int64 v5; // r15
  size_t v6; // rax
  int Common; // edi
  struct _KLOCK_ENTRIES *v8; // r9
  __int128 Src; // [rsp+40h] [rbp-30h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-20h]
  __int128 v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF
  int v15; // [rsp+C0h] [rbp+50h] BYREF
  PVOID P; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0LL;
  P = 0LL;
  if ( !a1 )
  {
    PopPowerAggregatorLock.Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&PopPowerAggregatorLock.Header.Lock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset_0(&PopPowerAggregatorLock.Header.WaitListHead.Blink, 0, 0x15F8uLL);
    LODWORD(PopPowerAggregatorLock.InitialStack) = 1;
    qword_140F0EAE0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(PopPowerAggregatorLock.CycleTime) = 0;
    *(_QWORD *)&PopPowerAggregatorLock.SystemCallNumber = PopPowerAggregatorSessionSwitchWorker;
    qword_140F0EAE8 = 0LL;
    qword_140F0EAD0 = 0LL;
    PopPowerAggregatorLock.FirstArgument = 0LL;
    *(_QWORD *)&PopPowerAggregatorLock.WaitRegister.Flags = 0LL;
    WORD1(PopPowerAggregatorLock.TrapFrame) = 0;
    KiInitializeTimer2(
      (unsigned __int64)&PopPowerAggregatorLock.TrapFrame,
      (__int64)PopPowerAggregatorSessionSwitchTimerCallback,
      0LL,
      8);
    LOWORD(PopPowerAggregatorLock.Timer.DueTime.LowPart) = 0;
    PopPowerAggregatorLock.Timer.TimerListEntry.Blink = &PopPowerAggregatorLock.Timer.TimerListEntry;
    PopPowerAggregatorLock.Timer.TimerListEntry.Flink = &PopPowerAggregatorLock.Timer.TimerListEntry;
    v2 = (char *)&PopPowerAggregatorLock.LastXStateSaveDebugInfo + 2;
    BYTE2(PopPowerAggregatorLock.Timer.DueTime.u.LowPart) = 6;
    p_SparePtr = &PopPowerAggregatorLock.WaitBlock[0].SparePtr;
    PopPowerAggregatorLock.Timer.DueTime.HighPart = 0;
    v4 = &PopPowerAggregatorLock.512;
    v13 = 131080;
    v5 = 2LL;
    do
    {
      KeInitializeIRTimer(
        (__int64)p_SparePtr,
        (__int64)PopPowerAggregatorDozeTimerCallback,
        v1,
        (unsigned __int16 *)&v13,
        2);
      *(_QWORD *)(v2 - 154) = v1;
      *(_QWORD *)(v2 - 162) = PopPowerAggregatorDozeTimerWorker;
      *(_QWORD *)(v2 - 178) = 0LL;
      *((_WORD *)v2 - 1) = 0;
      ++v1;
      *v2 = 6;
      *(_DWORD *)(v2 + 2) = 1;
      *(_QWORD *)(v2 + 14) = v4;
      *(_QWORD *)(v2 + 6) = v2 + 6;
      p_SparePtr += 25;
      v2 += 200;
      v4 += 50;
      --v5;
    }
    while ( v5 );
    return 0;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
    {
      v14 = 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_BLUETOOTH_STANDBY_POLICY, (__int64)&v14);
      v15 = 1;
      ZwUpdateWnfStateData((__int64)WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v15);
      PopBSDiagSetTriageData(1, (struct _LIST_ENTRY *)&PopPowerAggregatorLock.Header.WaitListHead.Blink, 5624LL, v8);
    }
    return 0;
  }
  Src = 0x100000000uLL;
  v11 = L"Sleep Idle State Disabled";
  v12 = 0LL;
  v6 = 2 * wcslen(L"Sleep Idle State Disabled");
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  WORD4(Src) = v6;
  WORD5(Src) = v6 + 2;
  Common = PoCaptureReasonContext(&Src, 0LL, 0LL, 1, 0LL, &P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, (unsigned int **)&PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common >= 0 )
    {
      if ( !(unsigned int)Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline() )
        return 0;
      Common = PoRegisterPowerSettingCallback(
                 0LL,
                 &GUID_LIDCLOSE_ACTION,
                 (PPOWER_SETTING_CALLBACK)PopPowerAggregatorPowerSettingCallback,
                 0LL,
                 0LL);
      if ( Common >= 0 )
        return 0;
    }
    else
    {
      PoDestroyReasonContext(P);
    }
  }
  return (unsigned int)Common;
}

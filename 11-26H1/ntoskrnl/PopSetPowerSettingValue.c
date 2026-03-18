/*
 * XREFs of PopSetPowerSettingValue @ 0x140A3E538
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A3D5AC (PopPdcIdleResiliencyCallback.c)
 *     PopSetNewPolicyValue @ 0x140A3DED8 (PopSetNewPolicyValue.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     PopEvaluateGlobalUserStatus @ 0x140A3ECC8 (PopEvaluateGlobalUserStatus.c)
 *     PopNotifyLidStateChange @ 0x140B51558 (PopNotifyLidStateChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403B4070 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403B4260 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopGetListHead @ 0x140A3E4C8 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x140A3E980 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 *     PopValidatePowerSettingData @ 0x140A3EA58 (PopValidatePowerSettingData.c)
 *     PopArePowerSettingsEqual @ 0x140A40118 (PopArePowerSettingsEqual.c)
 *     PopUnreferencePowerSetting @ 0x140A4045C (PopUnreferencePowerSetting.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetPowerSettingValue(GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  SIZE_T v5; // r15
  bool v6; // bp
  _DWORD *v9; // r14
  void *v10; // r13
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // r8
  struct _KTHREAD *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // edi
  char v17; // si
  _QWORD *v19; // rsi
  char v20; // r12
  __int64 i; // r15
  _DWORD *v22; // rax
  signed __int32 v23; // eax
  struct _LIST_ENTRY *j; // rax
  __int64 Pool2; // rax
  volatile unsigned int *ListHead; // rax
  volatile unsigned int *v27; // r10
  struct _KTHREAD *OtherTransferCount; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  __int64 *v31; // rax
  char IsSessionSpecific; // [rsp+41h] [rbp-57h]
  char v33; // [rsp+42h] [rbp-56h]
  char v34; // [rsp+43h] [rbp-55h]
  void *Source2; // [rsp+50h] [rbp-48h]
  __int64 PowerSettingConfiguration; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v6 = 0;
  v33 = 0;
  v34 = 0;
  v9 = 0LL;
  Source2 = (void *)ExAllocatePool2(0x100uLL);
  v10 = Source2;
  if ( !Source2 )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(Source2, Src, (unsigned int)v5);
  PopValidatePowerSettingData(a1, (unsigned int)v5, Source2);
  IsSessionSpecific = PopStateIsSessionSpecific(a1);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, a2);
  v14 = PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    PowerSettingConfiguration = Pool2;
    v14 = Pool2;
    if ( !Pool2 )
    {
      v16 = -1073741670;
      v17 = 0;
      goto LABEL_9;
    }
    *(GUID *)(Pool2 + 32) = *a1;
    ListHead = PopGetListHead(a1);
    v12 = (struct _LIST_ENTRY *)(v14 + 16);
    v27 = ListHead;
    *(_QWORD *)(v14 + 24) = v14 + 16;
    *(_QWORD *)(v14 + 16) = v14 + 16;
    if ( !IsSessionSpecific )
    {
      OtherTransferCount = (struct _KTHREAD *)stru_140F10828.OtherTransferCount;
      while ( OtherTransferCount != (struct _KTHREAD *)&stru_140F10828.OtherTransferCount )
      {
        v13 = OtherTransferCount;
        OtherTransferCount = *(struct _KTHREAD **)&OtherTransferCount->Header.Lock;
        v11 = (struct _LIST_ENTRY *)(*(unsigned __int64 *)((char *)&v13->QuantumTarget + 4) - *(_QWORD *)&a1->Data1);
        if ( !v11 )
          v11 = (struct _LIST_ENTRY *)(*(char **)((char *)&v13->InitialStack + 4) - *(_QWORD *)a1->Data4);
        if ( !v11 )
        {
          Flink = OtherTransferCount->Header.WaitListHead.Flink;
          if ( (struct _KTHREAD *)Flink->Flink != OtherTransferCount )
            goto LABEL_60;
          Blink = Flink->Blink;
          if ( Blink->Flink != Flink )
            goto LABEL_60;
          OtherTransferCount->Header.WaitListHead.Flink = Blink;
          Blink->Flink = (struct _LIST_ENTRY *)OtherTransferCount;
          v11 = *(struct _LIST_ENTRY **)(v14 + 24);
          if ( v11->Flink != v12 )
            goto LABEL_60;
          Flink->Flink = v12;
          Flink->Blink = v11;
          v11->Flink = Flink;
          *(_QWORD *)(v14 + 24) = Flink;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v14 + 48) = a2;
    v31 = (__int64 *)*((_QWORD *)v27 + 1);
    if ( (volatile unsigned int *)*v31 != v27 )
LABEL_60:
      __fastfail(3u);
    *(_QWORD *)(v14 + 8) = v31;
    *(_QWORD *)v14 = v27;
    *v31 = v14;
    *((_QWORD *)v27 + 1) = v14;
    v33 = 1;
    if ( stru_140E66FF0.Padding[2] )
      v34 = 1;
  }
  v15 = *(_QWORD *)(v14 + 8LL * a3 + 64);
  if ( !v15 || *(_DWORD *)(v15 + 4) != (_DWORD)v5 || RtlCompareMemory((const void *)(v15 + 12), Source2, v5) != v5 )
  {
    v19 = (_QWORD *)(v14 + 64);
    v20 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != a3 )
      {
        if ( !v9 && (unsigned __int8)PopArePowerSettingsEqual(*v19, Source2, a4) )
        {
          v9 = (_DWORD *)*v19;
          ++*(_DWORD *)*v19;
        }
        if ( *v19 == v15 )
          v20 = 1;
      }
      ++v19;
    }
    v16 = 0;
    if ( !v9 )
    {
      v22 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v9 = v22;
      if ( !v22 )
      {
        v16 = -1073741670;
        goto LABEL_7;
      }
      v22[1] = a4;
      *v22 = 1;
      do
        v23 = _InterlockedIncrement((_DWORD *)&stru_140E66FF0.Padding[1] + 1);
      while ( !v23 );
      v9[2] = v23;
      memmove(v9 + 3, Source2, a4);
    }
    if ( v15 )
    {
      if ( !v20 )
      {
        v11 = (struct _LIST_ENTRY *)(PowerSettingConfiguration + 16);
        for ( j = *(struct _LIST_ENTRY **)(PowerSettingConfiguration + 16); j != v11; j = j->Flink )
        {
          if ( j[4].Blink == (struct _LIST_ENTRY *)v15 )
            j[4].Blink = 0LL;
        }
      }
      PopUnreferencePowerSetting(v15, v11, v12, v13);
    }
    v6 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140F106CC == a3 )
      v6 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    goto LABEL_8;
  }
  v16 = 0;
LABEL_7:
  v6 = 0;
  v17 = 0;
LABEL_8:
  v10 = Source2;
LABEL_9:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  if ( v33 )
    PoRegisterPowerSettingCallback(0LL, a1, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( HIDWORD(stru_140F10070.Spare35[0]) >= 3 )
  {
    if ( v34 )
      ZwUpdateWnfStateData((__int64)&stru_140E66FF0.Padding[2], 0LL);
    if ( v6 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u);
    }
    if ( v17 )
      PopSetNotificationWork(0x80u);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v16;
}

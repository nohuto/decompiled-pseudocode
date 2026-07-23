/*
 * XREFs of PopSetPowerSettingValue @ 0x1409F9F58
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409F8FCC (PopPdcIdleResiliencyCallback.c)
 *     PopSetNewPolicyValue @ 0x1409F98F8 (PopSetNewPolicyValue.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409F99F8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopSetSessionUserStatus @ 0x1409F9DBC (PopSetSessionUserStatus.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409FA6E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopNotifyLidStateChange @ 0x140B53DF8 (PopNotifyLidStateChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403BDF7C (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403BE16C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopGetListHead @ 0x1409F9EE8 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1409FA3A0 (PopStateIsSessionSpecific.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 *     PopValidatePowerSettingData @ 0x1409FA478 (PopValidatePowerSettingData.c)
 *     PopArePowerSettingsEqual @ 0x1409FBB38 (PopArePowerSettingsEqual.c)
 *     PopUnreferencePowerSetting @ 0x1409FBE7C (PopUnreferencePowerSetting.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetPowerSettingValue(GUID *a1, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  SIZE_T v5; // r15
  bool v6; // bp
  _DWORD *v9; // r14
  void *v10; // r13
  __int64 *v11; // rdx
  __int64 *v12; // r8
  __int64 *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // edi
  char v17; // si
  _QWORD *v19; // rsi
  char v20; // r12
  __int64 i; // r15
  _DWORD *v22; // rax
  signed __int32 v23; // eax
  __int64 *j; // rax
  __int64 Pool2; // rax
  PVOID *ListHead; // rax
  PVOID *v27; // r10
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 **v30; // rdx
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
  ExAcquireFastMutex(&PopSettingLock);
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
    v12 = (__int64 *)(v14 + 16);
    v27 = ListHead;
    *(_QWORD *)(v14 + 24) = v14 + 16;
    *(_QWORD *)(v14 + 16) = v14 + 16;
    if ( !IsSessionSpecific )
    {
      v28 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v28 != &PopRegisteredPowerSettingCallbacks )
      {
        v13 = v28;
        v28 = (__int64 *)*v28;
        v11 = (__int64 *)(*(__int64 *)((char *)v13 + 36) - *(_QWORD *)&a1->Data1);
        if ( !v11 )
          v11 = (__int64 *)(*(__int64 *)((char *)v13 + 44) - *(_QWORD *)a1->Data4);
        if ( !v11 )
        {
          v29 = (__int64 **)v28[1];
          if ( *v29 != v28 )
            goto LABEL_60;
          v30 = (__int64 **)v29[1];
          if ( *v30 != (__int64 *)v29 )
            goto LABEL_60;
          v28[1] = (__int64)v30;
          *v30 = v28;
          v11 = *(__int64 **)(v14 + 24);
          if ( (__int64 *)*v11 != v12 )
            goto LABEL_60;
          *v29 = v12;
          v29[1] = v11;
          *v11 = (__int64)v29;
          *(_QWORD *)(v14 + 24) = v29;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v14 + 48) = a2;
    v31 = (__int64 *)v27[1];
    if ( (PVOID *)*v31 != v27 )
LABEL_60:
      __fastfail(3u);
    *(_QWORD *)(v14 + 8) = v31;
    *(_QWORD *)v14 = v27;
    *v31 = v14;
    v27[1] = (PVOID)v14;
    v33 = 1;
    if ( qword_140E676F8.Data[0] || qword_140E676F8.Data[1] )
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
        v23 = _InterlockedIncrement(&dword_140E67700);
      while ( !v23 );
      v9[2] = v23;
      memmove(v9 + 3, Source2, a4);
    }
    if ( v15 )
    {
      if ( !v20 )
      {
        v11 = (__int64 *)(PowerSettingConfiguration + 16);
        for ( j = *(__int64 **)(PowerSettingConfiguration + 16); j != v11; j = (__int64 *)*j )
        {
          if ( j[9] == v15 )
            j[9] = 0LL;
        }
      }
      PopUnreferencePowerSetting(v15, v11, v12, v13);
    }
    v6 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == a3 )
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
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v33 )
    PoRegisterPowerSettingCallback(0LL, a1, PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v34 )
      ZwUpdateWnfStateData(&qword_140E676F8, 0LL, 0, 0LL, 0LL, 0, 0);
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

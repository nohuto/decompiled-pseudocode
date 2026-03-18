/*
 * XREFs of PopFilterCapabilities @ 0x140944D5C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1407DB808 (PoTtmInitiatePowerStateTransition.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140943D98 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifyPowerActionPolicy @ 0x140944AA0 (PopVerifyPowerActionPolicy.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IopAppendLegacyVeto @ 0x1407B21C4 (IopAppendLegacyVeto.c)
 *     PopCheckDisabledState @ 0x140945078 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409450A8 (PopRemoveReasonRecordByReasonCode.c)
 *     PopGetReasonListByReasonCode @ 0x1409450F4 (PopGetReasonListByReasonCode.c)
 *     PopLogDisabledSleepReason @ 0x14094512C (PopLogDisabledSleepReason.c)
 *     IopGetLegacyVetoListDrivers @ 0x14094522C (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1409454B0 (IopGetLegacyVetoListDeviceNode.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  bool v3; // zf
  char v4; // di
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rcx
  char v10; // r9
  char v11; // r10
  unsigned int v12; // r11d
  _DWORD *Pool2; // rax
  _QWORD *IptSaveArea; // rcx
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // rcx
  const void *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h]
  int v24; // [rsp+3Ch] [rbp-14h]
  int *v25; // [rsp+40h] [rbp-10h]
  int *v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+88h] [rbp+38h] BYREF
  PVOID P; // [rsp+90h] [rbp+40h] BYREF

  v3 = PnPInitialized == 0;
  v4 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  v24 = 0;
  v5 = *(_OWORD *)(a1 + 16);
  HIDWORD(v21[0]) = 0;
  P = 0LL;
  *(_OWORD *)(a2 + 16) = v5;
  v28 = 0;
  v6 = *(_OWORD *)(a1 + 32);
  v27 = 0;
  *(_OWORD *)(a2 + 32) = v6;
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( v3 )
    goto LABEL_11;
  v23 = 0;
  p_P = &P;
  v25 = &v28;
  v26 = &v27;
  IopGetLegacyVetoListDrivers(&p_P);
  v7 = v27;
  if ( v27 < 0 )
    goto LABEL_42;
  if ( !v28 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &p_P);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
    v7 = v27;
  }
  if ( v7 < 0 )
    goto LABEL_42;
  if ( v28 )
  {
    LODWORD(v21[0]) = 0x20000;
    v21[1] = &word_140B814F0;
    IopAppendLegacyVeto((const void ***)&p_P, v21);
    v7 = v27;
  }
  if ( v7 < 0 )
  {
LABEL_42:
    v9 = (char *)P;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v7 = v27;
      v9 = 0LL;
      P = 0LL;
    }
  }
  else
  {
    v9 = (char *)P;
  }
  if ( v7 < 0 )
    goto LABEL_11;
  if ( v28 )
  {
    v4 = 1;
    v16 = 0LL;
    v17 = v9;
    if ( *(_WORD *)v9 )
    {
      do
      {
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)&v17[2 * v18] );
        v16 += 2 * v18 + 2;
        v17 = &v9[v16];
      }
      while ( *(_WORD *)&v9[v16] );
    }
    PopLogSleepDisabled(4LL, 31LL, v9, v16 + 2);
    v9 = (char *)P;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( !v4 )
LABEL_11:
    PopRemoveReasonRecordByReasonCode(4LL);
  v27 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v27);
  if ( v27 == 2 )
  {
    if ( !PopGetReasonListByReasonCode(7LL) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        Pool2[6] = 7;
        *((_BYTE *)Pool2 + 22) = 1;
        IptSaveArea = stru_140F10070.IptSaveArea;
        if ( *(struct _KTHREAD **)stru_140F10070.IptSaveArea != (struct _KTHREAD *)&stru_140F10070.SystemAffinityTokenListHead )
          goto LABEL_52;
        *(_QWORD *)Pool2 = &stru_140F10070.SystemAffinityTokenListHead;
        *((_QWORD *)Pool2 + 1) = IptSaveArea;
        *IptSaveArea = Pool2;
        stru_140F10070.IptSaveArea = Pool2;
      }
    }
  }
  else
  {
    PopRemoveReasonRecordByReasonCode(7LL);
  }
  if ( !byte_140F106DD )
  {
    PopRemoveReasonRecordByReasonCode(14LL);
    goto LABEL_16;
  }
  if ( !PopGetReasonListByReasonCode(14LL) )
  {
    v19 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( v19 )
    {
      v19[6] = 14;
      *((_WORD *)v19 + 8) = 257;
      *((_BYTE *)v19 + 18) = 1;
      v20 = stru_140F10070.IptSaveArea;
      if ( *(struct _KTHREAD **)stru_140F10070.IptSaveArea == (struct _KTHREAD *)&stru_140F10070.SystemAffinityTokenListHead )
      {
        *(_QWORD *)v19 = &stru_140F10070.SystemAffinityTokenListHead;
        *((_QWORD *)v19 + 1) = v20;
        *v20 = v19;
        stru_140F10070.IptSaveArea = v19;
        goto LABEL_16;
      }
LABEL_52:
      __fastfail(3u);
    }
  }
LABEL_16:
  PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL) )
    *(_BYTE *)(a2 + 17) = 0;
  if ( !*(_BYTE *)(a2 + 5) || (v11 = v10) == 0 )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v11 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v12;
}

/*
 * XREFs of PopFilterCapabilities @ 0x1409C06CC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1407DF818 (PoTtmInitiatePowerStateTransition.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x1409BF708 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifyPowerActionPolicy @ 0x1409C0410 (PopVerifyPowerActionPolicy.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopAppendLegacyVeto @ 0x1407B5224 (IopAppendLegacyVeto.c)
 *     PopCheckDisabledState @ 0x1409C09E8 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409C0A18 (PopRemoveReasonRecordByReasonCode.c)
 *     PopGetReasonListByReasonCode @ 0x1409C0A64 (PopGetReasonListByReasonCode.c)
 *     PopLogDisabledSleepReason @ 0x1409C0A9C (PopLogDisabledSleepReason.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1409C0E20 (IopGetLegacyVetoListDeviceNode.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  _QWORD *FirstArgument; // rcx
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
    v21[1] = &word_140B8A320;
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
        FirstArgument = PpmIdlePolicyLock.FirstArgument;
        if ( *(struct _KTHREAD **)PpmIdlePolicyLock.FirstArgument != (struct _KTHREAD *)&PpmIdlePolicyLock.SystemCallNumber )
          goto LABEL_52;
        *(_QWORD *)Pool2 = &PpmIdlePolicyLock.SystemCallNumber;
        *((_QWORD *)Pool2 + 1) = FirstArgument;
        *FirstArgument = Pool2;
        PpmIdlePolicyLock.FirstArgument = Pool2;
      }
    }
  }
  else
  {
    PopRemoveReasonRecordByReasonCode(7LL);
  }
  if ( !PpmIdlePolicyLock.PriorityFloorCounts[5] )
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
      v20 = PpmIdlePolicyLock.FirstArgument;
      if ( *(struct _KTHREAD **)PpmIdlePolicyLock.FirstArgument == (struct _KTHREAD *)&PpmIdlePolicyLock.SystemCallNumber )
      {
        *(_QWORD *)v19 = &PpmIdlePolicyLock.SystemCallNumber;
        *((_QWORD *)v19 + 1) = v20;
        *v20 = v19;
        PpmIdlePolicyLock.FirstArgument = v19;
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

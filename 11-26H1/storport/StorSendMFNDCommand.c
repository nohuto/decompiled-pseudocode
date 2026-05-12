/*
 * XREFs of StorSendMFNDCommand @ 0x140194890
 * Callers:
 *     StorGetAndLogMFNDQoSStatistics @ 0x1400C9C9C (StorGetAndLogMFNDQoSStatistics.c)
 *     StorGetAndLogNVMeDevicePanicWorkRoutine @ 0x1400C9FF0 (StorGetAndLogNVMeDevicePanicWorkRoutine.c)
 *     StorGetAndLogNVMeErrorInfoWorkRoutine @ 0x1400CA1C0 (StorGetAndLogNVMeErrorInfoWorkRoutine.c)
 *     StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400CA390 (StorGetAndLogNVMeSmartHealthInfoWorkRoutine.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400CD7C8 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1400CD8C8 (StorSetMFNDOperationPrivilege.c)
 *     StorGetMFNDCapabilities @ 0x140191E14 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x140192010 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14019214C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x140192814 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x140192A90 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x140192C54 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x1401932C0 (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x1401935F4 (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140193BD4 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140193EE4 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1401944CC (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x140194654 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x14019473C (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x140194E40 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x140195058 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x1401954C0 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140195D18 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019627C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidBuildMdlForXrb @ 0x14003C178 (RaidBuildMdlForXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140059BBC (StorSetIoGatewayEmptyEvent.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400AEA18 (GatewayWaitForForwardIoWithTimeout.c)
 */

__int64 __fastcall StorSendMFNDCommand(
        __int64 a1,
        void *a2,
        __int64 a3,
        ULONG a4,
        _OWORD *a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        unsigned int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v12; // ecx
  __int64 v14; // r14
  __int64 v15; // r15
  int v16; // esi
  union _LARGE_INTEGER v17; // rdx
  __int64 v18; // rax
  int v19; // r13d
  int v20; // r12d
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 Srb; // rbp
  __int64 v24; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // esi
  char v30; // r12
  union _LARGE_INTEGER v31; // r13
  unsigned int LockArray_high; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  NTSTATUS v39; // eax
  bool v40; // zf
  __int64 v41; // rax
  int v43; // eax
  void *v44; // rcx
  KIRQL v45; // bl
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // [rsp+30h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-80h]
  union _LARGE_INTEGER v51; // [rsp+40h] [rbp-78h] BYREF
  __int64 v52; // [rsp+48h] [rbp-70h]
  struct _KEVENT Event; // [rsp+50h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+C0h] [rbp+8h] BYREF
  void *v55; // [rsp+C8h] [rbp+10h]
  __int64 v56; // [rsp+D0h] [rbp+18h]
  ULONG v57; // [rsp+D8h] [rbp+20h]

  v57 = a4;
  v56 = a3;
  v55 = a2;
  v51.QuadPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = *(_DWORD *)a1;
  v52 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( v12 == 1314275652 )
  {
    v17.QuadPart = a1 + 176;
  }
  else
  {
    v17.QuadPart = a1 + 384;
    if ( v12 != 1094997074 )
      v17.QuadPart = 0LL;
  }
  v18 = *(_QWORD *)(a1 + 608);
  Timeout = v17;
  if ( *(int *)(v18 + 184) >= 0 || !v17.QuadPart || *(_BYTE *)(v17.QuadPart + 98) != 1 )
    return 3221225659LL;
  v19 = a7 & 1;
  v20 = a7 & 2;
  v49 = a9;
  if ( (a7 & 0x10) != 0 )
  {
    a6 = 1;
    if ( !a9 )
      v49 = *(_DWORD *)(a1 + 4188);
  }
  else
  {
    a6 = 0;
  }
  if ( ((_BYTE)v19 || (a7 & 2) != 0) && (!a2 || !a4) )
    return 3221225485LL;
  v21 = 316LL;
  if ( v12 != 1314275652 )
    v21 = 524LL;
  v22 = (*(_DWORD *)(v21 + a1) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 10, 1, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v22 + 1200, v24, (_QWORD *)a1);
  v50 = ContiguousIoResources;
  v27 = ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v29 = -1073741801;
    goto LABEL_86;
  }
  v14 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v26, 0, 0LL);
  if ( (_BYTE)v19 || v20 )
  {
    v28 = v56;
    if ( v56 )
    {
      *(_BYTE *)(v14 + 16) &= ~1u;
      *(_QWORD *)(v14 + 104) = v28;
      goto LABEL_26;
    }
    v29 = RaidBuildMdlForXrb(v14, v55, v57);
    if ( v29 >= 0 )
    {
LABEL_26:
      v16 = v19 << 6;
      if ( v20 )
        v16 |= 0x80u;
      goto LABEL_28;
    }
LABEL_86:
    v31 = Timeout;
    goto LABEL_48;
  }
LABEL_28:
  v30 = a8;
  if ( !a8 )
  {
    v16 |= 0x102u;
    if ( *(_BYTE *)(Srb + 2) == 40 )
      *(_WORD *)(Srb + 38) = 32;
    else
      *(_BYTE *)(Srb + 9) = 32;
  }
  RaSrbSetMiniportContext((int *)a1, Srb, v27 + 1200);
  if ( v30 )
    *(_BYTE *)(v14 + 17) |= 8u;
  v31 = Timeout;
  if ( *(_BYTE *)(Timeout.QuadPart + 98) == 1 )
  {
    v15 = Srb + *(unsigned int *)(Srb + 120);
    *(_DWORD *)(Srb + 20) = 10;
    *(_DWORD *)(Srb + 24) = v16;
    *(_BYTE *)(Srb + 3) = 0;
    v40 = *(_DWORD *)a1 == 1094997074;
    v52 = Srb;
    if ( v40 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high));
      v33 = **(_QWORD **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high);
      *(_DWORD *)(Srb + 44) = HIDWORD(v33);
    }
    else
    {
      LODWORD(v33) = -1;
    }
    *(_DWORD *)(Srb + 32) = v33;
    *(_QWORD *)(Srb + 64) = v55;
    *(_DWORD *)(Srb + 60) = v57;
    v34 = *(_DWORD *)(a1 + 4188);
    *(_QWORD *)(Srb + 96) = v14;
    if ( v49 > v34 )
      v34 = v49;
    *(_DWORD *)(Srb + 40) = v34;
    *(_QWORD *)(v14 + 168) = Srb;
    *(_QWORD *)(v14 + 184) = *(_QWORD *)(Srb + 64);
    *(_QWORD *)(v14 + 176) = *(_QWORD *)(Srb + 96);
    *(_WORD *)(v15 + 82) = a7;
    v35 = a5;
    *(_DWORD *)v15 = 67;
    *(_DWORD *)(v15 + 4) = 100;
    *(_BYTE *)(v15 + 80) = 1;
    v36 = v35[1];
    *(_OWORD *)(v15 + 16) = *v35;
    v37 = v35[2];
    *(_OWORD *)(v15 + 32) = v36;
    v38 = v35[3];
    *(_OWORD *)(v15 + 48) = v37;
    *(_OWORD *)(v15 + 64) = v38;
  }
  KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v14, (__int64)RaidXrbSignalCompletion);
  if ( !v30 )
    goto LABEL_91;
  RaidPauseAdapterQueue(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 1024), &Event);
  Timeout.QuadPart = -1200000000LL;
  v39 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
  v40 = v39 == 0;
  if ( v39 >= 0 )
    v40 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 0x1D4C0u) == 0;
  if ( v40 )
  {
LABEL_91:
    if ( *(_QWORD *)(a1 + 5024) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4434) )
      v43 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v14);
    else
      v43 = RaidAdapterPostScatterGatherExecute(a1, v14);
    v29 = v43;
    if ( v43 >= 0 )
    {
      v44 = (void *)(v14 + 664);
      if ( a6 )
      {
        v51.QuadPart = -10000000LL * v49;
        v29 = KeWaitForSingleObject(v44, Executive, 0, 0, &v51);
      }
      else
      {
        KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
      }
      if ( v29 == 258 )
        v29 = -1073741643;
      else
        v29 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
    }
    if ( v30 )
    {
      v45 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1, v46, v47, v48);
      KeLowerIrql(v45);
    }
    if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v14 + 748));
      *(_BYTE *)(v14 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 5024) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    if ( v29 >= 0 && a10 )
    {
      v27 = v50;
      if ( v15 )
        *a10 = *(_DWORD *)(v15 + 96);
      goto LABEL_48;
    }
  }
  else
  {
    v29 = -1073741823;
  }
  v27 = v50;
LABEL_48:
  if ( a11 && v15 )
    *a11 = *(unsigned __int16 *)(v15 + 86);
  if ( a6 && v29 == -1073741643 )
    RaidAdapterResetBusNoLock(a1);
  if ( v27 )
  {
    RaidXrbDeallocateResources(v14, 0);
    StorFreeContiguousIoResources(a1, v27);
  }
  if ( Srb )
  {
    if ( (*(_BYTE *)(v31.QuadPart + 98) & 1) != 0 )
    {
      v41 = v52;
      if ( !v52 )
        v41 = Srb;
      *(_QWORD *)(v41 + 80) = 0LL;
      *(_QWORD *)(v41 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v29;
}

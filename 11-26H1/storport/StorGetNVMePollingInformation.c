/*
 * XREFs of StorGetNVMePollingInformation @ 0x140097348
 * Callers:
 *     StorCheckForNvmeTimeoutUpdates @ 0x140096B64 (StorCheckForNvmeTimeoutUpdates.c)
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
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidBuildMdlForXrb @ 0x14003C178 (RaidBuildMdlForXrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall StorGetNVMePollingInformation(__int64 a1, void *a2)
{
  __int64 v2; // r14
  int v5; // ecx
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 Srb; // rsi
  __int64 v10; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // ebx
  __int64 v16; // r15
  unsigned int LockArray_high; // eax
  __int64 v18; // rdx
  int v19; // eax

  v2 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *(_DWORD *)a1;
  if ( v5 == 1314275652 )
  {
    v6 = a1 + 274;
  }
  else
  {
    v6 = a1 + 482;
    if ( v5 != 1094997074 )
      v6 = 98LL;
  }
  v7 = 316LL;
  if ( v5 != 1314275652 )
    v7 = 524LL;
  v8 = (*(_DWORD *)(v7 + a1) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 10, *(_BYTE *)v6, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v8 + 1200, v10, (_QWORD *)a1);
  v13 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v14 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v12, 0, 0LL);
    v15 = RaidBuildMdlForXrb(v14, a2, 0x1000u);
    if ( v15 >= 0 )
    {
      RaSrbSetMiniportContext((int *)a1, Srb, v13 + 1200);
      *(_BYTE *)(v14 + 17) |= 8u;
      if ( *(_BYTE *)v6 == 1 )
      {
        v16 = Srb + *(unsigned int *)(Srb + 120);
        *(_DWORD *)(Srb + 20) = 10;
        *(_DWORD *)(Srb + 24) = 322;
        v2 = Srb;
        *(_BYTE *)(Srb + 3) = 0;
        if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high), 1u);
          v18 = **(_QWORD **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high);
          *(_DWORD *)(Srb + 44) = HIDWORD(v18);
        }
        else
        {
          LODWORD(v18) = -1;
        }
        *(_DWORD *)(Srb + 32) = v18;
        *(_QWORD *)(Srb + 64) = a2;
        *(_DWORD *)(Srb + 60) = 4096;
        *(_DWORD *)(Srb + 40) = *(_DWORD *)(a1 + 4188);
        *(_QWORD *)(Srb + 96) = v14;
        *(_QWORD *)(v14 + 168) = Srb;
        *(_QWORD *)(v14 + 184) = *(_QWORD *)(Srb + 64);
        *(_QWORD *)(v14 + 176) = *(_QWORD *)(Srb + 96);
        *(_BYTE *)(v16 + 56) = -48;
        *(_DWORD *)(v16 + 56) &= 0xFFFFF8FF;
        *(_BYTE *)(v16 + 80) = 1;
        *(_WORD *)(v16 + 82) = 1;
        *(_DWORD *)(v16 + 20) = 0;
        *(_BYTE *)(v16 + 16) = 10;
        if ( *(_BYTE *)(Srb + 2) == 40 )
          *(_WORD *)(Srb + 38) = 32;
        else
          *(_BYTE *)(Srb + 9) = 32;
        KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
        *(_QWORD *)(v14 + 656) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 4434) )
          v19 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v14);
        else
          v19 = RaidAdapterPostScatterGatherExecute(a1, v14);
        v15 = v19;
        if ( v19 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
          v15 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
          if ( v15 >= 0 && *(_DWORD *)(v16 + 96) != 1313882949 )
            v15 = -1073741637;
        }
        if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v14 + 748));
          *(_BYTE *)(v14 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
      else
      {
        v15 = -1073741637;
      }
    }
    goto LABEL_34;
  }
  v14 = 0LL;
  v15 = -1073741801;
  if ( ContiguousIoResources )
  {
LABEL_34:
    RaidXrbDeallocateResources(v14, 0);
    StorFreeContiguousIoResources(a1, v13);
  }
  if ( Srb )
  {
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      if ( !v2 )
        v2 = Srb;
      *(_QWORD *)(v2 + 80) = 0LL;
      *(_QWORD *)(v2 + 104) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Srb, 0x72536152u);
  }
  return (unsigned int)v15;
}

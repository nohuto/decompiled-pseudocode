/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x140012104
 * Callers:
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x140008850 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140046660 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x14005FA7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwBootPartitionActivateIoctl @ 0x140061434 (RaidAdapterHwBootPartitionActivateIoctl.c)
 *     RaidAdapterHwBootPartitionDownloadIoctl @ 0x140061864 (RaidAdapterHwBootPartitionDownloadIoctl.c)
 *     RaidAdapterHwBootPartitionGetInfoIoctl @ 0x140061CB8 (RaidAdapterHwBootPartitionGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1400626F8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x140064748 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1400685E4 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006C8EC (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x14006CDA4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006DCFC (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaGetProtocolCommandEffects @ 0x140091D7C (RaGetProtocolCommandEffects.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000878C (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaSrbSetMiniportContext @ 0x140011BB0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaidBuildMdlForXrb @ 0x14003C178 (RaidBuildMdlForXrb.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140059BBC (StorSetIoGatewayEmptyEvent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400AEA18 (GatewayWaitForForwardIoWithTimeout.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // r14
  __int64 v9; // rbp
  unsigned int *v11; // r15
  int v12; // ecx
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int *v19; // rdi
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // ebp
  char v24; // bp
  int v25; // eax
  int v26; // eax
  IRP *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rcx
  __int64 Pool; // rax
  NTSTATUS v38; // eax
  bool v39; // zf
  KIRQL v40; // bl
  __int64 v41; // rbx
  unsigned int LockArray_high; // eax
  __int64 v43; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+38h] [rbp-60h]
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  union _LARGE_INTEGER v47; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v48; // [rsp+B0h] [rbp+18h]
  unsigned int v49; // [rsp+B8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v8 = 0LL;
  v9 = a4;
  Timeout.QuadPart = 0LL;
  v11 = 0LL;
  v12 = *(_DWORD *)a1;
  memset(&Event, 0, sizeof(Event));
  if ( v12 == 1314275652 )
  {
    v14 = a1 + 274;
  }
  else
  {
    v14 = a1 + 482;
    if ( v12 != 1094997074 )
      v14 = 98LL;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = 316LL;
  if ( v12 != 1314275652 )
    v16 = 524LL;
  v17 = (*(_DWORD *)(v16 + a1) + 7) & 0xFFFFFFF8;
  if ( *(_BYTE *)v14 == 1 )
  {
    Pool = RaidAllocatePool(64LL, 144LL, 1918067026LL, v15);
    v19 = (unsigned int *)Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 8;
      *(_BYTE *)(Pool + 2) = 40;
      *(_DWORD *)(Pool + 8) = 1397899864;
      *(_DWORD *)(Pool + 12) = 1;
      *(_DWORD *)(Pool + 16) = 144;
      *(_QWORD *)(Pool + 52) = 128LL;
      *(_DWORD *)(Pool + 20) = 2;
      *(_WORD *)(Pool + 36) = 2;
      *(_WORD *)(Pool + 128) = 1;
      *(_DWORD *)(Pool + 132) = 4;
    }
  }
  else
  {
    v19 = (unsigned int *)RaidAllocatePool(64LL, 88LL, 1918067026LL, v15);
  }
  ContiguousIoResources = StorAllocateContiguousIoResources(v17 + 1200, v18, a1);
  v45 = ContiguousIoResources;
  if ( !v19 || !ContiguousIoResources )
  {
    v23 = -1073741801;
    if ( !ContiguousIoResources )
      goto LABEL_49;
    goto LABEL_48;
  }
  v8 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v21, 0, 0LL);
  v22 = v48;
  v23 = RaidBuildMdlForXrb(v8, v48, v9);
  if ( v23 < 0 )
    goto LABEL_45;
  v24 = a6;
  v25 = a7;
  if ( !a6 )
  {
    v25 = a7 | 0x102;
    if ( *((_BYTE *)v19 + 2) == 40 )
      *((_WORD *)v19 + 19) = 32;
    else
      *((_BYTE *)v19 + 9) = 32;
  }
  v26 = v25 | 1;
  if ( *(_BYTE *)v14 == 1 )
  {
    v41 = v19[13];
    v11 = v19;
    v19[5] = 2;
    v19[6] = v26;
    if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high), 1u);
      v43 = **(_QWORD **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high);
      v19[11] = HIDWORD(v43);
    }
    else
    {
      LODWORD(v43) = -1;
    }
    v19[8] = v43;
    *((_QWORD *)v19 + 8) = v48;
    v19[15] = v49;
    *((_WORD *)v19 + 18) = IoGetIoPriorityHint(a2);
    v19[10] = *(_DWORD *)(a1 + 4188);
    *((_QWORD *)v19 + 12) = v8;
    *((_QWORD *)v19 + 10) = a2;
    *(_WORD *)((char *)v19 + v41 + 8) = 0;
    *((_BYTE *)v19 + v41 + 10) = 0;
    *(_QWORD *)(v8 + 168) = v19;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)v19 + 8);
    v27 = (IRP *)*((_QWORD *)v19 + 12);
  }
  else
  {
    v19[3] = v26;
    v19[4] = v49;
    *((_QWORD *)v19 + 3) = v22;
    *(_WORD *)v19 = 88;
    *((_BYTE *)v19 + 2) = 2;
    *((_BYTE *)v19 + 8) = -1;
    v19[5] = *(_DWORD *)(a1 + 4188);
    *((_QWORD *)v19 + 6) = v8;
    *(_WORD *)((char *)v19 + 5) = 0;
    *((_BYTE *)v19 + 7) = 0;
    *(_QWORD *)(v8 + 168) = v19;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)v19 + 3);
    v27 = a2;
  }
  v28 = v45 + 1200;
  *(_QWORD *)(v8 + 176) = v27;
  RaSrbSetMiniportContext((int *)a1, (__int64)v19, v28);
  if ( v24 )
    *(_BYTE *)(v8 + 17) |= 8u;
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
  if ( v24 )
  {
    RaidPauseAdapterQueue(a1);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 1024), &Event);
    v47.QuadPart = -1200000000LL;
    v38 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v47);
    v39 = v38 == 0;
    if ( v38 >= 0 )
      v39 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 120000LL) == 0;
    if ( !v39 )
    {
      v23 = -1073741823;
      a2->IoStatus.Information = 0LL;
      goto LABEL_48;
    }
  }
  if ( *(_QWORD *)(a1 + 5024) )
  {
    if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 5344), 1uLL);
      if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 5352), 1uLL);
    }
    v29 = 5LL;
    if ( !*(_DWORD *)(a1 + 92) )
      v29 = 1LL;
    PoFxActivateComponent(**(_QWORD **)(a1 + 5024), 0LL, v29);
  }
  if ( *(_BYTE *)v14 == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
        v8,
        v11,
        *((_QWORD *)v11 + 13));
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      61LL,
      &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      v8,
      v19,
      *((_QWORD *)v19 + 7));
  }
  if ( *(_BYTE *)(a1 + 4434) )
    v30 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v8);
  else
    v30 = RaidAdapterPostScatterGatherExecute(a1, v8);
  v23 = v30;
  if ( v30 < 0 )
  {
LABEL_33:
    if ( v23 != 258 )
      goto LABEL_34;
    goto LABEL_67;
  }
  if ( a8 )
  {
    Timeout.QuadPart = -10000000LL * a8;
    v23 = KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, &Timeout);
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
  }
  if ( v23 != 258 )
  {
    LOBYTE(v32) = *((_BYTE *)v19 + 3);
    v23 = RaidSrbStatusToNtStatus(v32, v31, v33, v34);
    goto LABEL_33;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6244));
LABEL_67:
  RaidAdapterResetBus(a1, 0LL);
LABEL_34:
  if ( a6 )
  {
    v40 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v40);
  }
  if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v8 + 748));
    *(_BYTE *)(v8 + 17) &= ~1u;
  }
  v35 = *(_QWORD **)(a1 + 5024);
  if ( v35 )
    PoFxIdleComponent(*v35, 0LL, 0LL);
  if ( v23 >= 0 )
  {
    if ( v23 == 258 )
    {
LABEL_46:
      v23 = -1073741643;
      goto LABEL_48;
    }
    if ( !a5 || (v23 = a5(*(unsigned int *)(v48 + 20)), v23 >= 0) )
      v23 = PortSrbTranslateSrbToNtStatus(*((_BYTE *)v19 + 3));
  }
LABEL_45:
  if ( v23 == 258 )
    goto LABEL_46;
LABEL_48:
  RaidXrbDeallocateResources(v8, 0LL);
  StorFreeContiguousIoResources(a1, v45);
LABEL_49:
  if ( v19 )
  {
    if ( *(_BYTE *)v14 == 1 )
    {
      if ( !v11 )
        v11 = v19;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_QWORD *)v11 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v19 + 6) = 0LL;
      *((_QWORD *)v19 + 7) = 0LL;
    }
    ExFreePoolWithTag(v19, 0x72536152u);
  }
  return (unsigned int)v23;
}

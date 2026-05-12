/*
 * XREFs of RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidFreeSrb @ 0x140042768 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14004A41C (RaidXrbSetCompletionRoutine.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterFreeMiniportDumpInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 *v3; // rbp
  unsigned int v4; // ebx
  __int64 Pool; // rax
  void *v7; // r15
  __int64 v8; // rdx
  unsigned __int8 *Srb; // rdi
  __int64 v10; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // eax
  int v17; // r9d
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0LL;
  v4 = 0;
  v20 = 0;
  if ( v2 && v2 != -72 && *(_QWORD *)(v2 + 64) )
  {
    Pool = RaidAllocatePool(64LL, 24LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v7 = (void *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 24;
      *(_DWORD *)(Pool + 4) = 24;
      *(_DWORD *)(Pool + 8) = 1179468873;
      *(_QWORD *)(Pool + 16) = *(_QWORD *)(v2 + 64);
      Srb = (unsigned __int8 *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 43, *(_BYTE *)(v2 + 170), 0);
      if ( !Srb )
      {
        v4 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(v7, 0x44436152u);
        return v4;
      }
      v10 = 316LL;
      if ( *(_DWORD *)a1 != 1314275652 )
        v10 = 524LL;
      ContiguousIoResources = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(v10 + a1) + 7) & 0xFFFFFFF8) + 1200,
                                v8,
                                (_QWORD *)a1);
      v21 = ContiguousIoResources;
      v13 = ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v14 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v12, 0, 0LL);
        *(_QWORD *)(v14 + 184) = v7;
        *(_QWORD *)(v14 + 176) = 0LL;
        v15 = v13 + 1200;
        *(_QWORD *)(v14 + 168) = Srb;
        if ( *(_BYTE *)(v2 + 170) == 1 )
        {
          *((_DWORD *)Srb + 5) = 43;
          v3 = Srb;
          *((_QWORD *)Srb + 8) = v7;
          *((_DWORD *)Srb + 15) = 24;
          *((_QWORD *)Srb + 10) = 0LL;
          *((_QWORD *)Srb + 12) = v14;
          *((_QWORD *)Srb + 13) = v15;
          *((_DWORD *)Srb + 10) = 10;
          *((_DWORD *)Srb + 6) = 256;
          v20 = 1;
          if ( !*(_BYTE *)(a1 + 4434) )
            *((_DWORD *)Srb + 6) = 128;
        }
        else
        {
          Srb[2] = 43;
          *((_QWORD *)Srb + 3) = v7;
          *((_DWORD *)Srb + 4) = 24;
          *(_WORD *)Srb = 88;
          *((_QWORD *)Srb + 6) = v14;
          *((_QWORD *)Srb + 7) = v15;
          *((_DWORD *)Srb + 5) = 10;
          *((_DWORD *)Srb + 3) = 256;
          if ( !*(_BYTE *)(a1 + 4434) )
            *((_DWORD *)Srb + 3) = 128;
        }
        KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v14, (__int64)RaidXrbSignalCompletion);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          WPP_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x45u,
            (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            v14,
            Srb);
        }
        if ( *(_BYTE *)(a1 + 4434) )
          v16 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v14);
        else
          v16 = RaidAdapterPostScatterGatherExecute(a1, v14);
        v17 = v16;
        if ( v16 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v14 + 664), Executive, 0, 0, 0LL);
          v17 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) )
        {
          LODWORD(Timeout) = Srb[3];
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x46u,
            (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            v17,
            Timeout);
        }
        *(_QWORD *)(v2 + 64) = 0LL;
        v4 = 0;
        RaidXrbDeallocateResources(v14, 0);
        StorFreeContiguousIoResources(a1, v21);
        if ( v20 == 1 )
        {
          if ( !v3 )
            v3 = Srb;
          *((_QWORD *)v3 + 10) = 0LL;
          *((_QWORD *)v3 + 13) = 0LL;
          goto LABEL_36;
        }
      }
      else
      {
        v4 = -1073741670;
      }
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
LABEL_36:
      RaidFreeSrb(Srb);
      goto LABEL_37;
    }
    return (unsigned int)-1073741670;
  }
  return v4;
}

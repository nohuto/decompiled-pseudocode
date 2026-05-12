/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x14006597C (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
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
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  unsigned int *v6; // r14
  int v7; // ecx
  char *v8; // r15
  void *Pool; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  ULONG v12; // ebp
  unsigned int v13; // ebx
  unsigned int *Srb; // rdi
  __int64 v15; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rbx
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  __int64 v21; // r15
  unsigned int LockArray_high; // eax
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edx
  char *v26; // rcx
  __int64 v27; // rax
  __int16 v28; // ax
  int v29; // eax
  __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+B0h] [rbp+28h]

  v6 = 0LL;
  v7 = *(_DWORD *)a1;
  v8 = 0LL;
  Pool = 0LL;
  if ( v7 == 1314275652 )
  {
    v10 = a1 + 274;
  }
  else
  {
    v10 = a1 + 482;
    if ( v7 != 1094997074 )
      v10 = 98LL;
  }
  v11 = 316LL;
  if ( v7 != 1314275652 )
    v11 = 524LL;
  v12 = a5 << 9;
  v35 = a5 << 9;
  v13 = (*(_DWORD *)(v11 + a1) + 7) & 0xFFFFFFF8;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)v10, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v13 + 1200, v15, (_QWORD *)a1);
  v31 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v17 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, 1LL, 0, 0LL);
    v18 = RaidBuildMdlForXrb(v17, a4, v12);
    if ( v18 >= 0 )
    {
      if ( a3 == -94 )
      {
        v19 = 64;
      }
      else
      {
        v19 = 0;
        if ( a3 == -75 )
          v19 = 128;
      }
      v20 = v19 | 0x102;
      Pool = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        if ( *(_BYTE *)v10 == 1 )
        {
          v21 = Srb[13];
          v6 = Srb;
          Srb[5] = 0;
          Srb[6] = v20;
          if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high), 1u);
            v23 = **(_QWORD **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high);
            Srb[11] = HIDWORD(v23);
          }
          else
          {
            LODWORD(v23) = -1;
          }
          Srb[8] = v23;
          *((_QWORD *)Srb + 8) = a4;
          Srb[15] = v35;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          v24 = *(_DWORD *)(a1 + 4188);
          *((_QWORD *)Srb + 10) = a2;
          Srb[10] = v24;
          *((_QWORD *)Srb + 12) = v17;
          if ( *(_WORD *)(a1 + 5640) == 1 )
          {
            *((_BYTE *)Srb + v21 + 8) = *(_BYTE *)(a1 + 5648);
            *((_BYTE *)Srb + v21 + 9) = *(_BYTE *)(a1 + 5649);
            *((_BYTE *)Srb + v21 + 10) = *(_BYTE *)(a1 + 5650);
          }
          v25 = v35;
          *(_QWORD *)(v17 + 168) = Srb;
          *(_QWORD *)(v17 + 184) = *((_QWORD *)Srb + 8);
          *(_QWORD *)(v17 + 176) = *((_QWORD *)Srb + 12);
          v8 = (char *)Srb + Srb[30];
          *(_DWORD *)v8 = 64;
          v26 = v8 + 24;
          *((_DWORD *)v8 + 1) = 32;
          *(_WORD *)(v8 + 9) = 3327;
          *((_QWORD *)v8 + 2) = Pool;
        }
        else
        {
          v25 = v35;
          *((_QWORD *)Srb + 3) = a4;
          *(_WORD *)Srb = 88;
          *((_BYTE *)Srb + 2) = 0;
          Srb[3] = v20;
          *((_BYTE *)Srb + 8) = -1;
          Srb[4] = v35;
          Srb[5] = *(_DWORD *)(a1 + 4188);
          *((_BYTE *)Srb + 11) = -1;
          *((_QWORD *)Srb + 4) = Pool;
          *((_QWORD *)Srb + 6) = v17;
          if ( *(_WORD *)(a1 + 5640) == 1 )
          {
            *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 5648);
            *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 5649);
            *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 5650);
          }
          v26 = (char *)(Srb + 18);
          *(_QWORD *)(v17 + 168) = Srb;
          v27 = *((_QWORD *)Srb + 3);
          *(_QWORD *)(v17 + 176) = a2;
          *(_QWORD *)(v17 + 184) = v27;
          *((_BYTE *)Srb + 10) = 12;
        }
        if ( *((_BYTE *)Srb + 2) == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          *((_BYTE *)Srb + 9) = 32;
        *v26 = a3;
        v26[1] = *(_BYTE *)(a1 + 5632);
        v28 = __ROR2__(*(_WORD *)(a1 + 5634), 8);
        *(_DWORD *)(v26 + 6) = _byteswap_ulong(v25);
        *((_WORD *)v26 + 1) = v28;
        RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v31 + 1200);
        KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
        *(_QWORD *)(v17 + 656) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)v10 == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              65LL,
              &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
              v17,
              v6,
              *((_QWORD *)v6 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            66LL,
            &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            v17,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4434) )
          v29 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v17);
        else
          v29 = RaidAdapterPostScatterGatherExecute(a1, v17);
        v18 = v29;
        if ( v29 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
          v18 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
        }
        if ( (*(_BYTE *)(v17 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v17 + 748));
          *(_BYTE *)(v17 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
      else
      {
        v18 = -1073741801;
      }
    }
  }
  else
  {
    v18 = -1073741801;
    v17 = 0LL;
    if ( !ContiguousIoResources )
      goto LABEL_53;
  }
  RaidXrbDeallocateResources(v17, 0);
  StorFreeContiguousIoResources(a1, v31);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x4E536152u);
LABEL_53:
  if ( Srb )
  {
    if ( *(_BYTE *)v10 == 1 )
    {
      if ( !v6 )
        v6 = Srb;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
      if ( v8 )
        *((_QWORD *)v8 + 2) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v18;
}

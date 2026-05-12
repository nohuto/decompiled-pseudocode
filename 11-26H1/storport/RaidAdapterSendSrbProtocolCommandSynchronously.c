/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x14005F694 (RaAdapterProtocolCommandIoctl.c)
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
 *     StorEtwProtocolCommandCompletion @ 0x140052ABC (StorEtwProtocolCommandCompletion.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140059BBC (StorSetIoGatewayEmptyEvent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 *     StorGetStorageProtocolCommandBufferTotalLength @ 0x140097670 (StorGetStorageProtocolCommandBufferTotalLength.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400AEA18 (GatewayWaitForForwardIoWithTimeout.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v6; // ecx
  _QWORD *v7; // r15
  __int64 v8; // rbp
  _IRP *MasterIrp; // r13
  __int64 v10; // r8
  ULONG Options; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // r8
  unsigned int v15; // ebx
  unsigned int *Srb; // rdi
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // esi
  int v22; // edx
  int UserEvent_low; // eax
  char v24; // si
  int v25; // ecx
  _BYTE *v26; // rbx
  __int64 v27; // rbx
  unsigned int LockArray_high; // eax
  __int64 v29; // rdx
  ULONG v30; // eax
  unsigned int Blink; // eax
  IRP *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r8
  NTSTATUS v35; // eax
  bool v36; // zf
  int v37; // eax
  KIRQL v38; // bl
  __int64 v39; // rax
  _BYTE *v41; // [rsp+30h] [rbp-68h]
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  ULONG v44; // [rsp+A8h] [rbp+10h]
  char v45; // [rsp+B0h] [rbp+18h]
  __int64 v46; // [rsp+B8h] [rbp+20h]

  v45 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_DWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(&Event, 0, sizeof(Event));
  if ( v6 == 1314275652 )
  {
    v10 = a1 + 274;
  }
  else
  {
    v10 = a1 + 482;
    if ( v6 != 1094997074 )
      v10 = 98LL;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v36 = v6 == 1314275652;
  v12 = *(_QWORD *)(a1 + 8);
  v41 = (_BYTE *)v10;
  v13 = 316LL;
  v14 = *(_BYTE *)v10;
  if ( !v36 )
    v13 = 524LL;
  v15 = (*(_DWORD *)(v13 + a1) + 7) & 0xFFFFFFF8;
  if ( Options <= CurrentStackLocation->Parameters.Read.Length )
    Options = CurrentStackLocation->Parameters.Read.Length;
  v44 = Options;
  Srb = (unsigned int *)RaidAllocateSrb(v12, 9, v14, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v15 + 1200, v17, (_QWORD *)a1);
  v46 = ContiguousIoResources;
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v8 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
    v21 = RaidBuildMdlForXrb(v8, MasterIrp, Options);
    if ( v21 >= 0 )
    {
      v36 = DisableIEEE1667 == 0;
      MasterIrp->Flags = 255;
      v22 = 129;
      if ( !v36
        && LODWORD(MasterIrp->MdlAddress) == 3
        && ((UserEvent_low = (unsigned __int8)LODWORD(MasterIrp->UserEvent), UserEvent_low == 129)
         || UserEvent_low == 130)
        && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
      {
        v21 = -1073741637;
      }
      else
      {
        v24 = v45;
        if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
          v22 = 1;
        v25 = v22 | 0x40;
        if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
          v25 = v22;
        if ( !v45 )
        {
          v25 |= 0x102u;
          if ( *((_BYTE *)Srb + 2) == 40 )
            *((_WORD *)Srb + 19) = 32;
          else
            *((_BYTE *)Srb + 9) = 32;
        }
        v26 = v41;
        if ( *v41 == 1 )
        {
          v27 = Srb[13];
          v7 = Srb;
          Srb[5] = 9;
          Srb[6] = v25;
          if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high), 1u);
            v29 = **(_QWORD **)(*(_QWORD *)(a1 + 6232) + 8LL * LockArray_high);
            Srb[11] = HIDWORD(v29);
          }
          else
          {
            LODWORD(v29) = -1;
          }
          v30 = v44;
          Srb[8] = v29;
          *((_QWORD *)Srb + 8) = MasterIrp;
          Srb[15] = v30;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          Blink = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !Blink )
            Blink = *(_DWORD *)(a1 + 4188);
          Srb[10] = Blink;
          *((_QWORD *)Srb + 12) = v8;
          *((_QWORD *)Srb + 10) = a2;
          *(_WORD *)((char *)Srb + v27 + 8) = 0;
          *((_BYTE *)Srb + v27 + 10) = 0;
          v26 = v41;
          *(_QWORD *)(v8 + 168) = Srb;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 8);
          v32 = (IRP *)*((_QWORD *)Srb + 12);
        }
        else
        {
          Srb[4] = v44;
          *(_WORD *)Srb = 88;
          *((_BYTE *)Srb + 2) = 9;
          Srb[3] = v25;
          *((_BYTE *)Srb + 8) = -1;
          *((_QWORD *)Srb + 3) = MasterIrp;
          v33 = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !v33 )
            v33 = *(_DWORD *)(a1 + 4188);
          Srb[5] = v33;
          *((_QWORD *)Srb + 6) = v8;
          *(_WORD *)((char *)Srb + 5) = 0;
          *((_BYTE *)Srb + 7) = 0;
          *(_QWORD *)(v8 + 168) = Srb;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 3);
          v32 = a2;
        }
        v34 = v46 + 1200;
        *(_QWORD *)(v8 + 176) = v32;
        RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v34);
        if ( v24 )
          *(_BYTE *)(v8 + 17) |= 8u;
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
        if ( !v24 )
          goto LABEL_89;
        RaidPauseAdapterQueue(a1);
        KeInitializeEvent(&Event, NotificationEvent, 0);
        StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 1024), &Event);
        Timeout.QuadPart = -1200000000LL;
        v35 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
        v36 = v35 == 0;
        if ( v35 >= 0 )
          v36 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 120000LL) == 0;
        if ( v36 )
        {
LABEL_89:
          if ( *(_QWORD *)(a1 + 5024) )
            RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
          if ( *v26 == 1 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qqq(
                WPP_GLOBAL_Control->AttachedDevice,
                62LL,
                &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
                v8,
                v7,
                v7[13]);
            }
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
              v8,
              Srb,
              *((_QWORD *)Srb + 7));
          }
          if ( *(_BYTE *)(a1 + 4434) )
            v37 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v8);
          else
            v37 = RaidAdapterPostScatterGatherExecute(a1, v8);
          v21 = v37;
          if ( v37 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
            v21 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
          }
          if ( v45 )
          {
            v38 = KfRaiseIrql(2u);
            RaidResumeAndRestartAdapterQueues(a1);
            KeLowerIrql(v38);
            v26 = v41;
          }
          if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~1u;
          }
          if ( *(_QWORD *)(a1 + 5024) )
            RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
          if ( v21 >= 0 )
          {
            if ( *v26 == 1 )
              v39 = v7[8];
            else
              v39 = *((_QWORD *)Srb + 3);
            if ( *(_DWORD *)(v39 + 16) == 255 )
            {
              v21 = -1073741637;
            }
            else
            {
              Timeout.LowPart = 84;
              StorGetStorageProtocolCommandBufferTotalLength(MasterIrp, &Timeout);
              a2->IoStatus.Information = Timeout.LowPart;
            }
          }
        }
        else
        {
          v21 = -1073741823;
          a2->IoStatus.Information = 0LL;
        }
        v20 = v46;
      }
    }
  }
  else
  {
    v21 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), (__int64)a2, v45);
  if ( v20 )
  {
    RaidXrbDeallocateResources(v8, 0);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( Srb )
  {
    if ( *v41 == 1 )
    {
      if ( !v7 )
        v7 = Srb;
      v7[10] = 0LL;
      v7[13] = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v21;
}

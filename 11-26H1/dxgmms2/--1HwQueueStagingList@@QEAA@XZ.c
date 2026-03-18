/*
 * XREFs of ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0
 * Callers:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x140002780 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     VidSchExitIndependentFlip @ 0x1400038E0 (VidSchExitIndependentFlip.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchConfirmToken @ 0x140004960 (VidSchConfirmToken.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1400064D8 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009F10 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x14000DC50 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14000EE00 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitWaitFromCpu @ 0x1400119F0 (VidSchSubmitWaitFromCpu.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x14002F828 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003AB8C (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x14003AC20 (VidSchDestroyDeviceSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003CDFC (VidSchTimeoutSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1400413A8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140042058 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchSetNodePowerState @ 0x140043D00 (VidSchSetNodePowerState.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 *     ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004ACC8 (--1_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004B298 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140055BD8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140055FF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400560C0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005A010 (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 */

void __fastcall HwQueueStagingList::~HwQueueStagingList(struct _KEVENT **this)
{
  int v1; // eax
  struct _KEVENT *v3; // rcx
  char v4; // r8
  volatile LONG Lock; // eax
  __int64 *v6; // rdx
  struct _KEVENT **v7; // rsi
  struct _KEVENT ***v8; // rdi
  struct _KEVENT *v9; // rcx
  struct _KEVENT ***v10; // rax
  struct _KEVENT **v11; // r9
  struct _KEVENT **v12; // r9
  char *v13; // rdx
  struct _KEVENT *v14; // r8
  struct _KEVENT *Flink; // rcx
  __int64 v16; // rax
  struct _KEVENT *v17; // rax
  __int64 v18; // rax
  struct _LIST_ENTRY *v19; // r8

  v1 = *((_DWORD *)this + 7);
  if ( v1 && !*((_BYTE *)this + 24) )
  {
    if ( v1 == 1 )
    {
      v3 = *this;
      v4 = 0;
      Lock = v3[13].Header.Lock;
      if ( Lock == 1 )
      {
        v12 = (struct _KEVENT **)this[1];
        v13 = (char *)(this + 1);
        if ( v12 == this + 1 )
          goto LABEL_7;
        v14 = v3 + 12;
        if ( *(struct _KEVENT **)(*(_QWORD *)&v3[12].Header.Lock + 8LL) != &v3[12] )
          goto LABEL_18;
        Flink = (struct _KEVENT *)v3[12].Header.WaitListHead.Flink;
        if ( *(struct _KEVENT **)&Flink->Header.Lock != v14 )
          goto LABEL_18;
        if ( v12[1] != (struct _KEVENT *)v13 )
          goto LABEL_18;
        if ( *(char **)&this[2]->Header.Lock != v13 )
          goto LABEL_18;
        *(_QWORD *)&Flink->Header.Lock = v13;
        v14->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)this[2];
        *(_QWORD *)&this[2]->Header.Lock = v14;
        this[2] = Flink;
        v16 = *(_QWORD *)v13;
        if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || *(char **)&Flink->Header.Lock != v13 )
          goto LABEL_18;
        *(_QWORD *)&Flink->Header.Lock = v16;
        *(_QWORD *)(v16 + 8) = Flink;
        this[2] = (struct _KEVENT *)(this + 1);
        *(_QWORD *)v13 = v13;
      }
      else
      {
        if ( Lock != 2 )
          goto LABEL_7;
        v6 = (__int64 *)this[1];
        if ( v6 == (__int64 *)(this + 1) )
          goto LABEL_7;
        do
        {
          v11 = (struct _KEVENT **)*v6;
          if ( *((_BYTE *)v6 - 29) )
          {
            if ( v11[1] != (struct _KEVENT *)v6 )
              goto LABEL_18;
            v17 = (struct _KEVENT *)v6[1];
            if ( *(__int64 **)&v17->Header.Lock != v6 )
              goto LABEL_18;
            *(_QWORD *)&v17->Header.Lock = v11;
            v11[1] = v17;
            v18 = (__int64)&(*this)[12];
            v19 = (*this)[12].Header.WaitListHead.Flink;
            if ( v19->Flink != (struct _LIST_ENTRY *)v18 )
              goto LABEL_18;
            v6[1] = (__int64)v19;
            *v6 = v18;
            v19->Flink = (struct _LIST_ENTRY *)v6;
            v4 = 1;
            *(_QWORD *)(v18 + 8) = v6;
          }
          v6 = (__int64 *)v11;
        }
        while ( v11 != this + 1 );
        if ( !v4 )
          goto LABEL_7;
      }
      LOBYTE((*this)[12].Header.WaitListHead.Blink) = 0;
      (*this)[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      KeSetEvent(*this + 61, 0, 0);
    }
LABEL_7:
    v7 = (struct _KEVENT **)this[1];
    v8 = (struct _KEVENT ***)(this + 1);
    if ( v7 == this + 1 )
    {
LABEL_8:
      *((_BYTE *)this + 24) = 1;
      return;
    }
    while ( 1 )
    {
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)this, (struct VIDSCH_HW_QUEUE *)(v7 - 22), 0LL);
      v9 = *v7;
      if ( (struct _KEVENT **)(*v7)->Header.WaitListHead.Flink != v7 )
        break;
      v10 = (struct _KEVENT ***)v7[1];
      if ( *v10 != v7 )
        break;
      *v10 = (struct _KEVENT **)v9;
      v9->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v10;
      *v7 = 0LL;
      v7[1] = 0LL;
      v7 = *v8;
      if ( *v8 == (struct _KEVENT **)v8 )
        goto LABEL_8;
    }
LABEL_18:
    __fastfail(3u);
  }
}

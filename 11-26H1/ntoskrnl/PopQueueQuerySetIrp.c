/*
 * XREFs of PopQueueQuerySetIrp @ 0x1403BC828
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     PopFxActivateComponentDependents @ 0x1403BC2E0 (PopFxActivateComponentDependents.c)
 *     PopNotifyDevice @ 0x140C13C14 (PopNotifyDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopEnableIrpWatchdog @ 0x1403B49DC (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1403BD9D4 (PopDiagTraceIrpStart.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char v2; // bp
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  char v7; // al
  struct _DEVICE_OBJECT *v8; // r12
  KIRQL v9; // r14
  int v10; // ecx
  __int64 v11; // rsi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // al
  struct _DEVICE_OBJECT *i; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 j; // rcx
  struct _LIST_ENTRY *WaitStatus; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = Irp;
  v4 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(_BYTE *)(v4 + 184);
  v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( v7 == 2 && *(_DWORD *)(v4 + 188) == 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue);
    if ( ++PopPendingSetPowerDeviceIrps == 1 )
    {
      PopDeepSleepSetDisengageReason(2LL);
      if ( !PopDevicePowerTransitionInProgressWorkerQueued )
      {
        PopDevicePowerTransitionInProgressWorkerQueued = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PpmIdlePolicyLock.ApcStateFill[8], DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue, v9);
    v7 = *(_BYTE *)(v4 + 184);
  }
  v10 = *(_DWORD *)(v4 + 188);
  v11 = 264LL;
  if ( v10 != 1 )
    v11 = 280LL;
  if ( v7 == 2 && v10 == 1 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v15 = KeAcquireQueuedSpinLock(0xAuLL);
    for ( i = v8; i; i = i->DeviceObjectExtension->AttachedTo )
    {
      if ( (i->Flags & 0x4000) != 0 )
      {
        v2 = 1;
        break;
      }
    }
    KeReleaseQueuedSpinLock(0xAuLL, v15);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
  if ( v2 )
  {
    WaitStatus = (struct _LIST_ENTRY *)PpmIdlePolicyLock.WaitStatus;
    if ( *(struct _KTHREAD **)PpmIdlePolicyLock.WaitStatus != (struct _KTHREAD *)&PpmIdlePolicyLock.ApcStateFill[40] )
      goto LABEL_38;
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PpmIdlePolicyLock.ApcStateFill[40];
    v3->Tail.Overlay.ListEntry.Blink = WaitStatus;
    WaitStatus->Flink = &p_ListEntry->ListEntry;
    PpmIdlePolicyLock.WaitStatus = (volatile __int64)&v3->Tail.Overlay.ListEntry;
  }
  v13 = *(_QWORD *)(v11 + v6 + 8);
  if ( v13 )
  {
    for ( j = *(_QWORD *)(v13 + 120); j; j = *(_QWORD *)(j + 120) )
      v13 = j;
    *(_QWORD *)(v13 + 120) = v3;
  }
  else
  {
    *(_QWORD *)(v11 + v6 + 8) = v3;
    if ( !*(_QWORD *)(v11 + v6) )
    {
      if ( !v2 )
      {
LABEL_18:
        *(_QWORD *)(v11 + v6) = v3;
        *(_QWORD *)(v11 + v6 + 8) = 0LL;
        goto LABEL_19;
      }
      if ( !PopInrushIrp )
      {
        Flink = p_ListEntry->ListEntry.Flink;
        PopInrushIrp = (__int64)v3;
        if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Flink->Blink == p_ListEntry )
        {
          Blink = v3->Tail.Overlay.ListEntry.Blink;
          if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink == p_ListEntry )
          {
            Blink->Flink = Flink;
            Flink->Blink = Blink;
            goto LABEL_18;
          }
        }
LABEL_38:
        __fastfail(3u);
      }
    }
  }
  v3 = 0LL;
LABEL_19:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v14, v3);
    PopEnableIrpWatchdog((__int64)v3);
    IofCallDriver(v8, v3);
  }
}

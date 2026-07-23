/*
 * XREFs of PopDequeueQuerySetIrp @ 0x1403BDC38
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopEnableIrpWatchdog @ 0x1403B49DC (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1403BD9D4 (PopDiagTraceIrpStart.c)
 *     PopCompleteIrpWatchdog @ 0x1403BDEDC (PopCompleteIrpWatchdog.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PopDisableIrpWatchdog @ 0x1404D64E4 (PopDisableIrpWatchdog.c)
 */

void __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rcx
  __int64 *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // bl
  __int64 *v11; // rax
  IRP *v12; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 v14; // rdx
  __int64 ***v15; // rcx
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rdx
  _QWORD *v18; // rax
  void **p_KernelShadowStackBase; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 ***v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopDiagTraceIrpFinish(a1);
  PopCompleteIrpWatchdog(a1);
  v27 = &v26;
  v26 = (__int64 *)&v26;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitListEntry.Blink, &LockHandle);
  v5 = (_QWORD *)(v4 + 264);
  v6 = *(_DWORD *)(v2 + 188) == 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v6 && *(_BYTE *)(v2 + 184) == 2 && *(int *)(v2 + 192) > 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v4 + 296), 0x8000u);
    if ( *v5 )
      PopDisableIrpWatchdog();
  }
  if ( *(_DWORD *)(v2 + 188) != 1 )
    v5 = (_QWORD *)(v4 + 280);
  v6 = a1 == PopInrushIrp;
  *v5 = 0LL;
  if ( v6 )
  {
    v17 = *(struct _KTHREAD **)&PpmIdlePolicyLock.ApcStateFill[40];
    PopInrushIrp = 0LL;
    while ( 1 )
    {
      if ( v17 == (struct _KTHREAD *)&PpmIdlePolicyLock.ApcStateFill[40] )
        goto LABEL_7;
      p_KernelShadowStackBase = &v17[-1].KernelShadowStackBase;
      v20 = *(_QWORD *)(*(&v17->QuantumTarget + 9 * SBYTE2(v17[-1].IptSaveArea)) + 24);
      v21 = v20 ? *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL) : 0LL;
      if ( !*(_QWORD *)(v21 + 264) && *(void ***)(v21 + 272) == p_KernelShadowStackBase )
        break;
      v17 = *(struct _KTHREAD **)&v17->Header.Lock;
    }
    v22 = *(struct _LIST_ENTRY **)&v17->Header.Lock;
    if ( *(struct _KTHREAD **)(*(_QWORD *)&v17->Header.Lock + 8LL) != v17 )
      goto LABEL_27;
    Flink = v17->Header.WaitListHead.Flink;
    if ( (struct _KTHREAD *)Flink->Flink != v17 )
      goto LABEL_27;
    Flink->Flink = v22;
    v22->Blink = Flink;
    v24 = (__int64 ***)(p_KernelShadowStackBase + 15);
    *(_QWORD *)(v21 + 264) = p_KernelShadowStackBase;
    *(_QWORD *)(v21 + 272) = p_KernelShadowStackBase[15];
    v25 = v27;
    PopInrushIrp = (__int64)&v17[-1].KernelShadowStackBase;
    if ( *v27 != (__int64 *)&v26 )
      goto LABEL_27;
    p_KernelShadowStackBase[16] = v27;
    *v24 = &v26;
    *v25 = v24;
    v27 = (__int64 **)(p_KernelShadowStackBase + 15);
  }
LABEL_7:
  if ( *v5 )
    goto LABEL_9;
  v7 = (_QWORD *)v5[1];
  if ( !v7 )
    goto LABEL_9;
  v14 = v7[21];
  if ( (_QWORD *)v14 == v7 + 21 )
    goto LABEL_26;
  if ( PopInrushIrp )
    goto LABEL_9;
  PopInrushIrp = v5[1];
  if ( *(_QWORD **)(v14 + 8) != v7 + 21 || (v18 = (_QWORD *)v7[22], (_QWORD *)*v18 != v7 + 21) )
LABEL_27:
    __fastfail(3u);
  *v18 = v14;
  *(_QWORD *)(v14 + 8) = v18;
LABEL_26:
  *v5 = v7;
  v15 = (__int64 ***)(v7 + 15);
  v5[1] = *v15;
  v16 = v27;
  if ( *v27 != (__int64 *)&v26 )
    goto LABEL_27;
  v15[1] = v27;
  *v15 = &v26;
  *v16 = v15;
  v27 = (__int64 **)v15;
LABEL_9:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v8 = v26;
    if ( v26 == (__int64 *)&v26 )
      break;
    if ( (__int64 **)v26[1] != &v26 )
      goto LABEL_27;
    v11 = (__int64 *)*v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
      goto LABEL_27;
    v26 = (__int64 *)*v26;
    v11[1] = (__int64)&v26;
    v12 = (IRP *)(v8 - 15);
    DeviceObject = v12->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v26, (__int64)v12);
    PopEnableIrpWatchdog((__int64)v12);
    IofCallDriver(DeviceObject, v12);
  }
  if ( *(_BYTE *)(v2 + 184) == 2 && *(_DWORD *)(v2 + 188) == 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue);
    v6 = PopPendingSetPowerDeviceIrps-- == 1;
    v10 = v9;
    if ( v6 )
    {
      PopDeepSleepClearDisengageReason(2LL);
      if ( !PopDevicePowerTransitionInProgressWorkerQueued )
      {
        PopDevicePowerTransitionInProgressWorkerQueued = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PpmIdlePolicyLock.ApcStateFill[8], DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.Queue, v10);
  }
}

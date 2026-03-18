/*
 * XREFs of ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140031278
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140030C50 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmAddPendingTermination(struct VIDMM_ALLOC *a1)
{
  __int64 v2; // rdi
  KIRQL v3; // si
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = **((_QWORD **)a1 + 1);
  v3 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 44528), &LockHandle);
  v4 = (_QWORD *)((char *)a1 + 736);
  v5 = *(_QWORD **)(v2 + 44544);
  if ( *v5 != v2 + 44536 )
    __fastfail(3u);
  *v4 = v2 + 44536;
  v4[1] = v5;
  *v5 = v4;
  *(_QWORD *)(v2 + 44544) = v4;
  ++*(_DWORD *)(v2 + 44552);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*(PRKEVENT *)(v2 + 44856), 0, 0);
  KeLowerIrql(v3);
}

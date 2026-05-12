/*
 * XREFs of sub_14012C2EC @ 0x14012C2EC
 * Callers:
 *     sub_14012C1B0 @ 0x14012C1B0 (sub_14012C1B0.c)
 *     sub_14012C4D0 @ 0x14012C4D0 (sub_14012C4D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14012C2EC(char *Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rax
  KIRQL CurrentIrql; // al
  __int64 v5; // rcx
  PDEVICE_OBJECT *v6; // r14
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 16) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 16);
  if ( *(_DWORD *)(v3 + 72) != 1 )
    goto LABEL_12;
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL) & 1) == 0 )
  {
    v6 = (PDEVICE_OBJECT *)(Context + 8);
LABEL_9:
    *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) |= 4u;
    if ( PoRequestPowerIrp(*v6, 2u, (POWER_STATE)4, (PREQUEST_POWER_COMPLETE)sub_14012C230, Context, 0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 184LL), 0);
      return;
    }
    *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~4u;
    ++*(_DWORD *)(*((_QWORD *)Context + 16) + 172LL);
    goto LABEL_12;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v5 = *((_QWORD *)Context + 16);
  if ( !CurrentIrql )
  {
    v6 = (PDEVICE_OBJECT *)(Context + 8);
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           sub_14012CC80,
           Context,
           (PIRP *)(*(_QWORD *)(v5 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 16) + 88LL), &LockHandle);
    if ( v7 >= 0 )
      goto LABEL_9;
LABEL_12:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*((_QWORD *)Context + 16) + 8LL), v8, v9);
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)(*((_QWORD *)Context + 16) + 144LL), sub_14012C4D0, DelayedWorkQueue, Context);
}

/*
 * XREFs of sub_1401271C0 @ 0x1401271C0
 * Callers:
 *     sub_140127120 @ 0x140127120 (sub_140127120.c)
 *     sub_1401273C0 @ 0x1401273C0 (sub_1401273C0.c)
 * Callees:
 *     sub_14012A294 @ 0x14012A294 (sub_14012A294.c)
 */

void __fastcall sub_1401271C0(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  KIRQL CurrentIrql; // al
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 20) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 20);
  if ( *(_DWORD *)(v3 + 68) != 1 )
  {
LABEL_13:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*((_QWORD *)Context + 20) + 8LL), v9, v10);
    sub_14012A294(Context);
    return;
  }
  v4 = *(_QWORD *)(v3 + 8);
  if ( (*(_DWORD *)(v4 + 20) & 0x40) == 0 || (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) == 0 )
  {
LABEL_10:
    *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) |= 4u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)sub_140127170,
           Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++*(_DWORD *)(*((_QWORD *)Context + 20) + 268LL);
      return;
    }
    *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) &= ~4u;
    ++*(_DWORD *)(*((_QWORD *)Context + 20) + 244LL);
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v6 = *((_QWORD *)Context + 20);
  if ( !CurrentIrql )
  {
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           sub_140128250,
           Context,
           (PIRP *)(*(_QWORD *)(v6 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 20) + 120LL), &LockHandle);
    v8 = *((_QWORD *)Context + 20);
    if ( v7 == 259 )
      *(_DWORD *)(*(_QWORD *)(v8 + 8) + 20LL) |= 0x20u;
    else
      ++*(_DWORD *)(v8 + 248);
    goto LABEL_10;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 232), 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)(*((_QWORD *)Context + 20) + 216LL), sub_1401273C0, DelayedWorkQueue, Context);
}

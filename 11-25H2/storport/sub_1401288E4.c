/*
 * XREFs of sub_1401288E4 @ 0x1401288E4
 * Callers:
 *     sub_1401288B0 @ 0x1401288B0 (sub_1401288B0.c)
 *     sub_140128AD0 @ 0x140128AD0 (sub_140128AD0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401288E4(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // r8d
  KIRQL CurrentIrql; // al
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 20) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 20);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL);
  if ( (v5 & 2) != 0 || *(_DWORD *)(v3 + 68) != 1 )
  {
LABEL_13:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDevicePowerNotRequired(**(_QWORD **)(*((_QWORD *)Context + 20) + 8LL));
    return;
  }
  if ( (*(_DWORD *)(v4 + 20) & 0x40) == 0 || (v5 & 0x800) == 0 )
  {
LABEL_11:
    *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) |= 4u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)sub_140128080,
           Context,
           0LL) != 259 )
    {
      *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) &= ~4u;
      ++*(_DWORD *)(*((_QWORD *)Context + 20) + 244LL);
    }
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v7 = *((_QWORD *)Context + 20);
  if ( !CurrentIrql )
  {
    v8 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)sub_140128250,
           Context,
           (PIRP *)(*(_QWORD *)(v7 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 20) + 120LL), &LockHandle);
    v9 = *((_QWORD *)Context + 20);
    if ( v8 == 259 )
      *(_DWORD *)(*(_QWORD *)(v9 + 8) + 20LL) |= 0x20u;
    else
      ++*(_DWORD *)(v9 + 248);
    goto LABEL_11;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 232), 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)(*((_QWORD *)Context + 20) + 216LL), sub_140128AD0, DelayedWorkQueue, Context);
}

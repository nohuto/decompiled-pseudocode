/*
 * XREFs of sub_14007AB70 @ 0x14007AB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021150 @ 0x140021150 (sub_140021150.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 */

void __fastcall sub_14007AB70(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( sub_140021280(Context) )
  {
    *(_QWORD *)(*(_QWORD *)(Context + 1872) + 72LL) = 0LL;
    if ( Status >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
      v7 = *(_QWORD *)(Context + 1872);
      *(_DWORD *)(Context + 936) = 2;
      *(_DWORD *)(v7 + 32) |= 0x10u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( (*(_DWORD *)(Context + 548) != 1 || (*(_BYTE *)(Context + 505) & 1) != 0)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1872) + 36LL), 1, 0) )
    {
      sub_140021150(Context, 0, 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
}

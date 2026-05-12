/*
 * XREFs of sub_1400436D0 @ 0x1400436D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000A7B4 @ 0x14000A7B4 (sub_14000A7B4.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_14003664C @ 0x14003664C (sub_14003664C.c)
 */

void __fastcall sub_1400436D0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( sub_140021280(Context) )
  {
    if ( Status >= 0 )
    {
      sub_14003664C(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
      sub_14000A7B4(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
  if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4960LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)(Context + 3608), 0, 1) == 1 )
  {
    sub_140021110(*(_QWORD *)(Context + 24), 0LL, 0LL);
  }
  if ( *(_DWORD *)(Context + 3432) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 24) + 960LL) + 48LL)
                                                    + 996LL));
  *(_BYTE *)(Context + 505) &= ~1u;
}

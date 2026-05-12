/*
 * XREFs of sub_14007A400 @ 0x14007A400
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000A7B4 @ 0x14000A7B4 (sub_14000A7B4.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_14003664C @ 0x14003664C (sub_14003664C.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_14007A400(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

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
  *(_BYTE *)(Context + 505) &= ~1u;
  v8 = *(_QWORD *)(Context + 1872);
  *(_QWORD *)(Context + 2216) = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 24) + 108LL) & 1) != 0 )
  {
    *(_DWORD *)(v8 + 32) |= 0x80u;
    if ( !*(_QWORD *)(Context + 2208) )
      *(_QWORD *)(Context + 2208) = *(_QWORD *)(Context + 2216);
  }
  else
  {
    *(_DWORD *)(v8 + 32) &= ~0x80u;
  }
  PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1872), v8, v7);
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_140053738(
      *(_QWORD *)(Context + 24),
      &stru_14014A098,
      v9,
      **(_QWORD **)(Context + 1872),
      *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
      *(_BYTE *)(Context + 104),
      *(_BYTE *)(Context + 105),
      *(_BYTE *)(Context + 106),
      1);
  *(_BYTE *)(Context + 507) |= 2u;
}

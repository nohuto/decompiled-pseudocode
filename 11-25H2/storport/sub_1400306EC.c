/*
 * XREFs of sub_1400306EC @ 0x1400306EC
 * Callers:
 *     sub_140030450 @ 0x140030450 (sub_140030450.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_1400306EC(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
  v2 = *(_QWORD *)(Context + 1872);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4960LL)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3608), 1, 0) )
    {
      sub_1400212C0(*(_QWORD *)(Context + 24), 0LL, 0LL);
    }
  }
  else if ( *(_DWORD *)(Context + 548) != 1 || (*(_BYTE *)(Context + 505) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(*(PDEVICE_OBJECT *)(Context + 8), 2u, (POWER_STATE)1, sub_140042610, (PVOID)Context, 0LL) == 259 )
    {
      *(_BYTE *)(Context + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1888), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1872) + 36LL), 0, 1) )
    {
      v3 = *(_QWORD *)(Context + 24);
      if ( sub_140021280(Context) )
      {
        PoFxIdleComponent(**(_QWORD **)(Context + 1872), 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
      }
      if ( *(_QWORD *)(v3 + 4960) )
        sub_140021110(v3, 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1872));
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_140053738(
        *(_QWORD *)(Context + 24),
        (unsigned int)&unk_14014AC80,
        v4,
        **(_QWORD **)(Context + 1872),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 104),
        *(_BYTE *)(Context + 105),
        *(_BYTE *)(Context + 106),
        0);
  }
}

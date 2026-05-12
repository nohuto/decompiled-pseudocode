/*
 * XREFs of sub_14012D318 @ 0x14012D318
 * Callers:
 *     sub_14012D2A0 @ 0x14012D2A0 (sub_14012D2A0.c)
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 */

void __fastcall sub_14012D318(__int64 Context)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbp
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(Context + 16);
  v3 = *(_QWORD *)(Context + 128);
  v4 = *(_QWORD *)(v2 + 128);
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 12LL) & 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 88), &LockHandle);
  v6 = *(_QWORD *)(Context + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8) + 32LL) & 2) != 0 && v5 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( **(_BYTE **)(v4 + 160) == 1
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 128) + 96LL), 1, 0) )
    {
      PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(v4 + 160) + 8LL), 0LL, 0LL);
    }
  }
  else if ( *(_DWORD *)(v6 + 72) != 1 || (*(_DWORD *)(v6 + 80) & 4) != 0 )
  {
    *(_DWORD *)(v6 + 80) |= 2u;
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)sub_14012C180,
           (PVOID)Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(Context + 128) + 180LL), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ++*(_DWORD *)(*(_QWORD *)(Context + 128) + 168LL);
    if ( _InterlockedCompareExchange(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(Context + 128) + 8LL) + 36LL),
           0,
           1) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(Context + 16) + 128LL);
      if ( sub_1400F7308(Context) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(Context + 128) + 8LL), 0LL, 0LL);
        sub_1400F7368(Context);
      }
      v8 = *(_QWORD *)(v7 + 160);
      if ( *(_BYTE *)v8 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v8 + 8), 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)(Context + 128) + 8LL));
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 120));
}

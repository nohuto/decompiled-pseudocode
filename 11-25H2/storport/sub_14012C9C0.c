/*
 * XREFs of sub_14012C9C0 @ 0x14012C9C0
 * Callers:
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012BFD4 @ 0x14012BFD4 (sub_14012BFD4.c)
 */

__int64 __fastcall sub_14012C9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a4 + 128);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8) + 36LL), 0, 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 128LL);
    if ( sub_1400F7308(a4) )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a4 + 128) + 8LL), 0LL, 0LL);
      sub_1400F7368(a4);
    }
    v7 = *(_QWORD *)(v6 + 160);
    if ( *(_BYTE *)v7 == 1 )
      PoFxIdleComponent(**(_QWORD **)(v7 + 8), 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a4 + 128) + 88LL), &LockHandle);
  sub_14012BFD4(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)(a4 + 128) + 8LL));
}

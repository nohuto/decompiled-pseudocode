/*
 * XREFs of IoDiskIoAttributionQuery @ 0x140207594
 * Callers:
 *     IoGetIoRateControl @ 0x140207650 (IoGetIoRateControl.c)
 *     IopIoRateStartRateControl @ 0x1404951A8 (IopIoRateStartRateControl.c)
 *     PspQueryJobIoAttribution @ 0x140AE4E98 (PspQueryJobIoAttribution.c)
 * Callees:
 *     IopRecordIoAttribution @ 0x140207A74 (IopRecordIoAttribution.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall IoDiskIoAttributionQuery(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+3Ch] [rbp-2Ch]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  ULONG64 v13[3]; // [rsp+50h] [rbp-18h] BYREF

  v10 = 1;
  v12 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = 0LL;
  LODWORD(v11) = _mm_cvtsi128_si32((__m128i)0LL) | 0x200;
  v13[0] = KeQueryUnbiasedInterruptTimePrecise(v13);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  IopRecordIoAttribution(a1, &v10, 3LL);
  v6 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v7 = *(_OWORD *)(a1 + 128);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *a3 = v7;
  a3[1] = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

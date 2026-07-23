/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14095D030
 * Callers:
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x14049A4E8 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  Buffer = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 88), &Buffer, 4u, 0LL, 0LL, 0, 0);
}

/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140B623E8
 * Callers:
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     CcCopyWriteEx @ 0x14026C4B0 (CcCopyWriteEx.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcSetValidData @ 0x140489944 (CcSetValidData.c)
 *     CcInitializeTelemetry @ 0x140C85A64 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange((_DWORD *)&EmpParseLock.Affinity + 1, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(
                   (PKTIMER)&EmpParseLock.SchedulerApcFill5[8],
                   DueTime,
                   0,
                   0x3A98u,
                   (PKDPC)&EmpParseLock.NpxState);
  return v1;
}

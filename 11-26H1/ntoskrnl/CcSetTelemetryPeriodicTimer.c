/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140B5F268
 * Callers:
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     CcCopyWriteEx @ 0x14026CF40 (CcCopyWriteEx.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcSetValidData @ 0x14048FE94 (CcSetValidData.c)
 *     CcInitializeTelemetry @ 0x140C7FA64 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange((_DWORD *)&EmpParseLock.AffinityVersion + 1, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(
                   (PKTIMER)&EmpParseLock.648,
                   DueTime,
                   0,
                   0x3A98u,
                   (PKDPC)&EmpParseLock.AffinityPrimaryGroup);
  return v1;
}

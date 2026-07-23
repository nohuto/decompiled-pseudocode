/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x180110240
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18005F450 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18005F65C (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18015F990 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( TrkContext )
  {
    Handles[0] = *((HANDLE *)TrkContext + 1);
    Handles[1] = *((HANDLE *)TrkContext + 3);
    Timeout.QuadPart = -100000000LL;
    ZwSetEvent(*((HANDLE *)TrkContext + 2), 0LL);
    if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, &Timeout) == 1 )
      return 1;
  }
  byte_1801C6808 = 1;
  return 0;
}

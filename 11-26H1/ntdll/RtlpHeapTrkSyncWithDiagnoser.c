/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1801106B0
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180013D20 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x180013F2C (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18015FA90 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  if ( TrkContext )
  {
    v1[0] = *(_QWORD *)(TrkContext + 8);
    v1[1] = *(_QWORD *)(TrkContext + 24);
    v2 = -100000000LL;
    ZwSetEvent(*(_QWORD *)(TrkContext + 16), 0LL);
    if ( (unsigned int)NtWaitForMultipleObjects(2LL, v1, 1LL, 0LL, &v2) == 1 )
      return 1;
  }
  byte_1801C77C8 = 1;
  return 0;
}

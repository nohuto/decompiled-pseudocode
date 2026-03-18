/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140468120
 * Callers:
 *     EtwpCovSampSampleBufferGet @ 0x1402BFF1C (EtwpCovSampSampleBufferGet.c)
 *     EtwpCovSampLookasidePop @ 0x1402C1E48 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, struct _SLIST_ENTRY *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    result = *(unsigned int *)(a2 + 40);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( (unsigned int)result < *(_DWORD *)(v4 + 72) )
      return result;
  }
  return KiInsertQueueDpc(a1 + 1192, 0LL, 0LL, 0LL, 0);
}

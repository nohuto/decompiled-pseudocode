/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140461760
 * Callers:
 *     EtwpCovSampSampleBufferGet @ 0x14030ABE0 (EtwpCovSampSampleBufferGet.c)
 *     EtwpCovSampLookasidePop @ 0x14030CB08 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, _SLIST_ENTRY *a3)
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

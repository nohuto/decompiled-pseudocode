/*
 * XREFs of EtwpCovSampCaptureBufferRelease @ 0x140470B28
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferRelease(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v2 + 40) )
  {
    RtlpInterlockedPushEntrySList(*(PSLIST_HEADER *)(a2 + 48), (PSLIST_ENTRY)a2);
    result = *(unsigned int *)(v2 + 40);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    RtlpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v2 + 32), (PSLIST_ENTRY)a2);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( (unsigned int)result < *(_DWORD *)(v4 + 72) )
      return result;
  }
  return KiInsertQueueDpc(a1 + 1192, 0LL, 0LL, 0LL, 0);
}

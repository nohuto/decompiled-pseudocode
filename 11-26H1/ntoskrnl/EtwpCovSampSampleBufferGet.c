/*
 * XREFs of EtwpCovSampSampleBufferGet @ 0x1402BFF1C
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     EtwpCovSampCaptureQueueRebalance @ 0x1402C1874 (EtwpCovSampCaptureQueueRebalance.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140468120 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampSampleBufferGet(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY result; // rax

  v1 = a1 + 55;
  if ( !LOWORD(a1[55].Alignment) || (result = RtlpInterlockedPopEntrySList(a1 + 55)) == 0LL )
  {
    if ( *((_DWORD *)&v1[3].HeaderX64 + 1) < *((_DWORD *)&v1[3].HeaderX64 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v1[3]);
      EtwpCovSampCaptureQueueRebalance(a1);
    }
    return 0LL;
  }
  if ( !*((_DWORD *)&v1[2].HeaderX64 + 2) )
  {
    EtwpCovSampCaptureReleaseToLookaside(a1, v1, result);
    return 0LL;
  }
  result->Next = (_SLIST_ENTRY *)6941;
  *((_QWORD *)&result[3].Next + 1) = 0LL;
  result[3].Next = (_SLIST_ENTRY *)1;
  return result;
}

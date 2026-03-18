/*
 * XREFs of EtwpCovSampLookasidePop @ 0x1402C1E48
 * Callers:
 *     EtwpCovSampCaptureBufferGet @ 0x140501780 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     EtwpCovSampCaptureQueueRebalance @ 0x1402C1874 (EtwpCovSampCaptureQueueRebalance.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140468120 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( !*(_WORD *)a2 || (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2)) == 0LL )
  {
    if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      EtwpCovSampCaptureQueueRebalance(a1);
    }
    return 0LL;
  }
  if ( !*(_DWORD *)(a2 + 40) )
  {
    EtwpCovSampCaptureReleaseToLookaside(a1, a2, result);
    return 0LL;
  }
  result->Next = (_SLIST_ENTRY *)6941;
  return result;
}

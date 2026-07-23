/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x1800EC350
 * Callers:
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi

  v2 = 0;
  v3 = 0;
  RtlpAcquireHeapListLock();
  if ( (unsigned int)RtlpIsProtectedHeap(a1) )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  RtlpReleaseHeapListLock(0);
  return v3;
}

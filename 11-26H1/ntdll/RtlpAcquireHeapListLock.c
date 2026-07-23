/*
 * XREFs of RtlpAcquireHeapListLock @ 0x1800762FC
 * Callers:
 *     RtlpProcessHeapsInsert @ 0x18006C460 (RtlpProcessHeapsInsert.c)
 *     RtlpProcessHeapsRemove @ 0x18006D880 (RtlpProcessHeapsRemove.c)
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800EC350 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlpAcquireHeapListLock()
{
  return RtlEnterCriticalSection(&RtlpProcessHeapsLock);
}

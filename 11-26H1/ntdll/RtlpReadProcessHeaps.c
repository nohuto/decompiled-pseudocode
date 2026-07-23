/*
 * XREFs of RtlpReadProcessHeaps @ 0x1800C27DC
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 *     RtlpPushPageDescriptor @ 0x1800C1FB4 (RtlpPushPageDescriptor.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char RtlpReadProcessHeaps()
{
  char result; // al
  _QWORD HeapInformation[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  memset_thunk_772440563353939046(HeapInformation, 0, 0x58uLL);
  HeapInformation[0] = -1LL;
  HeapInformation[1] = 0LL;
  v3 = RtlpLeakCallbackRoutine;
  v4 = 0LL;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
  RtlpLDPreviousPage = 0LL;
  RtlpLDNumBlocks = 0;
  return result;
}

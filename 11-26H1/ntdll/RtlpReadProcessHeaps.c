/*
 * XREFs of RtlpReadProcessHeaps @ 0x1800C501C
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180091560 (RtlQueryHeapInformation.c)
 *     RtlpPushPageDescriptor @ 0x1800C47F4 (RtlpPushPageDescriptor.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char RtlpReadProcessHeaps()
{
  char result; // al
  _QWORD v1[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  memset_thunk_772440563353939046(v1, 0, 0x58uLL);
  v1[0] = -1LL;
  v1[1] = 0LL;
  v3 = RtlpLeakCallbackRoutine;
  v4 = 0LL;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, 2, v1, 0x58uLL, 0LL);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
  RtlpLDPreviousPage = 0LL;
  RtlpLDNumBlocks = 0;
  return result;
}

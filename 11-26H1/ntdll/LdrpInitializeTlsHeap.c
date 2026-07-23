/*
 * XREFs of LdrpInitializeTlsHeap @ 0x180073CDC
 * Callers:
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 * Callees:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS LdrpInitializeTlsHeap()
{
  NTSTATUS result; // eax
  void *Heap; // rax
  __int64 HeapInformation; // [rsp+40h] [rbp-18h] BYREF

  HeapInformation = 0x70616548534C54LL;
  if ( !qword_1801CA9D8 )
  {
    LdrpTlsHeap = NtCurrentPeb()->ProcessHeap;
    return 0;
  }
  Heap = (void *)RtlpCreateHeap(2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return -1073741801;
  result = RtlSetHeapInformation(Heap, HeapTag, &HeapInformation, 8uLL);
  if ( result >= 0 || AvrfAppVerifierMode )
    return 0;
  return result;
}

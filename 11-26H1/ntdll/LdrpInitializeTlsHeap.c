/*
 * XREFs of LdrpInitializeTlsHeap @ 0x180092B70
 * Callers:
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 * Callees:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 LdrpInitializeTlsHeap()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0x70616548534C54LL;
  if ( !qword_1801CB998 )
  {
    LdrpTlsHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    return 0LL;
  }
  Heap = RtlpCreateHeap(2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return 3221225495LL;
  result = RtlSetHeapInformation(Heap, 7LL, &v2);
  if ( (int)result >= 0 || AvrfAppVerifierMode )
    return 0LL;
  return result;
}

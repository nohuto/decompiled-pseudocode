/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x18011FA10
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180145520 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  bool v2; // zf

  LOWORD(result) = 0;
  while ( (unsigned __int16)result < 2u )
  {
    v2 = RtlpInterceptorRoutines[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v2 )
      return result;
  }
  return 0LL;
}

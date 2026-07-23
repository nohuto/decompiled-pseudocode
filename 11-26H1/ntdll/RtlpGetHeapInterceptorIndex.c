/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x18011F7C0
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801453D0 (RtlpSetHeapDebuggingInformation.c)
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

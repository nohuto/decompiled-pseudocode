/*
 * XREFs of RtlpCallInterceptRoutine @ 0x180007640
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801453D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}

/*
 * XREFs of RtlpCallInterceptRoutine @ 0x18001C570
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180145520 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int16 v4; // cx

  if ( a1 && (v4 = a1 - 1, v4 < 2u) )
    return ((__int64 (__fastcall *)(__int64, unsigned __int64, int))RtlpInterceptorRoutines[v4])(a2, a3, a4);
  else
    return 3221225473LL;
}

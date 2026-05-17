/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x18007DD44
 * Callers:
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014F3D4 (RtlpHpPerHeapStackTraceCleanup.c)
 */

struct _TEB *__fastcall RtlpHpStackTraceHeapDestroy(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext, a2);
  if ( (dword_1801C7858 & 1) != 0 && (dword_1801C7858 & 2) != 0 )
  {
    v4 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v4 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v4, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}

/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x180162C10
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x180003280 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlDeleteResource @ 0x180067CE0 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x180068290 (RtlpFreeDebugInfo.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlStdReleaseStackTrace @ 0x18006AD50 (RtlStdReleaseStackTrace.c)
 *     EtwpFreeRegistration @ 0x18008D758 (EtwpFreeRegistration.c)
 *     RtlInterlockedPushEntrySList @ 0x1800DDF10 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFree @ 0x1800E0118 (RtlpHpVsContextFree.c)
 *     RtlpRegisterStackTrace @ 0x1800EB364 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18016D1A0 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  signed __int64 v7; // rbx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5 + 0x20000;
    LOWORD(v7) = v5 + 1;
    v8 = v5;
    v9 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, (signed __int64)a2, v7, (signed __int64 *)&v8);
    v5 = v8;
  }
  while ( !v9 );
  return v6;
}

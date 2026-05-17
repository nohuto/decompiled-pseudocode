/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x180162D10
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800175A0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x1800181A0 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     EtwpFreeRegistration @ 0x18006D308 (EtwpFreeRegistration.c)
 *     RtlDeleteResource @ 0x1800794C0 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x180079A70 (RtlpFreeDebugInfo.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlStdReleaseStackTrace @ 0x18007C530 (RtlStdReleaseStackTrace.c)
 *     RtlpHpVsContextFree @ 0x18008E6F0 (RtlpHpVsContextFree.c)
 *     RtlInterlockedPushEntrySList @ 0x1800E0670 (RtlInterlockedPushEntrySList.c)
 *     RtlpRegisterStackTrace @ 0x1800EC194 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18016E1A0 (RtlFreeMemoryBlockLookaside.c)
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

/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x180001ED0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180006940 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x180007840 (RtlpLogHeapReuseThresholdActivate.c)
 */

bool __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  bool v4; // r8
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( !*(_WORD *)(a2 + 32) )
    return 0;
  v4 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v9 = *(unsigned __int16 *)(a1 + 172), (unsigned int)v9 <= 0x70)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v9]
    && (unsigned int)(*(_WORD *)(a2 + 40) >> 2) > *(_WORD *)(a2 + 32);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v6 = 2147353482LL;
  if ( !*(_BYTE *)v6 )
  {
    v7 = NtCurrentPeb()->SharedData;
    if ( v7 && *v7 )
      v8 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v8 = 2147353472LL;
    if ( !*(_BYTE *)v8 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
      return !v4;
  }
  if ( !v4 )
    return 1;
  RtlpLogHeapReuseThresholdActivate(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
    *(_QWORD *)(a2 + 8),
    *(unsigned __int16 *)(a1 + 172));
  return 0;
}

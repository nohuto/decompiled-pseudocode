/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x180072098
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180071E44 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x180072038 (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 result; // rax
  __int64 v8; // rcx
  int HeapProtection; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 5;
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0LL;
    a1[4] = v4;
    return result;
  }
  v8 = a1[3];
  v12 = (v4 - *v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection(v8, 1LL);
  result = ZwAllocateVirtualMemory(-1LL, v3, 0LL, &v12, 4096, HeapProtection);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += v12;
    v10 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1[3], *v3, v12, 16 * *(_QWORD *)(a1[3] + 192LL), *(unsigned __int8 *)v10);
      RtlpLogHeapCommit(a1[3], *v3, v12, 9LL);
    }
    *v3 += v12;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}

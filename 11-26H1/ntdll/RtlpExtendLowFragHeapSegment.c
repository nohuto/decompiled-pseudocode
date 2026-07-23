/*
 * XREFs of RtlpExtendLowFragHeapSegment @ 0x18009554C
 * Callers:
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800952F8 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpInitializeSegmentInfoForBucket @ 0x1800954EC (RtlpInitializeSegmentInfoForBucket.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpExtendLowFragHeapSegment(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  PVOID *v3; // rsi
  unsigned __int64 v4; // rbp
  NTSTATUS result; // eax
  _DWORD *v8; // rcx
  ULONG Protect; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v3 = (PVOID *)(a1 + 5);
  v4 = a2 + a1[4];
  if ( v4 <= a1[5] )
  {
LABEL_2:
    *a3 = a1[4];
    result = 0;
    a1[4] = v4;
    return result;
  }
  v8 = (_DWORD *)a1[3];
  RegionSize = (v4 - (_QWORD)*v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpGetHeapProtection(v8, 1);
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &RegionSize, 0x1000u, Protect);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1[3] + 576LL) += RegionSize;
    v10 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        a1[3],
        (int)*v3,
        RegionSize,
        16 * *(_QWORD *)(a1[3] + 192LL),
        (HANDLE)*(unsigned __int8 *)v10);
      RtlpLogHeapCommit(a1[3], *v3, RegionSize, 9LL);
    }
    *v3 = (char *)*v3 + RegionSize;
    goto LABEL_2;
  }
  *a3 = 0LL;
  return result;
}

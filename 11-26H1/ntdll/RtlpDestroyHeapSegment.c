/*
 * XREFs of RtlpDestroyHeapSegment @ 0x18006D7A8
 * Callers:
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x18006DD44 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int32 v8; // ebx
  __int64 v9; // rdx
  ULONG_PTR v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *v4;
  if ( *v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v2, v5, v6, 0LL);
  }
  v7 = *(_QWORD *)(a1 + 40);
  v12 = *(PVOID *)(a1 + 48);
  v11 = 0LL;
  v8 = RtlpSecMemFreeVirtualMemory((__int64)v4, &v12, &v11, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v9 = 2147353480LL;
  if ( *(_BYTE *)v9 )
    RtlpHeapLogRangeRelease(v7, v12, v11);
  return v8;
}

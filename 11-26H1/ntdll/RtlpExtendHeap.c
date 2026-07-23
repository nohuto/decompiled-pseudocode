/*
 * XREFs of RtlpExtendHeap @ 0x18000DFC0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800C9D90 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlpHeapLogRangeReserve @ 0x180113B10 (RtlpHeapLogRangeReserve.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // rcx
  ULONG Protect; // r15d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  ULONG_PTR v19[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  v19[0] = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  v4 = 0LL;
  if ( RtlpFindAndCommitPages(a1, v19) )
  {
    v19[0] >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1);
    RtlpInsertFreeBlock(a1, v5);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v5 + 8)) != ((unsigned __int8)*(_DWORD *)(v5 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v5 + 8)) ^ HIWORD(*(_DWORD *)(v5 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  v7 = a2 + 0x2000;
  v8 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v8 = *(_QWORD *)(a1 + 160);
  if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v8 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  RegionSize = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( RegionSize >= 0xFD0000 )
    RegionSize = 16580608LL;
  Protect = RtlpGetHeapProtection((PVOID)a1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    while ( RegionSize != v7 )
    {
      RegionSize >>= 1;
      if ( RegionSize < v7 )
        RegionSize = a2 + 0x2000;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
        goto LABEL_19;
    }
    ++*(_DWORD *)(a1 + 632);
    goto LABEL_7;
  }
LABEL_19:
  v10 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v22 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v22, v11, a1, a1 + 376)
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v22, 0x1000u, Protect) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           (PVOID)a1,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v22,
                           (__int64)BaseAddress + RegionSize - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v12, &BaseAddress, &RegionSize, 0x8000LL);
LABEL_7:
    if ( *(char *)(a1 + 112) >= 0
      || (result = RtlpCoalesceHeap(a1), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      result = 0LL;
      if ( v4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v4[11] = v4[8] ^ v4[9] ^ v4[10];
          *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
        }
      }
    }
    return result;
  }
  v13 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v14 = 2147353472LL;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, BaseAddress, v22, 4LL);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      a1,
      *((_QWORD *)BaseAddress + 8),
      v22,
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v13);
  }
  v15 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v16 = 2147353482LL;
  if ( *(_BYTE *)v16 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(
      a1,
      *((_QWORD *)BaseAddress + 8),
      v22,
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v15);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
    RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
  v18 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v18 + 8)) != ((unsigned __int8)*(_DWORD *)(v18 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v18 + 8)) ^ HIWORD(*(_DWORD *)(v18 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, v18);
  }
  return *((_QWORD *)BaseAddress + 8);
}

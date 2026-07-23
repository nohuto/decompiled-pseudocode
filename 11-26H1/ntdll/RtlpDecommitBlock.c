/*
 * XREFs of RtlpDecommitBlock @ 0x180002230
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180002140 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     RtlFlushSecureMemoryCache @ 0x180002600 (RtlFlushSecureMemoryCache.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapContractEvent @ 0x180095098 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180114424 (RtlpLogHeapDecommit.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

int __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  char *v8; // rcx
  NTSTATUS v9; // edi
  struct _PEB *v10; // rax
  _DWORD *SharedData; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 8);
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v5 = (_DWORD *)(a2 + 32);
    v6 = (unsigned __int64)(16 * v3 - 32) >> 2;
    if ( v6 )
    {
      if ( ((unsigned __int8)v5 & 4) != 0 )
      {
        --v6;
        *v5 = -17891602;
        v5 = (_DWORD *)(a2 + 36);
      }
      memset64(v5, 0xFEEEFEEEFEEEFEEEuLL, v6 >> 1);
      if ( (v6 & 1) != 0 )
        v5[v6 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v7 = RtlpHeapKey ^ *(_QWORD *)(a1 + 360);
  if ( !v7 )
  {
    v8 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v8;
    if ( v8 == (char *)(a2 + 80) )
    {
      v8 += 4096;
      BaseAddress = v8;
    }
    v7 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
    if ( v7 > (unsigned __int64)v8 )
    {
      RegionSize = v7 - (_QWORD)v8;
      v9 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      if ( v9 == -1073741755 && RtlFlushSecureMemoryCache(BaseAddress, RegionSize) )
        v9 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      v10 = NtCurrentPeb();
      if ( v9 < 0 )
      {
        if ( v10->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LODWORD(v7) = DbgPrint(
                        "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                        v9,
                        (const void *)a1,
                        BaseAddress,
                        RegionSize);
      }
      else
      {
        SharedData = v10->SharedData;
        v12 = 2147353472LL;
        if ( SharedData && *SharedData )
          v13 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v13 = 2147353472LL;
        if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, BaseAddress, RegionSize, 7LL);
        ++*(_DWORD *)(a1 + 628);
        ++*(_DWORD *)(a1 + 660);
        ++*(_DWORD *)(a1 + 644);
        *(_QWORD *)(a1 + 664) += RegionSize;
        v14 = NtCurrentPeb()->SharedData;
        if ( v14 && *v14 )
          v15 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v15 = 2147353472LL;
        if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v12 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            a1,
            (int)BaseAddress,
            RegionSize,
            16 * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v12);
        }
        v7 = (unsigned __int64)NtCurrentPeb();
        v16 = 2147353482LL;
        v17 = *(_DWORD **)(v7 + 144);
        if ( v17 && *v17 )
        {
          v7 = (unsigned __int64)NtCurrentPeb();
          v18 = *(_QWORD *)(v7 + 144) + 560LL;
        }
        else
        {
          v18 = 2147353482LL;
        }
        if ( *(_BYTE *)v18 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v16 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v7) = RtlpLogHeapContractEvent(
                          a1,
                          (int)BaseAddress,
                          RegionSize,
                          16 * (unsigned int)*(_QWORD *)(a1 + 192),
                          0,
                          0LL,
                          (HANDLE)*(unsigned __int8 *)v16);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v7) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a2 + 8) ^= v7;
  }
  return v7;
}

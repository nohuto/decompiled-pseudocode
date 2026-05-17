/*
 * XREFs of RtlpDecommitBlock @ 0x180017150
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x180017060 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     RtlFlushSecureMemoryCache @ 0x180017520 (RtlFlushSecureMemoryCache.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapContractEvent @ 0x180072390 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180114C28 (RtlpLogHeapDecommit.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  struct _PEB *v13; // rax
  _DWORD *SharedData; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  char *v23; // [rsp+58h] [rbp+10h] BYREF

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
  result = RtlpHeapKey ^ *(_QWORD *)(a1 + 360);
  if ( !result )
  {
    v8 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    v23 = v8;
    if ( v8 == (char *)(a2 + 80) )
    {
      v8 += 4096;
      v23 = v8;
    }
    result = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
    if ( result > (unsigned __int64)v8 )
    {
      v22 = result - (_QWORD)v8;
      v10 = ZwFreeVirtualMemory(-1LL, &v23, &v22, 0x4000LL);
      if ( v10 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(v23, v22) )
        v10 = ZwFreeVirtualMemory(-1LL, &v23, &v22, 0x4000LL);
      v13 = NtCurrentPeb();
      if ( v10 < 0 )
      {
        if ( v13->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        result = DbgPrint(
                   "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                   v10,
                   (const void *)a1,
                   v23,
                   v22);
      }
      else
      {
        SharedData = v13->SharedData;
        v15 = 2147353472LL;
        if ( SharedData && *SharedData )
          v16 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(a1, v23, v22, 7LL);
        ++*(_DWORD *)(a1 + 628);
        ++*(_DWORD *)(a1 + 660);
        ++*(_DWORD *)(a1 + 644);
        *(_QWORD *)(a1 + 664) += v22;
        v17 = NtCurrentPeb()->SharedData;
        if ( v17 && *v17 )
          v18 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v18 = 2147353472LL;
        if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v9, v11, v12) )
            v15 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(a1, (_DWORD)v23, v22, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v15);
        }
        result = (unsigned __int64)NtCurrentPeb();
        v19 = 2147353482LL;
        v20 = *(_DWORD **)(result + 144);
        if ( v20 && *v20 )
        {
          result = (unsigned __int64)NtCurrentPeb();
          v21 = *(_QWORD *)(result + 144) + 560LL;
        }
        else
        {
          v21 = 2147353482LL;
        }
        if ( *(_BYTE *)v21 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v9, v11, v12) )
            v19 = (__int64)NtCurrentPeb()->SharedData + 560;
          result = RtlpLogHeapContractEvent(
                     a1,
                     (_DWORD)v23,
                     v22,
                     16 * (unsigned int)*(_QWORD *)(a1 + 192),
                     0,
                     0LL,
                     *(unsigned __int8 *)v19);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    result = *(unsigned int *)(a1 + 136);
    *(_DWORD *)(a2 + 8) ^= result;
  }
  return result;
}

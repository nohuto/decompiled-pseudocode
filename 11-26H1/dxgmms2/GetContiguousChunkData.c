/*
 * XREFs of GetContiguousChunkData @ 0x1400A77BC
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetContiguousChunkData(char *BaseAddress, char *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebp
  int v5; // edi
  char *i; // rbx
  int v11; // eax
  int v12; // ecx
  _QWORD MemoryInformation[6]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  for ( i = BaseAddress; i != a2; i += 0x10000 )
  {
    MemoryInformation[1] = 0x10000LL;
    MemoryInformation[2] = 0x10000LL;
    MemoryInformation[4] = &v14;
    v14 = 0;
    MemoryInformation[3] = 0LL;
    MemoryInformation[0] = i;
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryBasicVlmInformation|0x8,
           MemoryInformation,
           0x28uLL,
           0LL) < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 480;
    }
    else
    {
      v11 = v4 + 1;
      v12 = v14 & 3;
      if ( v12 != 1 )
        v11 = v4;
      v4 = v11;
      if ( v12 != 1 )
        ++v5;
    }
  }
  *a3 = v4;
  *a4 = v5;
}

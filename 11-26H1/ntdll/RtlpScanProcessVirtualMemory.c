/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800C2330
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlpScanHeapAllocBlocks @ 0x1800C213C (RtlpScanHeapAllocBlocks.c)
 *     RtlpGetHeapBlock @ 0x1800C24B0 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800C2730 (RtlpGetMemoryFlag.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

char RtlpScanProcessVirtualMemory()
{
  char *v0; // r15
  NTSTATUS v1; // r12d
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rcx
  __int128 MemoryInformation; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h]

  v0 = 0LL;
  MemoryInformation = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v1 = 0;
  while ( v1 >= 0 )
  {
    v1 = ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v0,
           MemoryBasicInformation,
           &MemoryInformation,
           0x30uLL,
           0LL);
    if ( v1 >= 0 )
    {
      if ( (v12 & 0xCC) != 0
        && (v13 & 0x1000) != 0
        && (WORD2(v13) & 0x100) == 0
        && !(unsigned __int8)RtlpGetMemoryFlag(RtlpProcessMemoryMap, v0) )
      {
        v3 = v0;
        v4 = *((_QWORD *)&v12 + 1) >> 3;
        v5 = 0LL;
        for ( i = 0LL; i < v4; i = v5 )
        {
          HeapBlock = RtlpGetHeapBlock(*v3);
          if ( HeapBlock )
          {
            if ( !*(_QWORD *)(HeapBlock + 16) )
              __debugbreak();
            if ( !*(_DWORD *)(HeapBlock + 32) )
            {
              v8 = *(_QWORD *)HeapBlock;
              v9 = *(_QWORD **)(HeapBlock + 8);
              if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
                || *v9 != HeapBlock
                || (*v9 = v8,
                    *(_QWORD *)(v8 + 8) = v9,
                    v10 = (__int64 *)qword_1801CBE88,
                    *(__int64 **)qword_1801CBE88 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v10;
              *v10 = HeapBlock;
              qword_1801CBE88 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v3;
          ++v5;
        }
      }
      v0 += *((_QWORD *)&v12 + 1);
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}

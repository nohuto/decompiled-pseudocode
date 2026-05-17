/*
 * XREFs of RtlpScanProcessVirtualMemory @ 0x1800C4B70
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlpScanHeapAllocBlocks @ 0x1800C497C (RtlpScanHeapAllocBlocks.c)
 *     RtlpGetHeapBlock @ 0x1800C4CF0 (RtlpGetHeapBlock.c)
 *     RtlpGetMemoryFlag @ 0x1800C4F70 (RtlpGetMemoryFlag.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

char RtlpScanProcessVirtualMemory()
{
  _QWORD *v0; // r15
  int v1; // r12d
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rax
  __int64 HeapBlock; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h]

  v0 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v1 = 0;
  while ( v1 >= 0 )
  {
    v1 = ZwQueryVirtualMemory(-1LL, v0, 0LL, &v11, 48LL, 0LL);
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
                    v10 = (__int64 *)qword_1801CCE58,
                    *(__int64 **)qword_1801CCE58 != &RtlpBusyList) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)HeapBlock = &RtlpBusyList;
              *(_QWORD *)(HeapBlock + 8) = v10;
              *v10 = HeapBlock;
              qword_1801CCE58 = HeapBlock;
            }
            ++*(_DWORD *)(HeapBlock + 32);
          }
          ++v3;
          ++v5;
        }
      }
      v0 = (_QWORD *)((char *)v0 + *((_QWORD *)&v12 + 1));
    }
  }
  RtlpScanHeapAllocBlocks();
  return 1;
}

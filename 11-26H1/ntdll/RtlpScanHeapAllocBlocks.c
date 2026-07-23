/*
 * XREFs of RtlpScanHeapAllocBlocks @ 0x1800C213C
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x1800C2330 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpGetHeapBlock @ 0x1800C24B0 (RtlpGetHeapBlock.c)
 *     RtlpGetBlockInfo @ 0x1800C2560 (RtlpGetBlockInfo.c)
 *     RtlpDumpEntryInfo @ 0x180120E68 (RtlpDumpEntryInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char RtlpScanHeapAllocBlocks()
{
  __int64 *v0; // rbx
  __int64 *j; // rsi
  __int64 BlockInfo; // rax
  int v3; // r10d
  __int64 v4; // rbp
  void *v5; // rbx
  void *v6; // rdi
  SIZE_T v7; // rax
  _QWORD *v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 i; // rcx
  __int64 HeapBlock; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 *v16; // rcx

  v0 = (__int64 *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v9 = (_QWORD *)v0[2];
    v10 = v0;
    v11 = v0[3];
    v0 = (__int64 *)*v0;
    for ( i = (unsigned __int64)v9 + v11; (unsigned __int64)(v9 + 1) <= i; i = v10[3] + v10[2] )
    {
      HeapBlock = RtlpGetHeapBlock(*v9);
      if ( HeapBlock )
      {
        if ( !*(_DWORD *)(HeapBlock + 32) )
        {
          v14 = *(_QWORD *)HeapBlock;
          if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
            || (v15 = *(_QWORD **)(HeapBlock + 8), *v15 != HeapBlock)
            || (*v15 = v14,
                *(_QWORD *)(v14 + 8) = v15,
                v16 = (__int64 *)qword_1801CBE88,
                *(__int64 **)qword_1801CBE88 != &RtlpBusyList) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)HeapBlock = &RtlpBusyList;
          *(_QWORD *)(HeapBlock + 8) = v16;
          *v16 = HeapBlock;
          qword_1801CBE88 = HeapBlock;
        }
        ++*(_DWORD *)(HeapBlock + 32);
        if ( !*(_QWORD *)(HeapBlock + 16) )
          __debugbreak();
      }
      ++v9;
    }
  }
  for ( j = (__int64 *)RtlpLeakList; j != &RtlpLeakList; j = (__int64 *)*j )
  {
    BlockInfo = RtlpGetBlockInfo(RtlpProcessMemoryMap, j[2]);
    v4 = BlockInfo;
    if ( BlockInfo )
    {
      if ( *((_QWORD *)&xmmword_1801CC000 + 1) )
      {
        v5 = (void *)j[2];
        v6 = *(void **)(BlockInfo + 8);
        v7 = RtlSizeHeap(v6, 0, v5);
        (*((void (__fastcall **)(_QWORD, void *, void *, SIZE_T, _DWORD, _QWORD))&xmmword_1801CC000 + 1))(
          0LL,
          v6,
          v5,
          v7,
          0,
          0LL);
      }
      else
      {
        if ( !v3 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        RtlpDumpEntryInfo(*(_QWORD *)(v4 + 8), j[2]);
      }
      ++RtlpLeaksCount;
    }
  }
  if ( *((_QWORD *)&xmmword_1801CC000 + 1) )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))&xmmword_1801CC000 + 1))(
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      0LL);
  return 1;
}

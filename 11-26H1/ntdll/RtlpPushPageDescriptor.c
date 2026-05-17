/*
 * XREFs of RtlpPushPageDescriptor @ 0x1800C47F4
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800C4670 (RtlpLeakCallbackRoutine.c)
 *     RtlpReadProcessHeaps @ 0x1800C501C (RtlpReadProcessHeaps.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpGetBlockInfo @ 0x1800C4DA0 (RtlpGetBlockInfo.c)
 *     RtlpSetBlockInfo @ 0x1800C4DEC (RtlpSetBlockInfo.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlpPushPageDescriptor(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const void *BlockInfo; // rax
  __int64 Heap_0; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  const void *v10; // rdx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 *v14; // rax

  v3 = a1 << 12;
  BlockInfo = (const void *)RtlpGetBlockInfo(RtlpProcessMemoryMap, a1 << 12);
  if ( BlockInfo )
  {
    DbgPrint("Conflicting descriptors %p\n", BlockInfo);
    return 0;
  }
  Heap_0 = RtlAllocateHeap_0();
  v6 = Heap_0;
  if ( !Heap_0 )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v7 = RtlpLDNumBlocks;
  v8 = Heap_0 + 24;
  v9 = RtlpCrtHeapAddress;
  v10 = RtlpTempBlocks;
  *(_DWORD *)Heap_0 = 2;
  *(_DWORD *)(Heap_0 + 16) = v7;
  *(_QWORD *)(Heap_0 + 8) = v9;
  memmove((void *)(Heap_0 + 24), v10, 40 * v7);
  if ( v9 != RtlpLeakHeapAddress )
  {
    v11 = 0;
    if ( (int)v7 > 0 )
    {
      v12 = RtlpPreviousStartAddress;
      do
      {
        v13 = v6 + 8 * (5LL * v11 + 3);
        *(_QWORD *)(v8 + 8) = v13;
        *(_QWORD *)v8 = v13;
        if ( *(_QWORD *)(v8 + 16) != v12 )
        {
          v14 = (__int64 *)qword_1801CCE68;
          if ( *(__int64 **)qword_1801CCE68 != &RtlpLeakList )
            __fastfail(3u);
          *(_QWORD *)v8 = &RtlpLeakList;
          *(_QWORD *)(v8 + 8) = v14;
          *v14 = v8;
          qword_1801CCE68 = v8;
          v12 = *(_QWORD *)(v8 + 16);
          RtlpPreviousStartAddress = v12;
          *(_DWORD *)(v8 + 32) = 0;
        }
        ++v11;
        v8 += 40LL;
      }
      while ( v11 < (int)v7 );
    }
  }
  RtlpSetBlockInfo(RtlpProcessMemoryMap, v3, a2 << 12, v6);
  return 1;
}

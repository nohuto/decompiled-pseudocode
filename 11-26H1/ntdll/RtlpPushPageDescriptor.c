/*
 * XREFs of RtlpPushPageDescriptor @ 0x1800C1FB4
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800C1E30 (RtlpLeakCallbackRoutine.c)
 *     RtlpReadProcessHeaps @ 0x1800C27DC (RtlpReadProcessHeaps.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpGetBlockInfo @ 0x1800C2560 (RtlpGetBlockInfo.c)
 *     RtlpSetBlockInfo @ 0x1800C25AC (RtlpSetBlockInfo.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

char __fastcall RtlpPushPageDescriptor(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const void *BlockInfo; // rax
  _DWORD *Heap_0; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  const void *v10; // rdx
  int v11; // edx
  __int64 v12; // r8
  _DWORD *v13; // rax
  __int64 *v14; // rax

  v3 = a1 << 12;
  BlockInfo = (const void *)RtlpGetBlockInfo(RtlpProcessMemoryMap, a1 << 12);
  if ( BlockInfo )
  {
    DbgPrint("Conflicting descriptors %p\n", BlockInfo);
    return 0;
  }
  Heap_0 = RtlAllocateHeap_0(RtlpLeakHeap, 0, 40LL * (RtlpLDNumBlocks - 1) + 64);
  v6 = Heap_0;
  if ( !Heap_0 )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v7 = RtlpLDNumBlocks;
  v8 = (__int64)(Heap_0 + 6);
  v9 = RtlpCrtHeapAddress;
  v10 = RtlpTempBlocks;
  *Heap_0 = 2;
  Heap_0[4] = v7;
  *((_QWORD *)Heap_0 + 1) = v9;
  memmove(Heap_0 + 6, v10, 40 * v7);
  if ( v9 != RtlpLeakHeapAddress )
  {
    v11 = 0;
    if ( (int)v7 > 0 )
    {
      v12 = RtlpPreviousStartAddress;
      do
      {
        v13 = &v6[10 * v11 + 6];
        *(_QWORD *)(v8 + 8) = v13;
        *(_QWORD *)v8 = v13;
        if ( *(_QWORD *)(v8 + 16) != v12 )
        {
          v14 = (__int64 *)qword_1801CBEA8;
          if ( *(__int64 **)qword_1801CBEA8 != &RtlpLeakList )
            __fastfail(3u);
          *(_QWORD *)v8 = &RtlpLeakList;
          *(_QWORD *)(v8 + 8) = v14;
          *v14 = v8;
          qword_1801CBEA8 = v8;
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

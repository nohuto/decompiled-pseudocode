/*
 * XREFs of HalpDmaAllocateMappingResources @ 0x140CB6260
 * Callers:
 *     HalpDmaInit @ 0x140CB6740 (HalpDmaInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     MmFreeMappingAddress @ 0x140B14CF0 (MmFreeMappingAddress.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB6404 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB6464 (HalpDmaAllocateReservedMappingArray.c)
 */

__int64 HalpDmaAllocateMappingResources()
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rbx
  __int64 ReservedMapping; // rax
  __int64 v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int ReservedMappingArray; // ebx
  __int64 v23; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = MaximumProcessorCount;
  *(_QWORD *)&stru_140E3EAA8.ThreadFlags2 = HalpMmAllocCtxAlloc(v2, 8 * MaximumProcessorCount);
  if ( !*(_QWORD *)&stru_140E3EAA8.ThreadFlags2 )
    return 3221225626LL;
  v5 = HalpMmAllocCtxAlloc(v3, 4144 * MaximumProcessorCount);
  v8 = v5;
  if ( !v5 )
  {
    v9 = *(_QWORD *)&stru_140E3EAA8.ThreadFlags2;
LABEL_5:
    HalpMmAllocCtxFree((__int64)v6, v9);
    return 3221225626LL;
  }
  if ( (_DWORD)MaximumProcessorCount )
  {
    v7 = *(_QWORD **)&stru_140E3EAA8.ThreadFlags2;
    v6 = (_QWORD *)(v5 + 32);
    do
    {
      *((_DWORD *)v6 - 6) = 131128;
      v10 = v6 - 4;
      *v6 = 0LL;
      v6[1] = 4096LL;
      v6 += 518;
      *v10 = 0LL;
      *v7++ = v10;
      --v1;
    }
    while ( v1 );
  }
  v11 = 4LL;
  stru_140E3EAA8.WaitBlock[2].Object = 0LL;
  if ( (unsigned int)MaximumProcessorCount <= 4 )
  {
    stru_140E3EAA8.QueueListEntry.Flink = (struct _LIST_ENTRY *)HalpMmAllocCtxAlloc(
                                                                  (__int64)v6,
                                                                  8 * MaximumProcessorCount);
    if ( !stru_140E3EAA8.QueueListEntry.Flink )
    {
      HalpMmAllocCtxFree(v12, *(__int64 *)&stru_140E3EAA8.ThreadFlags2);
      v9 = v8;
      goto LABEL_5;
    }
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)MaximumProcessorCount )
      {
        stru_140E3EAA8.WaitBlockFill7[144] = 1;
        return 0LL;
      }
      ReservedMapping = HalpDmaAllocateReservedMapping();
      Flink = stru_140E3EAA8.QueueListEntry.Flink;
      v17 = (unsigned int)i;
      *((_QWORD *)&stru_140E3EAA8.QueueListEntry.Flink->Flink + i) = ReservedMapping;
      if ( !ReservedMapping )
        break;
    }
    if ( (_DWORD)i )
    {
      v18 = 0LL;
      do
      {
        v19 = *(__int64 *)((char *)&Flink->Flink + v18);
        MmFreeMappingAddress(*(PVOID *)(v19 + 16), 0x446C6148u);
        HalpMmAllocCtxFree(v20, v19);
        Flink = stru_140E3EAA8.QueueListEntry.Flink;
        v18 += 8LL;
        --v17;
      }
      while ( v17 );
    }
    HalpMmAllocCtxFree(v15, (__int64)Flink);
    v11 = (unsigned int)MaximumProcessorCount;
  }
  ReservedMappingArray = HalpDmaAllocateReservedMappingArray((unsigned int)MaximumProcessorCount, v11, v7);
  if ( ReservedMappingArray < 0 )
  {
    HalpMmAllocCtxFree(v21, *(__int64 *)&stru_140E3EAA8.ThreadFlags2);
    HalpMmAllocCtxFree(v23, v8);
  }
  return (unsigned int)ReservedMappingArray;
}

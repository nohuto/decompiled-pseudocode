/*
 * XREFs of RtlCreateMemoryBlockLookaside @ 0x180096780
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x1801220E0 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180096990 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x1800969C0 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180112690 (RtlDestroyMemoryZone.c)
 *     RtlAllocateMemoryZone @ 0x18016D140 (RtlAllocateMemoryZone.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlCreateMemoryBlockLookaside(
        PVOID *MemoryBlockLookaside,
        ULONG Flags,
        ULONG InitialSize,
        ULONG MinimumBlockSize,
        ULONG MaximumBlockSize)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 i; // rax
  __int64 v10; // r13
  NTSTATUS result; // eax
  PVOID v12; // rsi
  int v13; // ebp
  _SLIST_HEADER *v14; // r14
  PVOID v15; // rax
  _SLIST_HEADER *v16; // rsi
  char v17; // cl
  char v18; // cl
  PVOID Block; // [rsp+20h] [rbp-48h] BYREF
  PVOID v20; // [rsp+28h] [rbp-40h] BYREF
  SIZE_T InitialSizea; // [rsp+30h] [rbp-38h]
  PVOID MemoryZone; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&MinimumBlockSize;
  v20 = 0LL;
  MemoryZone = 0LL;
  Block = 0LL;
  *MemoryBlockLookaside = 0LL;
  if ( Flags )
    return -1073741811;
  if ( !*(_QWORD *)&InitialSize )
    return -1073741811;
  if ( !*(_QWORD *)&MinimumBlockSize )
    return -1073741811;
  v7 = *(_QWORD *)&MaximumBlockSize;
  if ( !*(_QWORD *)&MaximumBlockSize
    || *(_QWORD *)&MaximumBlockSize < *(_QWORD *)&MinimumBlockSize
    || *(_QWORD *)&MaximumBlockSize > 0x8000000000000000uLL )
  {
    return -1073741811;
  }
  if ( ((*(_QWORD *)&MinimumBlockSize - 1LL) & *(_QWORD *)&MinimumBlockSize) != 0 )
  {
    v18 = 0;
    do
    {
      ++v18;
      v5 >>= 1;
    }
    while ( v5 );
    v5 = 1LL << v18;
  }
  if ( ((*(_QWORD *)&MaximumBlockSize - 1LL) & *(_QWORD *)&MaximumBlockSize) != 0 )
  {
    v17 = 0;
    do
    {
      ++v17;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1LL << v17;
  }
  v8 = 1;
  if ( *(_QWORD *)&InitialSize < v7 )
    *(_QWORD *)&InitialSize = v7;
  InitialSizea = (*(_QWORD *)&InitialSize + 48 * (*(_QWORD *)&InitialSize / v7) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  for ( i = v5; i < v7; ++v8 )
    i *= 2LL;
  v10 = 32LL * v8;
  result = RtlCreateMemoryZone(&MemoryZone, (v10 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0);
  if ( result >= 0 )
  {
    v12 = MemoryZone;
    v13 = RtlAllocateMemoryZone(MemoryZone, v10 + 64, &Block);
    if ( v13 < 0
      || (v14 = (_SLIST_HEADER *)(((unsigned __int64)Block + 15) & 0xFFFFFFFFFFFFFFF0uLL),
          v13 = RtlCreateMemoryZone(&v20, InitialSizea, 0),
          v13 < 0) )
    {
      RtlDestroyMemoryZone(v12);
      return v13;
    }
    else
    {
      memset_thunk_772440563353939046(v14, 0, v10 + 48);
      v15 = v20;
      v14->Alignment = 0LL;
      v14->Region = (unsigned __int64)v12;
      v16 = v14 + 3;
      v14[1].Alignment = (unsigned __int64)v15;
      v14[1].Region = v5;
      v14[2].Alignment = v7;
      *((_DWORD *)&v14[2].HeaderX64 + 2) = v8;
      while ( 1 )
      {
        RtlInitializeSListHead(v16);
        v16[1].Alignment = v5;
        v16[1].Region = (unsigned __int64)v14;
        if ( v5 == v7 )
          break;
        v5 *= 2LL;
        v16 += 2;
      }
      *MemoryBlockLookaside = v14;
      return 0;
    }
  }
  return result;
}

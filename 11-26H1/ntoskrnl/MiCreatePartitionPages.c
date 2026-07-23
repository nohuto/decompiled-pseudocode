/*
 * XREFs of MiCreatePartitionPages @ 0x140881FEC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiHotAddHugeRange @ 0x14086E030 (MiHotAddHugeRange.c)
 */

__int64 __fastcall MiCreatePartitionPages(
        int a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbx
  bool v12; // zf
  int v14; // r8d
  int v15; // ecx
  ULONG *v16; // rax
  int v17; // edx
  ULONG v18; // eax
  int v19; // ecx
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF

  v8 = a5;
  v10 = a5 << 12;
  v12 = *(_BYTE *)(a2 + 16) == 0;
  a5 <<= 12;
  if ( v12 )
  {
    v26 = a4 << 12;
    if ( a1 == 2 )
    {
      v14 = 0;
      v15 = a6 != 0 ? 33024 : 0x8000;
    }
    else
    {
      if ( a1 == 11 )
      {
        v15 = 64;
      }
      else
      {
        v15 = 0;
        if ( *(ULONG **)a2 != &MiSystemPartition )
          v15 = 0x10000;
      }
      v14 = 1;
    }
    v16 = *(ULONG **)a2;
    v17 = v15 | 0x400;
    v18 = v16[1];
    if ( (a3 & 0x20) == 0 )
      v17 = v15;
    v19 = v17 | 0x40000;
    if ( (v18 & 0x20) == 0 )
      v19 = v17;
    MiAddPhysicalMemoryChunks(
      *(unsigned __int16 **)a2,
      (unsigned __int64 *)&v26,
      (unsigned __int64 *)&a5,
      *(_QWORD *)(a2 + 56),
      v19,
      v14);
    v10 = a5;
  }
  else
  {
    if ( a6 && *(_DWORD *)(a2 + 20) == 2 )
      *(_DWORD *)(a2 + 20) = 1;
    MiHotAddHugeRange(*(unsigned __int16 **)a2, a4, v8, *(_DWORD *)(a2 + 20), 0);
  }
  v20 = v10 / 4096;
  if ( !*(_BYTE *)(a2 + 16) && *(ULONG **)a2 != &MiSystemPartition )
  {
    v21 = (a4 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v22 = (v21 + v20) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v21 < v22 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v21, v22 - v21, 1);
  }
  if ( v20 == v8 )
    return 0LL;
  v23 = a8;
  v24 = a7;
  *(_DWORD *)(a2 + 24) = -1073741823;
  RtlClearBitsEx(v24 + 32, v20 + v23, *(_QWORD *)(v24 + 32) - v20 - v23);
  if ( v20 )
    ++*(_QWORD *)(a2 + 40);
  result = 3221225473LL;
  *(_QWORD *)(v24 + 24) &= ~0x8000000000000000uLL;
  *(_QWORD *)(a2 + 48) += v20;
  return result;
}

/*
 * XREFs of RtlpGetHeapBlock @ 0x1800C24B0
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x1800C213C (RtlpScanHeapAllocBlocks.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800C2330 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlpGetBlockInfo @ 0x1800C2560 (RtlpGetBlockInfo.c)
 */

__int64 __fastcall RtlpGetHeapBlock(__int64 a1)
{
  __int64 v1; // rbx
  __int64 BlockInfo; // rax
  unsigned __int64 v4; // r10
  _QWORD *v6; // rdx
  int v7; // edi
  __int64 i; // r8
  unsigned __int64 v9; // r9

  v1 = RtlpLeakHeapAddress;
LABEL_2:
  BlockInfo = RtlpGetBlockInfo(RtlpProcessMemoryMap, a1);
  if ( BlockInfo && *(_QWORD *)(BlockInfo + 8) != v1 )
  {
    v6 = (_QWORD *)(BlockInfo + 48);
    v7 = 0;
    for ( i = 0LL; i < *(int *)(BlockInfo + 16); ++i )
    {
      v9 = *(v6 - 1);
      if ( v9 <= v4 && v9 + *v6 > v4 )
      {
        if ( v9 == v4 )
          return BlockInfo + 8 * (5LL * v7 + 3);
        a1 = *(v6 - 1);
        goto LABEL_2;
      }
      ++v7;
      v6 += 5;
    }
  }
  return 0LL;
}

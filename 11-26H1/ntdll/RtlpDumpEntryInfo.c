/*
 * XREFs of RtlpDumpEntryInfo @ 0x1801210B8
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x1800C497C (RtlpScanHeapAllocBlocks.c)
 * Callees:
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 */

__int64 __fastcall RtlpDumpEntryInfo(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  unsigned __int8 *v3; // rbx
  int v4; // eax

  v2 = a1;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v3 = (unsigned __int8 *)a2;
  }
  else
  {
    v3 = (unsigned __int8 *)(a2 - 16);
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v3 -= 16 * v3[14];
  }
  v4 = RtlSizeHeap(a1, 0, a2);
  DbgPrint("%p  %-16Ix  %Id", v3, v2, v4);
  return DbgPrint("\n");
}

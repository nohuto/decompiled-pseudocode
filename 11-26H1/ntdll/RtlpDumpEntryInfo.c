/*
 * XREFs of RtlpDumpEntryInfo @ 0x180120E68
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x1800C213C (RtlpScanHeapAllocBlocks.c)
 * Callees:
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 */

ULONG __fastcall RtlpDumpEntryInfo(_DWORD *a1, unsigned __int8 *a2)
{
  int v2; // edi
  unsigned __int8 *v3; // rbx
  int v4; // eax

  v2 = (int)a1;
  if ( a1[4] == -571548178 )
  {
    v3 = a2;
  }
  else
  {
    v3 = a2 - 16;
    _m_prefetchw(a2 - 16);
    if ( *(a2 - 1) == 5 )
      v3 -= 16 * v3[14];
  }
  v4 = RtlSizeHeap(a1, 0, a2);
  DbgPrint("%p  %-16Ix  %Id", v3, v2, v4);
  return DbgPrint("\n");
}

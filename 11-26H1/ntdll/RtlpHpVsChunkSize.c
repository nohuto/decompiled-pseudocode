/*
 * XREFs of RtlpHpVsChunkSize @ 0x1800190EC
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReallocComputeSizes @ 0x1800B1670 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpVsSubsegmentWalk @ 0x1801108C8 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18011D3B4 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edx
  int v9; // edx

  v4 = a2 - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a2 & 0xFFF) == 0 )
    v4 = a2 - 32;
  if ( !(BYTE6(RtlpHpHeapGlobals) ^ (unsigned __int8)(BYTE6(v4) ^ HIWORD(*(_QWORD *)v4))) )
    return -1LL;
  v6 = 16 * (WORD1(v4) ^ WORD1(RtlpHpHeapGlobals) ^ WORD1(*(_QWORD *)v4)) - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v4 + 32) & 0xFFF) == 0 )
    v6 = 16 * (WORD1(v4) ^ WORD1(RtlpHpHeapGlobals) ^ WORD1(*(_QWORD *)v4)) - 32;
  v7 = (unsigned int)v6;
  if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
  {
    v8 = *(unsigned __int16 *)(v6 + a2 - 2);
    if ( (v8 & 0x8000u) == 0 )
      v7 -= v8 & 0x1FFF;
    else
      --v7;
    v9 = (v8 >> 14) & 1;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
    *a4 = v9;
  return v7;
}

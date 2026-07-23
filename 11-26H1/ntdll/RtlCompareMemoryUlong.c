/*
 * XREFs of RtlCompareMemoryUlong @ 0x180163160
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpHpParametersVerify @ 0x1801005E0 (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

SIZE_T __cdecl RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}

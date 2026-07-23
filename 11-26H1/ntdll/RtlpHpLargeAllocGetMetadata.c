/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x180095038
 * Callers:
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpLargeWalkHeap @ 0x180095248 (RtlpHpLargeWalkHeap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  v2 = a1 + 72;
  result = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
    result ^= v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  while ( result )
  {
    v7 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v7 )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v7 )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( v5 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}

/*
 * XREFs of RtlpHpLargeWalkHeap @ 0x180095248
 * Callers:
 *     RtlpHpHeapWalk @ 0x180094AEC (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLargeAllocGetMetadata @ 0x180095038 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocReport @ 0x180121400 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpLargeWalkHeap(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v3; // r10
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *Metadata; // rax
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rcx

  v2 = 0;
  v3 = a2;
  v4 = a1;
  if ( *a2 )
  {
    Metadata = (_QWORD *)RtlpHpLargeAllocGetMetadata(a1, *a2);
    v7 = 0LL;
    if ( Metadata )
    {
      v10 = (_QWORD *)*Metadata;
      if ( *Metadata || (v10 = (_QWORD *)Metadata[1]) != 0LL )
      {
        Metadata = v10;
      }
      else
      {
        while ( Metadata )
        {
          if ( Metadata == *(_QWORD **)(v4 + 72) )
            return (unsigned int)-2147483622;
          v11 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( Metadata != *(_QWORD **)(v11 + 8) && *(_QWORD *)(v11 + 8) )
          {
            Metadata = *(_QWORD **)(v11 + 8);
            break;
          }
          Metadata = (_QWORD *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
        }
      }
      v7 = (unsigned __int64)Metadata;
    }
    goto LABEL_7;
  }
  v5 = a1 + 72;
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    v7 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      return (unsigned int)-2147483622;
    v6 = v5 ^ v7;
  }
  else
  {
    v6 = *(_QWORD *)v5;
    v7 = *(_QWORD *)v5;
  }
  if ( v6 )
  {
LABEL_7:
    RtlpHpLargeAllocReport(v4, v7, v3);
    return v2;
  }
  return (unsigned int)-2147483622;
}

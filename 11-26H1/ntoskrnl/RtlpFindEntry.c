/*
 * XREFs of RtlpFindEntry @ 0x140521BB0
 * Callers:
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x14061B414 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x14061C6E0 (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x14061CF78 (RtlpInsertFreeBlock.c)
 *     RtlZeroHeap @ 0x140805E00 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x14051AA48 (RtlpHeapFindListLookupEntry.c)
 */

_QWORD *__fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 312);
  v4 = a1;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v2 + 8);
    if ( a2 < v5 )
      break;
    if ( !*(_QWORD *)v2 )
    {
      v6 = (unsigned int)(v5 - 1);
      goto LABEL_8;
    }
    v2 = *(_QWORD *)v2;
  }
  v6 = (unsigned int)a2;
LABEL_8:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(a1, v2, 1, v6, a2);
    if ( result )
      break;
    v2 = *(_QWORD *)v2;
    a1 = v4;
    v6 = *(unsigned int *)(v2 + 24);
  }
  return result;
}

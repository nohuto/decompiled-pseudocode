/*
 * XREFs of RtlpFindUCREntry @ 0x140628F60
 * Callers:
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x1406202F4 (RtlpInsertUCRBlock.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpHeapFindListLookupEntry @ 0x1405144B8 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 */

_QWORD *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  _QWORD *result; // rax

  if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError();
  }
  v3 = *(_QWORD *)(a1 + 320);
  if ( v3 )
  {
    v4 = a2 >> 12;
    while ( 1 )
    {
      v5 = *(unsigned int *)(v3 + 8);
      if ( v4 < v5 )
        break;
      if ( !*(_QWORD *)v3 )
      {
        v4 = (unsigned int)(v5 - 1);
        return RtlpHeapFindListLookupEntry(a1, v3, 0, v4, a2);
      }
      v3 = *(_QWORD *)v3;
    }
    return RtlpHeapFindListLookupEntry(a1, v3, 0, v4, a2);
  }
  else
  {
    for ( result = *(_QWORD **)(a1 + 240); (_QWORD *)(a1 + 240) != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (_QWORD *)(a1 + 240);
  }
}

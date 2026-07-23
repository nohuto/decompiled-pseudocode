/*
 * XREFs of EtwpAddLastDroppedEvent @ 0x140482284
 * Callers:
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpAddEventToBuffer @ 0x140ABD298 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddLastDroppedEvent(__int64 a1, __int64 a2)
{
  int UsedProcessorCount; // eax
  __int64 v4; // rdx
  int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  char v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1568) )
    return 3221225659LL;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, a2);
  v7 = EtwpAddEventToBuffer(v6, 82LL, v4 + 88, *(_QWORD *)(a1 + 1568), 8 * UsedProcessorCount + 8, v5, &v11);
  if ( !v7 )
    return 3221225990LL;
  v9 = EtwpQueryUsedProcessorCount(a1, v7);
  *v10 = v9;
  memmove(v10 + 2, *(const void **)(a1 + 1568), 8LL * v9);
  return 0LL;
}

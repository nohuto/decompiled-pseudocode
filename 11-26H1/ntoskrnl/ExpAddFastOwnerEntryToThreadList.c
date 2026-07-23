/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x140275C10
 * Callers:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1406D2680 (ExpConvertSharedToExclusiveImmediately.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpAddFastOwnerEntryToThreadList(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a3 )
  {
    v6 = a1 + 1744;
    result = *(_QWORD **)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
LABEL_3:
      __fastfail(3u);
    *a4 = result;
    a4[1] = v6;
    result[1] = a4;
    *(_QWORD *)v6 = a4;
  }
  else
  {
    result = (_QWORD *)(a1 + 1720);
    v5 = *(_QWORD *)(a1 + 1720);
    if ( *(_QWORD **)(v5 + 8) != result )
      goto LABEL_3;
    *a4 = v5;
    a4[1] = result;
    *(_QWORD *)(v5 + 8) = a4;
    *result = a4;
  }
  return result;
}

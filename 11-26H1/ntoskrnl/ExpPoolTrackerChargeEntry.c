/*
 * XREFs of ExpPoolTrackerChargeEntry @ 0x140399730
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     ExpTrackTableGetMoreLimit @ 0x1406D0CE4 (ExpTrackTableGetMoreLimit.c)
 */

unsigned __int64 __fastcall ExpPoolTrackerChargeEntry(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  signed __int64 v8; // r14
  unsigned __int64 result; // rax
  __int64 v10; // r13
  signed __int64 v11; // r12

  v4 = 8LL;
  if ( a1 != 1 )
    v4 = 32LL;
  v7 = 16LL;
  if ( a1 != 1 )
    v7 = 40LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + a3));
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + a3), a2);
  if ( !*(_QWORD *)(a3 + 72) )
    return 1LL;
  v10 = a3 + 8LL * (int)a1;
LABEL_8:
  v11 = *(_QWORD *)(v10 + 56);
  while ( (v11 & 1) == 0 && v11 < v8 )
  {
    result = ExpTrackTableGetMoreLimit(*(_QWORD *)(a3 + 72), a2, a1);
    if ( !result )
      return result;
    if ( result == 1 )
    {
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 56), 1LL, v11) )
        goto LABEL_8;
      return 1LL;
    }
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 56), result);
    v8 = *(_QWORD *)(v4 + a3);
  }
  return 1LL;
}

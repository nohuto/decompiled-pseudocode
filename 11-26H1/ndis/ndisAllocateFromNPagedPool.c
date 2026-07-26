/*
 * XREFs of ndisAllocateFromNPagedPool @ 0x140050A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisAllocateFromNPagedPool(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *Pool2; // rax

  if ( NumberOfBytes + 32 < NumberOfBytes )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(66LL, NumberOfBytes + 32, Tag);
  if ( !Pool2 )
    return 0LL;
  *Pool2 = 0LL;
  return Pool2 + 4;
}

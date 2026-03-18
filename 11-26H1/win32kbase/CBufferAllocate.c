/*
 * XREFs of CBufferAllocate @ 0x14000AD24
 * Callers:
 *     CreateNewEventEntry @ 0x14000AA9C (CreateNewEventEntry.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CBufferAllocate(char a1, _QWORD *a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  if ( !a3 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), a3, 0x47417254u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, a3);
  result = 1LL;
  a2[1] = a3;
  return result;
}

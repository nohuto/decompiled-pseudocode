/*
 * XREFs of CBufferAllocate @ 0x14045A5C8
 * Callers:
 *     CreateNewEventEntry @ 0x14045A338 (CreateNewEventEntry.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CBufferAllocate(char a1, _QWORD *a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  if ( !a3 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), a3, 0x47417254u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset_0(PoolWithTag, 0, a3);
  result = 1LL;
  a2[1] = a3;
  return result;
}

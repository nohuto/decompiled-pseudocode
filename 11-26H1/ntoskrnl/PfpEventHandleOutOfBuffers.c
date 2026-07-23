/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x1404A5AC0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1404A5AF4 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a2);
  if ( (int)result < 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return result;
}

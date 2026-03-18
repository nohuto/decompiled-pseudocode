/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x1404AC430
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1404AC464 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a2);
  if ( (int)result < 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return result;
}

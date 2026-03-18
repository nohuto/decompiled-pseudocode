/*
 * XREFs of ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x140041DE0
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234070 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedBuffer::AllocateRefCountedBuffer(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a1 + 16;
  if ( a1 + 16 < a1 )
  {
    WdLogSingleEntry1(3LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 401;
    return result;
  }
  result = 0LL;
  v5 = v3;
  if ( a1 == -16 )
  {
    v5 = 1LL;
  }
  else if ( v3 > 0x7FFFFFFFuLL )
  {
    return result;
  }
  return ExAllocatePool2(a3, v5, 1265072196LL);
}

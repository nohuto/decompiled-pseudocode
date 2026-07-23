/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1404374EC
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x1404376F0 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404E7B80 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalpDmaDequeueAdapter @ 0x14058BA08 (HalpDmaDequeueAdapter.c)
 */

char __fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // r9

  v2 = a2;
  do
  {
    LOBYTE(a2) = v2;
    v4 = HalpDmaDequeueAdapter(a1, a2);
    if ( !v4 )
      break;
    LOBYTE(v4) = HalpAllocateDmaResourcesInternal(v4, 1, 0LL, v5);
  }
  while ( (_BYTE)v4 );
  return v4;
}

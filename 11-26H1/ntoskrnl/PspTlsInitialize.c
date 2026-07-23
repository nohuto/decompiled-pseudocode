/*
 * XREFs of PspTlsInitialize @ 0x140CDF468
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     PsTlsAlloc @ 0x140802A80 (PsTlsAlloc.c)
 *     RtlpFlsInitialize @ 0x14080F7AC (RtlpFlsInitialize.c)
 */

__int64 PspTlsInitialize()
{
  __int64 v0; // rdx
  unsigned int i; // ebx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  RtlpFlsInitialize();
  PspTlsPreAllocatedSlotCount = ExGenRandom(0, v0) & 7;
  for ( i = 0; i < PspTlsPreAllocatedSlotCount; ++i )
  {
    result = PsTlsAlloc(0LL, 0, &v3);
    if ( (int)result < 0 )
    {
      PspTlsPreAllocatedSlotCount = i;
      return result;
    }
  }
  return 0LL;
}

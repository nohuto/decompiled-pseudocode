/*
 * XREFs of RtlUpdateSwapReference @ 0x18005F764
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005F370 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 */

unsigned __int64 __fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( result )
  {
    v4 = result + _InterlockedExchangeAdd64(a1 + 1, result);
    if ( v4 )
    {
      do
      {
        RtlpWaitOnAddress(a1 + 1, &v4, 8LL);
        result = *((_QWORD *)a1 + 1);
        v4 = result;
      }
      while ( result );
    }
  }
  return result;
}

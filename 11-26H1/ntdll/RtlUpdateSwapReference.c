/*
 * XREFs of RtlUpdateSwapReference @ 0x180014034
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x180013C40 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
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
        RtlpWaitOnAddress((_DWORD)a1 + 8, (unsigned int)&v4, 8, 0, RtlpWaitOnAddressSpinCycleCount, 0LL);
        result = *((_QWORD *)a1 + 1);
        v4 = result;
      }
      while ( result );
    }
  }
  return result;
}

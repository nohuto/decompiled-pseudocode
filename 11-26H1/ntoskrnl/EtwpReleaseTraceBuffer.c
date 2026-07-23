/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x140258A90
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpReleaseTraceBuffer(signed __int64 *a1)
{
  signed __int64 v1; // r9
  signed __int64 *v2; // rdx
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  while ( (v1 ^ (unsigned __int64)result) < 0xF )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(v2, result + 1, result);
    if ( v4 == result )
      return result;
  }
  result = *a1;
  _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  return result;
}

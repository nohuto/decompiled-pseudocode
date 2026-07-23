/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1404CB9C0
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(0x40uLL);
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}

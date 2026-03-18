/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1404D1E10
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x1402662D0 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140AA32C0 (PfSnBeginTrace.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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

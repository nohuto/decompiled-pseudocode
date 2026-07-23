/*
 * XREFs of HalpApicX2EndOfInterrupt @ 0x1407279E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpApicX2EndOfInterrupt()
{
  __int64 result; // rax

  result = 0LL;
  __writemsr(0x80Bu, 0LL);
  return result;
}

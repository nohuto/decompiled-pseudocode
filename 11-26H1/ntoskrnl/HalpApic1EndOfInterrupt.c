/*
 * XREFs of HalpApic1EndOfInterrupt @ 0x1407279C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void HalpApic1EndOfInterrupt()
{
  *(_DWORD *)(HalpLocalApic + 176) = 0;
}

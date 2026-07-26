/*
 * XREFs of NdisImmediateReadPortUchar @ 0x1400DA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400DA178 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateReadPortUchar(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 1u, 1);
}

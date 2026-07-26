/*
 * XREFs of NdisImmediateWritePortUchar @ 0x1400DA550
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400DA178 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateWritePortUchar(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, &v4, 1u, 0);
}

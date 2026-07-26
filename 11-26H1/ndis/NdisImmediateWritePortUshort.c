/*
 * XREFs of NdisImmediateWritePortUshort @ 0x1400DA5B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400DA178 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateWritePortUshort(__int64 a1, unsigned int a2, __int16 a3)
{
  __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, (unsigned __int8 *)&v4, 2u, 0);
}

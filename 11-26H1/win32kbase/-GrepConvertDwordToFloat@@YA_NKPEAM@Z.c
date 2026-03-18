/*
 * XREFs of ?GrepConvertDwordToFloat@@YA_NKPEAM@Z @ 0x1400101A0
 * Callers:
 *     ?GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z @ 0x1400100C0 (-GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GrepConvertDwordToFloat(int a1, float *a2)
{
  *(_DWORD *)a2 = a1;
  return 1;
}

/*
 * XREFs of ?GreProbeForWriteToUntrustedVa@@YAXPEAX_K1@Z @ 0x14013C810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreProbeForWriteToUntrustedVa(void *a1, SIZE_T a2, ULONG a3)
{
  ProbeForWrite(a1, a2, a3);
}

/*
 * XREFs of ?GreProbeForWriteToUntrustedVa@@YAXPEAX_K@Z @ 0x1401C6090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreProbeForWriteToUntrustedVa(void *a1, SIZE_T a2)
{
  ProbeForWrite(a1, a2, 1u);
}

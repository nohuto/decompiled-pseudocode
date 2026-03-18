/*
 * XREFs of PpvDmaInit @ 0x140C21134
 * Callers:
 *     VfDmaPluginEntry @ 0x1406476A0 (VfDmaPluginEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvDmaInit(char a1)
{
  PpvDmaVerifierEnabled = a1;
}

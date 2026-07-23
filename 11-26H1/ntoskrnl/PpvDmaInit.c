/*
 * XREFs of PpvDmaInit @ 0x140C27144
 * Callers:
 *     VfDmaPluginEntry @ 0x14064B280 (VfDmaPluginEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvDmaInit(char a1)
{
  PpvDmaVerifierEnabled = a1;
}

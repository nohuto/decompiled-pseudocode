/*
 * XREFs of VfMajorInit @ 0x140C373C0
 * Callers:
 *     ViIovPluginUnload @ 0x140646580 (ViIovPluginUnload.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *VfMajorInit()
{
  return memset_0(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}

/*
 * XREFs of VfMajorInit @ 0x140B82F30
 * Callers:
 *     ViIovPluginUnload @ 0x140698E60 (ViIovPluginUnload.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *VfMajorInit()
{
  return memset_0(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}

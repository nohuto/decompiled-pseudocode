/*
 * XREFs of VfMajorInit @ 0x140C313B0
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *VfMajorInit()
{
  return memset_0(&ViMajorVerifierRoutines, 0, 0xB40uLL);
}

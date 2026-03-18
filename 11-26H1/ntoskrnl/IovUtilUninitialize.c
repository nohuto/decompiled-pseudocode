/*
 * XREFs of IovUtilUninitialize @ 0x140C311F8
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}

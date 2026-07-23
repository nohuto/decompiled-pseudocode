/*
 * XREFs of IovUtilUninitialize @ 0x140C37208
 * Callers:
 *     ViIovPluginUnload @ 0x140646580 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}

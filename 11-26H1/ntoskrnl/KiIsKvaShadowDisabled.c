/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1405F2210
 * Callers:
 *     KiEnableKvaShadowing @ 0x140BF8180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

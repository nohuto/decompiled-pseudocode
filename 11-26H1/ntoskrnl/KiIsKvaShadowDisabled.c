/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1405F4BD0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

/*
 * XREFs of ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x140218DE4
 * Callers:
 *     ActivateKSTInputProcessingHelper @ 0x140218E00 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 */

bool ShouldKSTInitializeHidSensor(void)
{
  return (unsigned int)IsCurrentProcessDwm() == 0;
}

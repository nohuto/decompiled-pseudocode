/*
 * XREFs of ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x14021DCB4
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     ActivateKSTInputProcessingHelper @ 0x14021DCD0 (ActivateKSTInputProcessingHelper.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 */

bool __fastcall ShouldKSTInitializeHidSensor(__int64 a1)
{
  return (unsigned int)IsCurrentProcessDwm(a1) == 0;
}

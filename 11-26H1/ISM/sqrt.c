/*
 * XREFs of sqrt @ 0x18009AB90
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18006256C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801B2C98 (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C6280 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}

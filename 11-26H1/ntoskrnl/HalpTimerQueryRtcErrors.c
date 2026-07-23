/*
 * XREFs of HalpTimerQueryRtcErrors @ 0x14057A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpTimerQueryRtcErrors()
{
  return HalpTimerRtcErrorCode & 0x1F;
}

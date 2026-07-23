/*
 * XREFs of TpWaitForJobNotification @ 0x1800C7010
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppJobpValidateJob @ 0x1800C704C (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x1800C7350 (TppJobpRundownJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}

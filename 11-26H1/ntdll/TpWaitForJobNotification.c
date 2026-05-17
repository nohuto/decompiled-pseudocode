/*
 * XREFs of TpWaitForJobNotification @ 0x1800C9890
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppJobpValidateJob @ 0x1800C98CC (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x1800C9BD0 (TppJobpRundownJob.c)
 */

struct _TEB *__fastcall TpWaitForJobNotification(__int64 a1)
{
  struct _TEB *result; // rax

  result = (struct _TEB *)TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((signed __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}

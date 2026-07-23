/*
 * XREFs of PspSendWakeNotification @ 0x140A88408
 * Callers:
 *     PspDispatchWakeNotification @ 0x1407FD6F0 (PspDispatchWakeNotification.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x1404BDAB8 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x14077D224 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, __int16 a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && (((1 << a2) & *a3) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140FC0C10 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent((__int64)Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}

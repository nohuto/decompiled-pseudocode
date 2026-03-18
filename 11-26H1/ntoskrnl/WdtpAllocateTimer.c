/*
 * XREFs of WdtpAllocateTimer @ 0x140AA403C
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x140AA3FA4 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     ExAllocateTimer @ 0x140456CE0 (ExAllocateTimer.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

struct _KEVENT *WdtpAllocateTimer()
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v1; // rbx
  __int64 Timer; // rax

  Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( Pool2 )
  {
    Pool2->Header.Type = 119;
    Timer = ExAllocateTimer((__int64)WdtpTimerCallback, (__int64)Pool2, 0);
    *(_QWORD *)&v1[2].Header.Lock = Timer;
    if ( Timer )
    {
      KeInitializeEvent(v1 + 4, NotificationEvent, 0);
    }
    else
    {
      ExFreePoolWithTag(v1, 0x54645750u);
      return 0LL;
    }
  }
  return v1;
}

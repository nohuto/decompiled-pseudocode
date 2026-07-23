/*
 * XREFs of WdtpAllocateTimer @ 0x140AA4D68
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x140AA4CD0 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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

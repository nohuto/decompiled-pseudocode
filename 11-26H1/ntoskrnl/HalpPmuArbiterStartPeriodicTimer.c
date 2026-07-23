/*
 * XREFs of HalpPmuArbiterStartPeriodicTimer @ 0x140B133D0
 * Callers:
 *     HalpRegisterPmuNotification @ 0x140B12C3C (HalpRegisterPmuNotification.c)
 * Callees:
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 */

__int64 HalpPmuArbiterStartPeriodicTimer()
{
  unsigned int v0; // ebx
  void *Timer; // rax

  v0 = 0;
  HalpPmuArbiter.CycleTime = (volatile unsigned __int64)HalpPmuArbiterPeriodicWorkItem;
  *(_QWORD *)&HalpPmuArbiter.CurrentRunTime = 0LL;
  HalpPmuArbiter.StackBase = 0LL;
  Timer = (void *)ExAllocateTimer((__int64)HalpPmuArbiterPeriodicTimerCallback, 0LL, 0x80000000);
  HalpPmuArbiter.StackLimit = Timer;
  if ( Timer )
    ExSetTimer(
      (ULONG_PTR)Timer,
      -(__int64)(10000 * HalpPmuArbiter.SystemCallNumber),
      10000 * HalpPmuArbiter.SystemCallNumber,
      0LL);
  else
    return (unsigned int)-1073741670;
  return v0;
}

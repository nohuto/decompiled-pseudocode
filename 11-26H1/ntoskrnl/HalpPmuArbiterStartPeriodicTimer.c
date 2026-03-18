/*
 * XREFs of HalpPmuArbiterStartPeriodicTimer @ 0x140B11650
 * Callers:
 *     HalpRegisterPmuNotification @ 0x140B10EBC (HalpRegisterPmuNotification.c)
 * Callees:
 *     ExSetTimer @ 0x14037A420 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x140456CE0 (ExAllocateTimer.c)
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

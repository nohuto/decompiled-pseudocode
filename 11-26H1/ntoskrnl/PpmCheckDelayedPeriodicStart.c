/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x1404BBD00
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckDelayedPeriodicStart(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[4] = a1;
  result = PpmCheckCustomRun(0LL);
  PopSleepstudySessionLock.Timer.Header.Type = 0;
  return result;
}

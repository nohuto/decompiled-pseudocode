/*
 * XREFs of PopIntSteerSetMode @ 0x140611F60
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v4; // eax

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v4 = 1;
  }
  else
  {
    PpmIntSteerMode = *a2;
    v4 = 0;
  }
  PpmIntSteerDisabled = v4;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, (__int64)a2, 4u);
  PpmCheckReInit();
  PpmCheckCustomRun(4LL);
  return 0LL;
}

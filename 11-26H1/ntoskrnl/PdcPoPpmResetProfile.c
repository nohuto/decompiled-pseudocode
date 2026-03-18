/*
 * XREFs of PdcPoPpmResetProfile @ 0x140A9C680
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x140A9C6CC (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140A9C784 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, __int64 a2, unsigned int a3)
{
  LONG result; // eax

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( (_BYTE)a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
      PpmEnableProfile(a1);
      return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}

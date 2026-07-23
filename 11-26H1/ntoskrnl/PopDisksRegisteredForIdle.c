/*
 * XREFs of PopDisksRegisteredForIdle @ 0x1404D1B58
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v2; // dl
  unsigned __int64 *i; // rax

  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 2) != 0 )
    return 1;
  v0 = 0;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
  for ( i = (unsigned __int64 *)PpmIdlePolicyLock.WaitBlock[3].Object;
        i != &PpmIdlePolicyLock.Spare18;
        i = (unsigned __int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v2);
  return v0;
}

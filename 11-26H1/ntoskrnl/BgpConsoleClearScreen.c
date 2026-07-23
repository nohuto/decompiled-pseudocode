/*
 * XREFs of BgpConsoleClearScreen @ 0x140C55D40
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpConsoleClearScreenEx @ 0x140C55D78 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( WheapPfaLock.SchedulerApc.NormalContext )
    v0 = BgpConsoleClearScreenEx();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}

/*
 * XREFs of BgpConsoleClearScreen @ 0x140C4FD40
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpConsoleClearScreenEx @ 0x140C4FD78 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( WheapPfaLock.SavedApcState.ApcListHead[1].Flink )
    v0 = BgpConsoleClearScreenEx();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}

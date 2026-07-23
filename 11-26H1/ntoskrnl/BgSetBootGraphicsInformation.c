/*
 * XREFs of BgSetBootGraphicsInformation @ 0x14071A7DC
 * Callers:
 *     BgkSetBootGraphicsInformation @ 0x140C55794 (BgkSetBootGraphicsInformation.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x14071ADF0 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
    v5 = BgpFwSetBootGraphicsInformation(v4, a2);
  else
    v5 = -1073741823;
  BgpFwReleaseLock();
  return v5;
}

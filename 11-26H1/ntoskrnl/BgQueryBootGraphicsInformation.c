/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x140715A80
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x140C4F008 (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140501CD4 (BgpFwQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int BootGraphicsInformation; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation(a1, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock();
  return BootGraphicsInformation;
}

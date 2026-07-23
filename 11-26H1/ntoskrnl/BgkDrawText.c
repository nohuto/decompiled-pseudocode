/*
 * XREFs of BgkDrawText @ 0x140C5564C
 * Callers:
 *     NtDrawText @ 0x1406CF650 (NtDrawText.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     BgpTxtDisplayString @ 0x140C57FA0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgkDrawText(int a1)
{
  unsigned int v2; // ebx
  int v3; // r8d
  int v4; // r9d

  if ( !byte_140E65F51 || !byte_140E65F52 )
    return 3221225473LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock();
    if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) == 0
      || (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x100) != 0 )
    {
      v2 = -1073741823;
    }
    else if ( gLoadedDiffHivesLock.Affinity && gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink )
    {
      v2 = BgpTxtDisplayString(gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink, a1, v3, v4);
    }
    else
    {
      v2 = -1073741670;
    }
    BgpFwReleaseLock();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}

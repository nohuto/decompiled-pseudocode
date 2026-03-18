/*
 * XREFs of MmIsMdlPageLocked @ 0x140C436B4
 * Callers:
 *     MmAreMdlPagesLocked @ 0x140C43650 (MmAreMdlPagesLocked.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140C43A60 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C43B34 (ViSpMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14041BB70 (MiUnlockPage.c)
 *     MiIsPfn @ 0x14042D9E0 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x14049A9D4 (MiIsPfnLocked.c)
 */

__int64 __fastcall MmIsMdlPageLocked(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  char v5; // si
  BOOL IsPfnLocked; // ebp

  v3 = 0;
  if ( !MiIsPfn(a1) )
    return 1LL;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) == 2 )
  {
    v5 = 17;
  }
  else
  {
    v5 = MiSafeLockPage(a1, v2);
    if ( v5 == 17 )
      return 1LL;
  }
  IsPfnLocked = MiIsPfnLocked(v4);
  if ( v5 != 17 )
    MiUnlockPage(v4, v5);
  LOBYTE(v3) = IsPfnLocked;
  return v3;
}

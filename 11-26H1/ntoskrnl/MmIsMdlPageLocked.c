/*
 * XREFs of MmIsMdlPageLocked @ 0x140C496C4
 * Callers:
 *     MmAreMdlPagesLocked @ 0x140C49660 (MmAreMdlPagesLocked.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140C49A70 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140C49B44 (ViSpMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1404133C0 (MiUnlockPage.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x140494524 (MiIsPfnLocked.c)
 */

__int64 __fastcall MmIsMdlPageLocked(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdi
  char v6; // si
  BOOL IsPfnLocked; // ebp

  v4 = 0;
  if ( !MiIsPfn(a1) )
    return 1LL;
  v5 = 48 * a1 - 0x220000000000LL;
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 2 )
  {
    v6 = 17;
  }
  else
  {
    v6 = MiSafeLockPage(a1, v2, v3);
    if ( v6 == 17 )
      return 1LL;
  }
  IsPfnLocked = MiIsPfnLocked(v5);
  if ( v6 != 17 )
    MiUnlockPage(v5, v6);
  LOBYTE(v4) = IsPfnLocked;
  return v4;
}

/*
 * XREFs of BgLibraryEnable @ 0x140715A08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x1405C53A0 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpFwLibraryEnable @ 0x140715E2C (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v4; // ebx

  if ( a2 )
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0xC00u;
  if ( !a1 )
    return (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
    v4 = BgpFwLibraryEnable(a1);
  else
    v4 = -1073741637;
  BgpFwReleaseLock();
  return v4;
}

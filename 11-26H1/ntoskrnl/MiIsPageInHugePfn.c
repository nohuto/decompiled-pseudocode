/*
 * XREFs of MiIsPageInHugePfn @ 0x140315910
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x1403158BC (MiIsPageInIoHugeRangeTransition.c)
 *     MiValidateAndLockAweMapCountPage @ 0x140479C7C (MiValidateAndLockAweMapCountPage.c)
 *     MmGetCacheAttributeEx @ 0x1406EFBD0 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406F0774 (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx

  if ( *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags && (v2 = a1 >> 18, v2 < 0x400000) )
    return _bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v2 & 0x3FFFFF) != 0;
  else
    return 0LL;
}

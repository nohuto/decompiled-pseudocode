/*
 * XREFs of MiIsPageInHugePfn @ 0x1403138E0
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x14031388C (MiIsPageInIoHugeRangeTransition.c)
 *     MiValidateAndLockAweMapCountPage @ 0x14048033C (MiValidateAndLockAweMapCountPage.c)
 *     MmGetCacheAttributeEx @ 0x1406EAF30 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406EBAD4 (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406ECDE4 (MiMarkHugePfnGood.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F2184 (MiUpdateBadPfnIdentity.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14086A430 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx

  if ( *(_QWORD *)&stru_140E2EB88.WaitRegister.Flags && (v2 = a1 >> 18, v2 < 0x400000) )
    return _bittest64(*(const signed __int64 **)&stru_140E2EB88.WaitRegister.Flags, v2 & 0x3FFFFF) != 0;
  else
    return 0LL;
}

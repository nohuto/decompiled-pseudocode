/*
 * XREFs of RawCleanupVcb @ 0x140919A0C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1404B6C14 (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404F6FE8 (RawCheckForDeleteVolume.c)
 *     RawMountVolume @ 0x14091B1FC (RawMountVolume.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1404B4AF0 (ExFreeCacheAwareRundownProtection.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RawCleanupVcb(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  void *Oplock; // rcx
  PFSRTL_ADVANCED_FCB_HEADER v3; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *ReservedContext; // rcx

  Oplock = AdvancedHeader[1].Oplock;
  if ( Oplock )
  {
    ExFreePoolWithTag(Oplock, 0);
    AdvancedHeader[1].Oplock = 0LL;
    v3 = AdvancedHeader + 1;
  }
  else
  {
    v3 = AdvancedHeader + 1;
    if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 8) != 0 )
    {
      ExFreePoolWithTag(AdvancedHeader[1].FileContextSupportPointer, 0);
      AdvancedHeader[1].FileContextSupportPointer = 0LL;
    }
  }
  if ( (*(_DWORD *)&v3->NodeTypeCode & 0x10) != 0 )
    FsRtlTeardownPerStreamContexts(AdvancedHeader);
  ReservedContext = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)AdvancedHeader[1].ReservedContext;
  if ( ReservedContext )
    ExFreeCacheAwareRundownProtection(ReservedContext);
  AdvancedHeader[1].ReservedContext = 0LL;
}

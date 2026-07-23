/*
 * XREFs of VfFaultsRemoveAllApps @ 0x140C3A978
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x14064C1E4 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x14064C2B0 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140C3AAB4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
  {
    qword_140F08C28 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
  }
  else
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    v1 = (PVOID **)ViFaultApplicationsList;
    v2 = v0;
    if ( ViFaultApplicationsList != &ViFaultApplicationsList )
    {
      do
      {
        v3 = *v1;
        ExFreePoolWithTag(v1, 0);
        v1 = (PVOID **)v3;
      }
      while ( v3 != &ViFaultApplicationsList );
    }
    qword_140F08C28 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}

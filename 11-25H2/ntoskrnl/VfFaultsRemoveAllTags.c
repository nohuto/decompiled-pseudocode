/*
 * XREFs of VfFaultsRemoveAllTags @ 0x140B86774
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x1406094F4 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x1406095C0 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140B86814 (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllTags()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultTagsList || ViFaultTagsList == &ViFaultTagsList )
  {
    qword_140F03DC8 = (__int64)&ViFaultTagsList;
    ViFaultTagsList = &ViFaultTagsList;
  }
  else
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    v1 = (PVOID **)ViFaultTagsList;
    v2 = v0;
    if ( ViFaultTagsList != &ViFaultTagsList )
    {
      do
      {
        v3 = *v1;
        ExFreePoolWithTag(v1, 0);
        v1 = (PVOID **)v3;
      }
      while ( v3 != &ViFaultTagsList );
    }
    ViHaveFaultTags = 0;
    qword_140F03DC8 = (__int64)&ViFaultTagsList;
    ViFaultTagsList = &ViFaultTagsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}

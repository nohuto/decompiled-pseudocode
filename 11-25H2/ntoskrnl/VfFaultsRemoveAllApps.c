/*
 * XREFs of VfFaultsRemoveAllApps @ 0x140B866DC
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x1406094F4 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x1406095C0 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140B86814 (VfFaultsSetParameters.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
  {
    qword_140F03B48 = (__int64)&ViFaultApplicationsList;
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
    qword_140F03B48 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}

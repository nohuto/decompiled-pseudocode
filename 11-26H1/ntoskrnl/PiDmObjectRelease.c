/*
 * XREFs of PiDmObjectRelease @ 0x1409A6000
 * Callers:
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14077AB6C (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14077CA04 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListInitEnumCallback @ 0x1407A75B0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1407A77A8 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x140987A90 (PiDmObjectCreate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140990010 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409A2C44 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409A3F50 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1409A4110 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDmCacheDataFree @ 0x1409A7440 (PiDmCacheDataFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1409A7DD4 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1409A8548 (PiDqQueryActionQueueEntryFree.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409D80BC (PiUEventFreeClientRegistrationContext.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListRemoveObjectWorker @ 0x140AF4068 (PiDmListRemoveObjectWorker.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFBBCC (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140B61D78 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x1409A7440 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x140A6A2E0 (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  __int64 v3; // rsi
  char *v4; // rdi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = v5;
      v4 = (char *)(P + 28);
      do
      {
        PiDmCacheDataFree(v4);
        v4 += 24;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}

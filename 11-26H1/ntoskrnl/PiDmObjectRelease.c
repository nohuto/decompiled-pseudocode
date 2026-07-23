/*
 * XREFs of PiDmObjectRelease @ 0x140966A60
 * Callers:
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14077DA9C (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14077F4F8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListInitEnumCallback @ 0x1407AA160 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1407AA358 (PiDmObjectManagerPopulate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140950A70 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1409636A4 (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140964B70 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDmCacheDataFree @ 0x140967EA0 (PiDmCacheDataFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x140968828 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140968F58 (PiDqQueryActionQueueEntryFree.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409A9750 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListRemoveObjectWorker @ 0x140B16674 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140B64E18 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmCacheDataFree @ 0x140967EA0 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x140A76C80 (PiDmGetCacheKeys.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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

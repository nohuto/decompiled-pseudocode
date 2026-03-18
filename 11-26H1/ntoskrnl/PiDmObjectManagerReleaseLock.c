/*
 * XREFs of PiDmObjectManagerReleaseLock @ 0x1409D90A4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1409A8588 (PiDqQueryAppendActionEntry.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x140AF3F20 (PiDmListAddObjectWorker.c)
 *     PiDmListRemoveObjectWorker @ 0x140AF4068 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B350F8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PiDmObjectManagerReleaseLock(struct _ERESOURCE *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
}

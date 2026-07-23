/*
 * XREFs of PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409B79A8
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledDeviceUsageNoInline @ 0x1405DB524 (Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PipConvertResolutionsToReservations @ 0x140B6320C (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemovedDeviceNodeDependencyCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = 0;
  if ( (unsigned int)Feature_Servicing_PnpSurpriseFailRemove__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 80LL);
      if ( v4 )
        v2 = PipConvertResolutionsToReservations(v4);
    }
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue();
  }
  return v2;
}

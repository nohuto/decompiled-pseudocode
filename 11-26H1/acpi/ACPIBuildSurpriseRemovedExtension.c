/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x14001C264
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x14001C0D0 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitRemoveDeviceExtension @ 0x14001C148 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDockFindCorrespondingDock @ 0x14001C6D4 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     AcpiCleanupDeviceExtensionEarly @ 0x14005498C (AcpiCleanupDeviceExtensionEarly.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(_QWORD *a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // r14
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  const signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rdi
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+54h] [rbp-Ch]

  v18 = 0;
  *(_OWORD *)NewIrql = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock();
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 368) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v13[1] = 0LL;
  v13[0] = a1 + 100;
  SpinLock = &AcpiDeviceTreeLock;
  v16 = 816LL;
  v17 = 1;
  for ( i = ACPIExtListStartEnum(v13); ; i = ACPIExtListEnumNext(v13) )
  {
    v4 = i;
    if ( *(_QWORD *)&NewIrql[8] + v16 == v13[0] )
      break;
    if ( v17 == 1 )
    {
      ACPIInitReferenceDeviceExtension();
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  if ( v17 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice((__int64)a1, 0);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = a1 + 1;
  v7 = a1[1] & 0x20LL;
  v8 = a1[1] & 0x40LL;
  if ( v8 || (v9 = a1 + 1, v7) )
  {
    _InterlockedAnd64(v6, 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64(v6, 0x8000000000100uLL);
    if ( v8 )
    {
      _InterlockedOr64(v6, 0x40uLL);
      a1[3] = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    v9 = a1 + 1;
    if ( v7 )
    {
      _InterlockedOr64(v6, 0x20uLL);
      v9 = a1 + 1;
      a1[3] = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64(v6, 0x80uLL);
  if ( !_bittest64(v9, 0x2Bu) )
  {
    v12 = a1[99];
    if ( v12 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v12 + 8), 0x20000000000uLL);
      if ( a1[95] )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v12 + 784), SingleBusRelations);
      }
    }
  }
  AcpiCleanupDeviceExtensionEarly(a1);
  ACPIInitRemoveDeviceExtension(a1);
  if ( a1[95] )
  {
    if ( !_bittest64(v9, 0x2Bu) )
    {
      v10 = a1[98];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)a1);
      }
    }
    *(_QWORD *)(*(_QWORD *)a1[95] + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}

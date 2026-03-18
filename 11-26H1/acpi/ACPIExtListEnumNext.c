/*
 * XREFs of ACPIExtListEnumNext @ 0x14001D86C
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x14001C6D4 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C050 (ACPIInitDeleteChildDeviceList.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051218 (ACPIGpeBuildWakeMasks.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  char *v7; // rdi
  KIRQL v8; // al
  __int64 v9; // rcx
  char *result; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v2;
    v5 = *(_QWORD **)(v4 + v3);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
      v5 = *(_QWORD **)(a1 + 8);
      v6 = (_QWORD *)*v5;
    }
    v7 = (char *)v5 - v4;
    *(_QWORD *)(a1 + 8) = v6;
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), v2);
    ACPIInitDereferenceDeviceExtensionUnlocked(*(_QWORD *)(a1 + 32));
    v8 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v9 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v8;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = v7;
    if ( &v7[v9] != *(char **)a1 )
      return v7;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_QWORD **)(v11 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v12 == v12 )
      v12 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = (char *)v12 - v11;
    *(_QWORD *)(a1 + 8) = *v12;
    result = 0LL;
    if ( v12 != *(_QWORD **)a1 )
      return (char *)v12 - v11;
  }
  return result;
}

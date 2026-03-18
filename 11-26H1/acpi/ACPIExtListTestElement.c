/*
 * XREFs of ACPIExtListTestElement @ 0x14001E418
 * Callers:
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIExtListTestElement(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !(_BYTE)a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      ACPIInitReferenceDeviceExtension(v3, a2);
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(v4 + 16), *(_BYTE *)(v4 + 24));
    }
    return 1;
  }
}

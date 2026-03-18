/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x140063B70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004D91C (EnableDisableRegionSpacesForDevice.c)
 */

void __fastcall OSNotifyCreateOperationRegionWorker(_QWORD *P)
{
  ULONG_PTR v1; // rbx

  v1 = P[4];
  if ( *(_DWORD *)(v1 + 368) == 3 )
    EnableDisableRegionSpacesForDevice(P[4], 1);
  ACPIInitDereferenceDeviceExtensionUnlocked(v1);
  ExFreePoolWithTag(P, 0x4D706341u);
}

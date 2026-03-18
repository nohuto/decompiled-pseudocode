/*
 * XREFs of ACPIExtListExitEnumEarly @ 0x140055C8C
 * Callers:
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIExtListExitEnumEarly(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) == 2 )
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
}

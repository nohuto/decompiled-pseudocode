/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x140912C40
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140AA7A68 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PiDeviceRegistration(a1, 0LL, 0LL);
}

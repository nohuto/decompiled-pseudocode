/*
 * XREFs of PepWpsUpdateWorker @ 0x14003B200
 * Callers:
 *     <none>
 * Callees:
 *     PepQueryUpdateWpsTable @ 0x14003AF3C (PepQueryUpdateWpsTable.c)
 */

void __fastcall PepWpsUpdateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PepQueryUpdateWpsTable((__int64)DeviceObject->DeviceExtension);
}

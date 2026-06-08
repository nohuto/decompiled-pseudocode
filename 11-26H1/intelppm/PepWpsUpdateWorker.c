/*
 * XREFs of PepWpsUpdateWorker @ 0x14003C4D0
 * Callers:
 *     <none>
 * Callees:
 *     PepQueryUpdateWpsTable @ 0x14003C200 (PepQueryUpdateWpsTable.c)
 */

void __fastcall PepWpsUpdateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PepQueryUpdateWpsTable((__int64)DeviceObject->DeviceExtension);
}

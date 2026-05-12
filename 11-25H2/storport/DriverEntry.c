/*
 * XREFs of DriverEntry @ 0x1401B9010
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetSrb @ 0x14006DF70 (StorPortGetSrb.c)
 *     sub_1401B9044 @ 0x1401B9044 (sub_1401B9044.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_1401B9044();
  return StorPortGetSrb();
}

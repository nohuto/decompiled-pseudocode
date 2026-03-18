/*
 * XREFs of DriverEntry @ 0x140049010
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000DA00 @ 0x14000DA00 (sub_14000DA00.c)
 *     sub_140049044 @ 0x140049044 (sub_140049044.c)
 */

NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_140049044();
  return sub_14000DA00((__int64)DriverObject, (__int64)RegistryPath);
}

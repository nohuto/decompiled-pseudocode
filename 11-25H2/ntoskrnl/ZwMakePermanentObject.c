/*
 * XREFs of ZwMakePermanentObject @ 0x14069D440
 * Callers:
 *     NtCreateCpuPartition @ 0x140765E10 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMakePermanentObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}

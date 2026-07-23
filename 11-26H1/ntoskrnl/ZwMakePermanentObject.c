/*
 * XREFs of ZwMakePermanentObject @ 0x14072A2C0
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F7440 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMakePermanentObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}

/*
 * XREFs of ZwTerminateEnclave @ 0x14069EB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}

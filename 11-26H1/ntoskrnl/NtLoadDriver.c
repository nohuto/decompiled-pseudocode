/*
 * XREFs of NtLoadDriver @ 0x140B3DA10
 * Callers:
 *     DifNtLoadDriverWrapper @ 0x14067DEC0 (DifNtLoadDriverWrapper.c)
 * Callees:
 *     IopLoadDriverImage @ 0x14052C948 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}

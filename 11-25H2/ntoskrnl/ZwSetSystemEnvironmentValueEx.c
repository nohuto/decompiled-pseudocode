/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x14069E8A0
 * Callers:
 *     BiDeleteEfiVariable @ 0x140A25CC8 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

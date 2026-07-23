/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x14072B740
 * Callers:
 *     DifZwSetSystemEnvironmentValueExWrapper @ 0x1406BF680 (DifZwSetSystemEnvironmentValueExWrapper.c)
 *     BiDeleteEfiVariable @ 0x1409A2B3C (BiDeleteEfiVariable.c)
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

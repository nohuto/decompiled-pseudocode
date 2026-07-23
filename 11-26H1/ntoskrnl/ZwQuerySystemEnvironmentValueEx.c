/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14072AD80
 * Callers:
 *     DifZwQuerySystemEnvironmentValueExWrapper @ 0x1406B7D70 (DifZwQuerySystemEnvironmentValueExWrapper.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x140815A58 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1409A2B3C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x14072AD60
 * Callers:
 *     DifZwQuerySystemEnvironmentValueWrapper @ 0x1406B7F20 (DifZwQuerySystemEnvironmentValueWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

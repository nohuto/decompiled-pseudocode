/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x14072B720
 * Callers:
 *     DifZwSetSystemEnvironmentValueWrapper @ 0x1406BF820 (DifZwSetSystemEnvironmentValueWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

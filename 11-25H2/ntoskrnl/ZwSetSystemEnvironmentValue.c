/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x14069E880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

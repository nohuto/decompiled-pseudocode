/*
 * XREFs of ExecuteHotpatchTestRuntimeFunction @ 0x1801377C8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

int *ExecuteHotpatchTestRuntimeFunction()
{
  int *result; // rax

  result = &RuntimeGlobal;
  if ( &RuntimeGlobal == (int *)32 )
    RuntimeGlobal = 20;
  RuntimeGlobal = 0;
  return result;
}

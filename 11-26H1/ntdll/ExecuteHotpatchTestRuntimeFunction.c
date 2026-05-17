/*
 * XREFs of ExecuteHotpatchTestRuntimeFunction @ 0x180137A58
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
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

/*
 * XREFs of GetHotpatchTestRuntimeFunctionState @ 0x1801377F4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800C9630 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 GetHotpatchTestRuntimeFunctionState()
{
  return (unsigned int)RuntimeGlobal;
}

/*
 * XREFs of GetHotpatchTestRuntimeFunctionState @ 0x180137A84
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800CBEC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     <none>
 */

__int64 GetHotpatchTestRuntimeFunctionState()
{
  return (unsigned int)RuntimeGlobal;
}

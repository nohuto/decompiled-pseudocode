/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x1800818D0
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     RtlpRemoveVectoredHandler @ 0x18007E530 (RtlpRemoveVectoredHandler.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800ED2C0 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FF4BC (LdrpInitializeCfgScpHelpers.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     RtlRemoteCall @ 0x180148280 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforced()
{
  return qword_1801E3518 && (dword_1801E34FC & 1) == 0;
}

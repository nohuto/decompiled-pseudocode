/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180078C70
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfpSnapDllImports @ 0x1800C4600 (AVrfpSnapDllImports.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800DFA80 (RtlpRemoveVectoredHandler.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800EC760 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FEC0C (LdrpInitializeCfgScpHelpers.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     RtlRemoteCall @ 0x180148130 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  return LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0;
}

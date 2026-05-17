/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     LdrpCfgCheckRoutineCallback @ 0x18007FFA0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x1800814B0 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C62D4 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x1800C6B50 (RtlValidateUserCallTarget.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801481D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  return qword_1801E3518 && (dword_1801E34FC & 1) == 0 && (BYTE5(qword_1801E3500) & 3) == 3;
}

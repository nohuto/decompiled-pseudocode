/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     LdrpCfgCheckRoutineCallback @ 0x180077340 (LdrpCfgCheckRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180078850 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x1800C4310 (RtlValidateUserCallTarget.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180148080 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  return LdrSystemDllInitBlock.CfgBitMap
      && (LdrSystemDllInitBlock.Flags & 1) == 0
      && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}

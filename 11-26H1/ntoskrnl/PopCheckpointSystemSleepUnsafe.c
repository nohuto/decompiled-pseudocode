/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x140BFE178
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140B3CC20 (PopEnableSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 *     VslReportBugCheckProgress @ 0x1405C3C90 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14083AE70 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !LOBYTE(stru_140F10828.WriteOperationCount) )
    return ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v2, 1, 1);
  if ( LOBYTE(PopModernStandbyStateNotify.GlobalUpdateVpThreadPriorityListEntry.Flink) )
    return VslReportBugCheckProgress(
             (char *)L"SystemSleepCheckpoint",
             (__int128 *)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             &v2,
             1u,
             1);
  return HalSetEnvironmentVariableEx(
           L"SystemSleepCheckpoint",
           (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
           (__int64)&v2,
           1,
           1);
}

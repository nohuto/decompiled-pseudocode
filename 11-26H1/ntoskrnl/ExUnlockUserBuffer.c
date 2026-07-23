/*
 * XREFs of ExUnlockUserBuffer @ 0x14040F520
 * Callers:
 *     ExpGetLookasideInformation @ 0x1406CDD00 (ExpGetLookasideInformation.c)
 *     ExpGetObjectInformation @ 0x1407774F4 (ExpGetObjectInformation.c)
 *     ExpGetLockInformation @ 0x140778318 (ExpGetLockInformation.c)
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140842D5C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x140843DB0 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140A2E370 (NtQueryBootEntryOrder.c)
 *     ExpGetHandleInformationEx @ 0x140A2ED04 (ExpGetHandleInformationEx.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetHandleInformation @ 0x140A2F8F0 (ExpGetHandleInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140A2FEC4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

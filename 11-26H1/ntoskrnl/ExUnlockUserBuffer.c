/*
 * XREFs of ExUnlockUserBuffer @ 0x14040FE00
 * Callers:
 *     ExpGetLookasideInformation @ 0x1406C9D20 (ExpGetLookasideInformation.c)
 *     ExpGetObjectInformation @ 0x1407744F4 (ExpGetObjectInformation.c)
 *     ExpGetLockInformation @ 0x140775318 (ExpGetLockInformation.c)
 *     KdSystemDebugControl @ 0x14077D2F0 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x14083D430 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x14083DB70 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     MiCopyLargeVad @ 0x14087FE1C (MiCopyLargeVad.c)
 *     ExpGetHandleInformationEx @ 0x140906AA4 (ExpGetHandleInformationEx.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetHandleInformation @ 0x140907690 (ExpGetHandleInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140907D64 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 * Callees:
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}

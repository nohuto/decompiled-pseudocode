/*
 * XREFs of BcdCloseObject @ 0x1409A5E18
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407E21BC (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408975E0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409A0B80 (BiBindEfiEntryToBcdObject.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  char v2; // bl
  NTSTATUS v3; // eax

  v2 = (unsigned __int8)BcdObjectHandle & 1;
  v3 = BiAcquireBcdSyncMutant((unsigned __int8)BcdObjectHandle & 1);
  if ( v3 < 0 )
    return BiLogMessage(4LL, L"BcdCloseObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
  BiCloseKey(BcdObjectHandle);
  return BiReleaseBcdSyncMutant(v2);
}

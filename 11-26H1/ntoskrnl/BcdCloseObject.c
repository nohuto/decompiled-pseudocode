/*
 * XREFs of BcdCloseObject @ 0x1409D4E38
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407DDB8C (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408911E4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140893620 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140893C10 (BiCreateEfiEntry.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409CFBA0 (BiBindEfiEntryToBcdObject.c)
 *     PopBcdClearPendingResume @ 0x1409D08F8 (PopBcdClearPendingResume.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 *     PopBcdSetPendingResume @ 0x140B4C7C4 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 */

__int64 __fastcall BcdCloseObject(HANDLE Handle)
{
  char v2; // bl
  int v3; // eax

  v2 = (unsigned __int8)Handle & 1;
  v3 = BiAcquireBcdSyncMutant((unsigned __int8)Handle & 1);
  if ( v3 < 0 )
    return BiLogMessage(4LL, L"BcdCloseObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
  BiCloseKey(Handle);
  return BiReleaseBcdSyncMutant(v2);
}

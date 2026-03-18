/*
 * XREFs of VfFastIoSnapState @ 0x140C4824C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140903288 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1409B4538 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 *     ViIoCallbackSnapState @ 0x140C46180 (ViIoCallbackSnapState.c)
 */

_DWORD *__fastcall VfFastIoSnapState(__int64 a1)
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(201, 194LL, 0LL, 0LL, 0LL, 4u, *(_QWORD *)(a1 + 24));
  return ViIoCallbackSnapState();
}

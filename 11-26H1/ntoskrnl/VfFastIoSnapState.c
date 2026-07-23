/*
 * XREFs of VfFastIoSnapState @ 0x140C4E25C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140933218 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1409855F8 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     ViIoCallbackSnapState @ 0x140C4C190 (ViIoCallbackSnapState.c)
 */

_DWORD *__fastcall VfFastIoSnapState(__int64 a1)
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(201, 194LL, 0LL, 0LL, 0LL, 4u, *(_QWORD *)(a1 + 24));
  return ViIoCallbackSnapState();
}

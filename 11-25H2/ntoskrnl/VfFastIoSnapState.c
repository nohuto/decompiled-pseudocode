/*
 * XREFs of VfFastIoSnapState @ 0x140B997F8
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140861A40 (IopQueryInformation.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x1408ED534 (IopGetBasicInformationFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     ViIoCallbackSnapState @ 0x140B97F14 (ViIoCallbackSnapState.c)
 */

_DWORD *__fastcall VfFastIoSnapState(__int64 a1)
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(201, 194LL, 0LL, 0LL, 0LL, 4u, *(_QWORD *)(a1 + 24));
  return ViIoCallbackSnapState();
}

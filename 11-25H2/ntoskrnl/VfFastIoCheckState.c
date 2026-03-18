/*
 * XREFs of VfFastIoCheckState @ 0x140B99470
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
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfFastIoCheckState(unsigned int *Entry, ULONG_PTR BugCheckParameter2)
{
  __int64 v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(196, 195LL, BugCheckParameter2, 0LL, 0LL, 4u, BugCheckParameter2);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    CarReportRuleViolationFromNt(
      201,
      17LL,
      BugCheckParameter2,
      *(unsigned __int8 *)Entry,
      KeGetCurrentIrql(),
      4u,
      BugCheckParameter2);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = Entry[1];
    if ( (_DWORD)v4 != KeGetCurrentThread()->WaitBlock[3].SpareLong )
      CarReportRuleViolationFromNt(
        196,
        198LL,
        BugCheckParameter2,
        KeGetCurrentThread()->CombinedApcDisable,
        v4,
        4u,
        BugCheckParameter2);
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}

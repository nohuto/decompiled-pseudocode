/*
 * XREFs of VfFastIoCheckState @ 0x140C4DF34
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
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
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

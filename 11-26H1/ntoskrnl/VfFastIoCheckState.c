/*
 * XREFs of VfFastIoCheckState @ 0x140C47F24
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
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
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

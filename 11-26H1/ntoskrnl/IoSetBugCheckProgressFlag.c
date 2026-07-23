/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x1405350D0
 * Callers:
 *     IoEscalateBugCheck @ 0x1405C8F08 (IoEscalateBugCheck.c)
 *     IoRetryAsMiniDump @ 0x1405C9D24 (IoRetryAsMiniDump.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405CB638 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405CBEE8 (IopFillTriageDumpDataBlocks.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405CB1F8 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    result = IopBugCheckProgressEfiVariableServicesAvailable();
    if ( (_BYTE)result )
    {
      BugCheckProgressEfiCalled = 1;
      result = guard_dispatch_icall_no_overrides(L"BugCheckProgress", BUGCHECK_EFI_GUID);
      BugCheckProgressEfiCalled = 0;
    }
  }
  return result;
}

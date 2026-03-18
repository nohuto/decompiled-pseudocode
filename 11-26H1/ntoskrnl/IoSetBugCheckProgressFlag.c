/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x140532C30
 * Callers:
 *     IoEscalateBugCheck @ 0x1405C6638 (IoEscalateBugCheck.c)
 *     IoRetryAsMiniDump @ 0x1405C7454 (IoRetryAsMiniDump.c)
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405C8C08 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405C8D68 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405C9618 (IopFillTriageDumpDataBlocks.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D4728 (IoAddPagesForPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FA874 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405C8928 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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

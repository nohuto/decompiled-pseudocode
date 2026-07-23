/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x1405CA25C
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405CB1F8 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void IoSetBugCheckProgressAndFlag()
{
  int v0; // eax

  if ( CrashdmpDumpBlock )
  {
    v0 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v0 & 0x860000) == 0 )
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v0 & 0xFFFFFE00 | 0x25;
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
    if ( (unsigned __int8)IopBugCheckProgressEfiVariableServicesAvailable() )
    {
      BugCheckProgressEfiCalled = 1;
      guard_dispatch_icall_no_overrides(L"BugCheckProgress", BUGCHECK_EFI_GUID);
      BugCheckProgressEfiCalled = 0;
    }
  }
}

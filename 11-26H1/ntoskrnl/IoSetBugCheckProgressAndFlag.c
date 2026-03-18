/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x1405C798C
 * Callers:
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 * Callees:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405C8928 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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

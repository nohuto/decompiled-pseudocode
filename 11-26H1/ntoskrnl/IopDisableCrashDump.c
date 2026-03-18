/*
 * XREFs of IopDisableCrashDump @ 0x1405C8BA8
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 * Callees:
 *     IopDumpTraceCrashDumpDisabled @ 0x1405C8EC8 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405C90B8 (IopDumpTraceDisableCrashDumpFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopDisableCrashDump(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( CrashdmpImageEntry && qword_140E65E78 && CrashdmpInitialized )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
    v2 = v3;
    if ( v3 >= 0 )
    {
      CrashdmpInitialized = 0;
      CrashdmpDumpBlock = 0LL;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v3);
    }
  }
  return v2;
}

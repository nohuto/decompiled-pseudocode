/*
 * XREFs of IopDisableCrashDump @ 0x1405CB478
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 * Callees:
 *     IopDumpTraceCrashDumpDisabled @ 0x1405CB798 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405CB988 (IopDumpTraceDisableCrashDumpFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopDisableCrashDump(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( CrashdmpImageEntry && qword_140E66018 && CrashdmpInitialized )
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

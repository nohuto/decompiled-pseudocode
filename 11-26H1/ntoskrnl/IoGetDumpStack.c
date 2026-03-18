/*
 * XREFs of IoGetDumpStack @ 0x140B5FFE0
 * Callers:
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x14050DC74 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x14050F1D4 (IopLoadCrashdumpDriver.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x1405C94E8 (IopDumpTraceLoadDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2)
{
  int CrashdumpDriver; // eax
  unsigned int v4; // ebx
  int v5; // eax

  CrashdumpDriver = IopLoadCrashdumpDriver();
  v4 = CrashdumpDriver;
  if ( CrashdumpDriver >= 0 )
  {
    v5 = guard_dispatch_icall_no_overrides((__int64)L"hiber_", a2);
    v4 = v5;
    if ( v5 < 0 )
      IopDumpTraceLoadDumpStackFailure(v5);
  }
  else
  {
    IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  }
  return v4;
}

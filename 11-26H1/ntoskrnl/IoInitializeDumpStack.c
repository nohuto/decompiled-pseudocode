/*
 * XREFs of IoInitializeDumpStack @ 0x1405C9B00
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 * Callees:
 *     IopDumpTraceInitializeDumpStackFailure @ 0x1405CBCAC (IopDumpTraceInitializeDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E66008 )
    {
      v2 = guard_dispatch_icall_no_overrides(a1, 0LL);
      v1 = v2;
      if ( v2 < 0 && KeGetCurrentIrql() < 0xFu )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v2);
    }
  }
  return v1;
}

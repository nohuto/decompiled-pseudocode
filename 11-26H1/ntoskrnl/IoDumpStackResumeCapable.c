/*
 * XREFs of IoDumpStackResumeCapable @ 0x1405C65C8
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoDumpStackResumeCapable(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E65E98 )
      return guard_dispatch_icall_no_overrides(a1, qword_140E65E98);
  }
  return result;
}

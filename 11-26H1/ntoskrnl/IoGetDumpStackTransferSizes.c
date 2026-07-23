/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x1405345D8
 * Callers:
 *     PopHiberInitializeResources @ 0x140B2C534 (PopHiberInitializeResources.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140E66040;
    if ( qword_140E66040 )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}

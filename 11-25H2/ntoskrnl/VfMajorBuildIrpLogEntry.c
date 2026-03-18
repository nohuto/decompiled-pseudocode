/*
 * XREFs of VfMajorBuildIrpLogEntry @ 0x140B82E90
 * Callers:
 *     VfIrpLogRecordEvent @ 0x140B8B6A4 (VfIrpLogRecordEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorBuildIrpLogEntry(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v3; // rdx

  v1 = 0;
  if ( qword_140FFF6E8 )
    v1 = guard_dispatch_icall_no_overrides(a1);
  v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (unsigned int)v3 > 0x1B )
    v3 = (unsigned int)((_DWORD)v3 != 255) + 28;
  if ( qword_140FFEC68[12 * v3] )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1);
  return v1;
}

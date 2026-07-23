/*
 * XREFs of VfMajorBuildIrpLogEntry @ 0x140C37320
 * Callers:
 *     VfIrpLogRecordEvent @ 0x140C41720 (VfIrpLogRecordEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorBuildIrpLogEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // ebp
  unsigned __int8 v5; // dl
  __int64 v6; // rcx

  v2 = 0;
  v3 = a2;
  if ( qword_140FF40B8 )
    v2 = guard_dispatch_icall_no_overrides(a1, a2);
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( v5 > 0x1Bu )
    v6 = (v5 != 0xFF) + 28LL;
  else
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( qword_140FF3638[12 * v6] )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v3);
  return v2;
}

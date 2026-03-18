/*
 * XREFs of RtlpStackDbEntryCleanup @ 0x1406235F0
 * Callers:
 *     RtlStackDbStackAdd @ 0x140443078 (RtlStackDbStackAdd.c)
 *     RtlpStackDbEntryCreate @ 0x14044380C (RtlpStackDbEntryCreate.c)
 *     RtlStackDbStackRemove @ 0x1406233C0 (RtlStackDbStackRemove.c)
 * Callees:
 *     RtlpStackDbSegmentRemoveRef @ 0x1406236B0 (RtlpStackDbSegmentRemoveRef.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpStackDbEntryCleanup(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v4; // ebx
  _QWORD *v6; // rdi

  v2 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 23) + 7) >> 3;
  if ( v4 )
  {
    v6 = (_QWORD *)(a2 + 24);
    do
    {
      if ( !*v6 )
        break;
      RtlpStackDbSegmentRemoveRef(a1);
      ++v2;
      ++v6;
    }
    while ( v2 < v4 );
  }
  return guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 64));
}

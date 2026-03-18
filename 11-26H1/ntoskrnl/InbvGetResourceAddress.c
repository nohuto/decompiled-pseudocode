/*
 * XREFs of InbvGetResourceAddress @ 0x1405C4CB0
 * Callers:
 *     DisplayBootBitmap @ 0x14057622C (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetResourceAddress(__int64 a1, __int64 a2)
{
  if ( qword_140E65CE0 && *(_QWORD *)(qword_140E65CE0 + 128) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0LL;
}

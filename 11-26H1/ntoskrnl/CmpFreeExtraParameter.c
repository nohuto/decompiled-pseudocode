/*
 * XREFs of CmpFreeExtraParameter @ 0x140975FD0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmpFreeParseContext @ 0x1409756C0 (CmpFreeParseContext.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  if ( a1[4] )
    guard_dispatch_icall_no_overrides((__int64)(a1 + 2), (__int64)(a1 + 6));
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}

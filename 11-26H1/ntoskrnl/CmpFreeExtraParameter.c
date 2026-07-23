/*
 * XREFs of CmpFreeExtraParameter @ 0x140937FE0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     CmpFreeParseContext @ 0x1409376D0 (CmpFreeParseContext.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  if ( a1[4] )
    guard_dispatch_icall_no_overrides((__int64)(a1 + 2), (__int64)(a1 + 6));
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}

/*
 * XREFs of SeValidateFileAsImageType @ 0x140B5EF54
 * Callers:
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateFileAsImageType(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.WriteTransferCount )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}

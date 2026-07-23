/*
 * XREFs of SeValidateFileAsImageType @ 0x140B620D4
 * Callers:
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateFileAsImageType(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.TracingPrivate[0] )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}

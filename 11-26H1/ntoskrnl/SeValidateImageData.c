/*
 * XREFs of SeValidateImageData @ 0x140AC0288
 * Callers:
 *     MiValidateEntireInPage @ 0x14038C548 (MiValidateEntireInPage.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.WriteTransferCount )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221226536LL;
}

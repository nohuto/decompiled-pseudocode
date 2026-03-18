/*
 * XREFs of SeValidateImageData @ 0x140ABDC98
 * Callers:
 *     MiValidateEntireInPage @ 0x14038A798 (MiValidateEntireInPage.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.ReadOperationCount )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221226536LL;
}

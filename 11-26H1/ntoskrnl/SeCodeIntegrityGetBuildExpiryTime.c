/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x140B500A0
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x14083EBE0 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = SepRmCapTableLock.ExtendedFeatureDisableMask;
  if ( SepRmCapTableLock.ExtendedFeatureDisableMask )
    return guard_dispatch_icall_no_overrides((__int64)a1, a2);
  *a1 = 0LL;
  return result;
}

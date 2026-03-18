/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x140B4D810
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1408389A0 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void *__fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1, __int64 a2)
{
  void *result; // rax

  result = SepRmCapTableLock.KernelShadowStack;
  if ( SepRmCapTableLock.KernelShadowStack )
    return (void *)guard_dispatch_icall_no_overrides((__int64)a1, a2);
  *a1 = 0LL;
  return result;
}

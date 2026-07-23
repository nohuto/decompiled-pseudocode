/*
 * XREFs of AuthzBasepMemAlloc @ 0x1403B24D0
 * Callers:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFDC80 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 AuthzBasepMemAlloc()
{
  ULONG_PTR v0; // rcx

  v0 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v0 = 64LL;
  return ExAllocatePool2(v0);
}

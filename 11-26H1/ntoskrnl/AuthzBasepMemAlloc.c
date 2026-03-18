/*
 * XREFs of AuthzBasepMemAlloc @ 0x1403CAE50
 * Callers:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403CAE7C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFC080 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 AuthzBasepMemAlloc()
{
  ULONG_PTR v0; // rcx

  v0 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v0 = 64LL;
  return ExAllocatePool2(v0);
}

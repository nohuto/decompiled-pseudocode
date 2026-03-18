/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFC080
 * Callers:
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFBF28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1403CAE50 (AuthzBasepMemAlloc.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *AuthzBasepAllocateClaimCollectionNoLists()
{
  void *result; // rax
  void *v1; // rbx

  result = (void *)AuthzBasepMemAlloc();
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x260uLL);
    return v1;
  }
  return result;
}

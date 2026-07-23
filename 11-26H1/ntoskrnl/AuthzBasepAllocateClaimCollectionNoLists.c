/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFDC80
 * Callers:
 *     SepCreateClaimAttributes @ 0x140AF2AAC (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1403B24D0 (AuthzBasepMemAlloc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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

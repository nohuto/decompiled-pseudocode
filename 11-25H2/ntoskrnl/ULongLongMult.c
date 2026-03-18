/*
 * XREFs of ULongLongMult @ 0x140441EE0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFreeAppAttributes @ 0x1407F4928 (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407FAB2C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1407FB844 (AslpPathWildcardFreeFindContext.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x14094AB48 (VrpAddNamespaceNodeToList.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
    return 0;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
}

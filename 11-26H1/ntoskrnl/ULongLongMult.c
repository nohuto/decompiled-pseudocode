/*
 * XREFs of ULongLongMult @ 0x140469310
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFreeAppAttributes @ 0x14088A594 (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408902E4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x140891020 (AslpPathWildcardFreeFindContext.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140939D04 (VrpAddNamespaceNodeToList.c)
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

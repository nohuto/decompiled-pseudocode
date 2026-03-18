/*
 * XREFs of ULongLongMult @ 0x14046FB90
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140884194 (SdbpFreeAppAttributes.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140889EE8 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14088AC24 (AslpPathWildcardFreeFindContext.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140977CF4 (VrpAddNamespaceNodeToList.c)
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

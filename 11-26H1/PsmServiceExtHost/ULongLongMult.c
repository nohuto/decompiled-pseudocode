/*
 * XREFs of ULongLongMult @ 0x18008D23C
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A09FC (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  HRESULT v3; // r9d
  ULONGLONG v4; // rax

  v3 = 0;
  v4 = ullMultiplicand * ullMultiplier;
  if ( !is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    v3 = -2147024362;
    v4 = -1LL;
  }
  *pullResult = v4;
  return v3;
}

/*
 * XREFs of ?GetExtentsAlongArrangingAxis@ColumnSmartFillSolver@SnapLayoutHelpers@@UEBA?AU?$pair@JJ@std@@PEBUtagRECT@@@Z @ 0x1805ABB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SnapLayoutHelpers::ColumnSmartFillSolver::GetExtentsAlongArrangingAxis(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  *a2 = *a3;
  a2[1] = a3[2];
  return a2;
}

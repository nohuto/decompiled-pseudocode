/*
 * XREFs of ?BuildRect@ColumnSmartFillSolver@SnapLayoutHelpers@@UEBA?AUtagRECT@@JJJJ@Z @ 0x1805871C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall SnapLayoutHelpers::ColumnSmartFillSolver::BuildRect(
        SnapLayoutHelpers::ColumnSmartFillSolver *this,
        struct tagRECT *__return_ptr retstr,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *result; // rax

  retstr->top = a5;
  retstr->bottom = a6;
  result = retstr;
  retstr->left = a3;
  retstr->right = a4;
  return result;
}

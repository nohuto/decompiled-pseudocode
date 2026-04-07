/*
 * XREFs of ?s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA?AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS@@@Z @ 0x1800189F4
 * Callers:
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CSecondaryWindowRepresentation::s_GetRelativeWindowRect(
        struct tagRECT *__return_ptr retstr,
        const struct tagSIZE *a2,
        const struct _MARGINS *a3)
{
  retstr->left = a3->cxLeftWidth;
  retstr->top = a3->cyTopHeight;
  retstr->right = a2->cx - a3->cxRightWidth;
  retstr->bottom = a2->cy - a3->cyBottomHeight;
  return retstr;
}

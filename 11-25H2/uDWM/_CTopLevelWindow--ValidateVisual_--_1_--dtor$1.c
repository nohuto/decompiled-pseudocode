/*
 * XREFs of _CTopLevelWindow::ValidateVisual_::_1_::dtor$1 @ 0x1800EB2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::ValidateVisual_::_1_::dtor_1(__int64 a1, void **a2)
{
  FastRegion::CRegion::FreeMemory(a2 + 20, (const struct std::nothrow_t *)a2);
}

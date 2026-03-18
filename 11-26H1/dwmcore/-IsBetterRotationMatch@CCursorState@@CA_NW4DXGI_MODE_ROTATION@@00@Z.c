/*
 * XREFs of ?IsBetterRotationMatch@CCursorState@@CA_NW4DXGI_MODE_ROTATION@@00@Z @ 0x180291838
 * Callers:
 *     _CCursorState::SortShapeCache_::_2_::_lambda_1_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x18028F7E4 (_CCursorState--SortShapeCache_--_2_--_lambda_1_--operator()_std--shared_ptr_CCursorState--ShapeD.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorState::IsBetterRotationMatch(
        enum DXGI_MODE_ROTATION a1,
        enum DXGI_MODE_ROTATION a2,
        enum DXGI_MODE_ROTATION a3)
{
  return a1 == a3 || a2 != a3 && (a1 - a3 + 4) % 4 == 2;
}

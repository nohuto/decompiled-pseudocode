/*
 * XREFs of _CCursorState::SortShapeCache_::_2_::_lambda_1_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x18028F7E4
 * Callers:
 *     std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x18028F7A4 (std--_Ref_fn__CCursorState--SortShapeCache_--_2_--_lambda_1___--operator()_std--shared_ptr_CCurs.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsBetterRotationMatch@CCursorState@@CA_NW4DXGI_MODE_ROTATION@@00@Z @ 0x180291838 (-IsBetterRotationMatch@CCursorState@@CA_NW4DXGI_MODE_ROTATION@@00@Z.c)
 */

bool __fastcall CCursorState::SortShapeCache_::_2_::_lambda_1_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rdx
  __int64 v7; // rcx
  char v8; // r8
  bool v9; // bl
  int *v10; // rax
  int v11; // r8d
  bool v12; // zf
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx

  v3 = a2;
  v5 = *a3;
  v7 = *v3;
  v8 = *(_BYTE *)(*v3 + 17LL);
  if ( v8 != *(_BYTE *)(v5 + 17) )
  {
    v9 = v8 == **(_BYTE **)a1;
    goto LABEL_8;
  }
  v10 = *(int **)(a1 + 8);
  v11 = *v10;
  if ( *(_DWORD *)(v7 + 12) == *v10 )
  {
    v12 = *(_DWORD *)(v5 + 12) == v11;
  }
  else
  {
    if ( *(_DWORD *)(v5 + 12) == v11 || *(_BYTE *)(v7 + 16) )
      goto LABEL_7;
    v12 = *(_BYTE *)(v5 + 16) == 0;
  }
  if ( v12
    && !CCursorState::IsBetterRotationMatch(
          *(enum DXGI_MODE_ROTATION *)(v7 + 8),
          *(enum DXGI_MODE_ROTATION *)(v5 + 8),
          **(enum DXGI_MODE_ROTATION **)(a1 + 16)) )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  v9 = 1;
LABEL_8:
  v13 = (std::_Ref_count_base *)v3[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = (std::_Ref_count_base *)a3[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return v9;
}

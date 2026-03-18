/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UShapeData@CCursorState@@@std@@EEAAXXZ @ 0x1802926C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<CCursorState::ShapeData>::_Destroy(__int64 a1)
{
  return wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(a1 + 40));
}

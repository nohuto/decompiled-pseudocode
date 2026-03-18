/*
 * XREFs of _CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_ @ 0x1802963E4
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x180298330 (std--_Func_impl_no_alloc__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_--_lambd_ea_180298330.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_(__int64 *a1)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 1);
  return wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1);
}

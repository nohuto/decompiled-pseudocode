/*
 * XREFs of std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x180298330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_ @ 0x1802963E4 (_CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_--_lambda_1_--__lambda_1_.c)
 */

void __fastcall std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Delete_this(
        __int64 *a1,
        char a2)
{
  CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_(a1 + 1);
  if ( a2 )
    operator delete(a1);
}

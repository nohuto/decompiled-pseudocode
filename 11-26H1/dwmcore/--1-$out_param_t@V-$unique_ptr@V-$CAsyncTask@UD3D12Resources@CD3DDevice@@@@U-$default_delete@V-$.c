/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180296468
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x18029656C (--R-$default_delete@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV-$CAsyncTask@UD3D.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>::~out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()();
  }
  return result;
}

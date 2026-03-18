/*
 * XREFs of ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18021F1DC
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x180134D3C (--1CD3DDevice@@MEAA@XZ.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___ @ 0x180295C04 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_.c)
 * Callees:
 *     ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x18029656C (--R-$default_delete@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV-$CAsyncTask@UD3D.c)
 */

__int64 __fastcall std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()();
  return result;
}

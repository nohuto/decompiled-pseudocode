/*
 * XREFs of ?TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ @ 0x1802982AC
 * Callers:
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x18023020C (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180230334 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x1801DB624 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180298420 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

struct ID3D12Device *__fastcall CD3DDevice::TryGetInkDevice(CD3DDevice *this)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CD3DDevice::EnsureBeginCreateD3D12Resources(this) >= 0
    && (unsigned __int8)std::_Atomic_storage<bool,1>::load(*((_QWORD *)this + 134) + 100LL)
    && (v2 = *((_QWORD *)this + 134), v4 = 0LL, (int)CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(v2, &v4) >= 0) )
  {
    return *(struct ID3D12Device **)v4;
  }
  else
  {
    return 0LL;
  }
}

/*
 * XREFs of ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801238AC
 * Callers:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
        struct CD3DDevice **this,
        const struct _LUID *a2,
        struct IFlipProducer *a3)
{
  __int64 v5; // rcx

  v5 = (__int64)*this;
  if ( !v5 || *(_QWORD *)(v5 + 944) != *a2 || *(_DWORD *)(v5 + 1124) )
  {
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)this);
    if ( a2->LowPart || a2->HighPart )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)this);
      if ( (int)CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, this) >= 0
        && ((*((_BYTE *)*this + 952) & 0x18) == 0
         || (*(int (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *((_QWORD *)*this + 68)) < 0) )
      {
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)this);
      }
    }
  }
  return *this;
}

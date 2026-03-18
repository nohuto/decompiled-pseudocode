/*
 * XREFs of ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BDF0
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BAB8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x14030BE30 (-TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 396);
  if ( v2 )
  {
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(v2, 1LL);
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(*((_QWORD *)this + 396), 2LL);
  }
}

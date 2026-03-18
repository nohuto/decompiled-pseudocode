/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x14030EFB0
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x14030EEC4 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x14030F070 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x14030F2A0 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1843;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1843LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGDEVICE::UnpinDeviceAllocations(this);
}

/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CF44C
 * Callers:
 *     ??1?$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CEB60 (--1-$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CEC50 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CF5C0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDeviceCollectionHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialRimDeviceCollectionHeadEventHandler@@@Z @ 0x1800D3828 (--$MakeAndInitialize@VSpatialRimDeviceCollectionHeadEventHandler@@V1@$$V@Details@WRL@Microsoft@@.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D49F4 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D5324 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D55F0 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B120 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}

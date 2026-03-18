/*
 * XREFs of ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801C6C94
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1801C6B6C (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802A8B70 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8CF0 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_PO.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::Flush(CD3DDevice *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax

  v2 = *((_QWORD *)this + 73);
  if ( v2 )
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 24LL);
  else
    v3 = *(void (**)(void))(**((_QWORD **)this + 69) + 888LL);
  v3();
  *((_BYTE *)this + 1491) = 0;
}

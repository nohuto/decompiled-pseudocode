/*
 * XREFs of ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180083220 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Release@CVisualBrush@@QEAAXXZ @ 0x180083FAC (-Release@CVisualBrush@@QEAAXXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089284 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 *     ?Release@CBitmapBrush@@QEAAXXZ @ 0x18009B690 (-Release@CBitmapBrush@@QEAAXXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800C8620 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?OnGraphicsDeviceLost@CTetherVisual@@MEAAXXZ @ 0x1800C8830 (-OnGraphicsDeviceLost@CTetherVisual@@MEAAXXZ.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}

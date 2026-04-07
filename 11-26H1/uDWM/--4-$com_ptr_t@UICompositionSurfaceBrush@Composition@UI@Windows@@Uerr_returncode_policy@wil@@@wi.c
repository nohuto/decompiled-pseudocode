/*
 * XREFs of ??4?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B1EC
 * Callers:
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}

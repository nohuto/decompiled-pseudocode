/*
 * XREFs of ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0
 * Callers:
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800834D4 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z @ 0x180083974 (-GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18009A928 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18009A9D0 (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     _CSurfaceBrush::GetRealizationSize_::_1_::dtor$2 @ 0x1800E7D23 (_CSurfaceBrush--GetRealizationSize_--_1_--dtor$2.c)
 *     _CBitmapSource::Create_::_1_::dtor$0 @ 0x1800E7D35 (_CBitmapSource--Create_--_1_--dtor$0.c)
 *     _CVisualBrush::SetRealizationSize_::_1_::dtor$0 @ 0x1800E7D47 (_CVisualBrush--SetRealizationSize_--_1_--dtor$0.c)
 *     _CBitmapSource::Create_::_1_::dtor$0_0 @ 0x1800E7FD1 (_CBitmapSource--Create_--_1_--dtor$0_0.c)
 *     _CBitmapSource::CBitmapSource_::_1_::dtor$2 @ 0x1800E8BFA (_CBitmapSource--CBitmapSource_--_1_--dtor$2.c)
 *     _CreateFormatConverterToPBGRA_::_1_::dtor$0 @ 0x1800E8C68 (_CreateFormatConverterToPBGRA_--_1_--dtor$0.c)
 *     _CVisualBrush::FreezeImpl_::_1_::dtor$1 @ 0x1800E8CA0 (_CVisualBrush--FreezeImpl_--_1_--dtor$1.c)
 *     _CVisualBrush::Reset_::_1_::dtor$0 @ 0x1800E8CB2 (_CVisualBrush--Reset_--_1_--dtor$0.c)
 *     _CVisualBrush::Reset_::_1_::dtor$1 @ 0x1800E8CC4 (_CVisualBrush--Reset_--_1_--dtor$1.c)
 *     _CVisualBrush::Reset_::_1_::dtor$2 @ 0x1800E8CD6 (_CVisualBrush--Reset_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}

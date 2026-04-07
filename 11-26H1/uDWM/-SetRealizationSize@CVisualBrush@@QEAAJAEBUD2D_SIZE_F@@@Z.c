/*
 * XREFs of ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0
 * Callers:
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z @ 0x18009BAE8 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@Z @ 0x18009B1B8 (--$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@-$com_ptr_t@UICo.c)
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 *     ?IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z @ 0x18009B658 (-IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVisualBrush::SetRealizationSize(CVisualBrush *this, const struct D2D_SIZE_F *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( IsValidRealizationSize(a2) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v4 = -2147020579;
      v5 = 261LL;
      goto LABEL_3;
    }
    v10 = 0LL;
    v6 = wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::query_to<Windows::UI::Composition::Internal::ICompositionVisualSurfacePartner>(
           (__int64)this + 8,
           (__int64)&v10);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v10 + 56LL))(
             v10,
             _mm_unpacklo_ps((__m128)LODWORD(a2->width), (__m128)LODWORD(a2->height)).m128_u64[0]);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v6 = CVisualBrush::EnsureBrush(this);
        v4 = v6;
        if ( v6 >= 0 )
        {
          v4 = 0;
          goto LABEL_14;
        }
        v7 = 270LL;
      }
      else
      {
        v7 = 267LL;
      }
    }
    else
    {
      v7 = 264LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v6);
LABEL_14:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v10);
    return v4;
  }
  v4 = -2147024809;
  v5 = 260LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)v4);
  return v4;
}

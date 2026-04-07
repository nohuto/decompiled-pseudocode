/*
 * XREFs of ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800ADA68 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NAEBUD2D_POINTANDSIZE_L@@PEAVCVisualBrush@@@Z @ 0x1800BF694 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NAEBUD2D_POINTANDSIZE_L@@PEAVCVisualBrush@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BF784 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCVisualBrush@@AEBUD2D_POINTANDSIZE_L@.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@_NPEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF984 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z @ 0x1800D061C (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@Z @ 0x18009B1B8 (--$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@-$com_ptr_t@UICo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVisualBrush::FreezeImpl(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // r9
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 + 8;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v14 = 0LL;
    v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v14);
    v7 = (**v6)(v6, &GUID_3f7ac238_4adf_55bb_b517_df767c0156e7, v5);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 56LL))(v14, a2);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v13 = 0LL;
        v9 = wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::query_to<Windows::UI::Composition::Internal::ICompositionVisualSurfacePartner>(
               v3,
               (__int64)&v13);
        v4 = v9;
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
          v4 = v9;
          if ( v9 >= 0 )
          {
            wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v13);
            v4 = 0;
            goto LABEL_14;
          }
          v10 = 310LL;
        }
        else
        {
          v10 = 309LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
          (const char *)(unsigned int)v9);
        wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v13);
LABEL_14:
        wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v14);
        return v4;
      }
      v8 = 306LL;
    }
    else
    {
      v8 = 305LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_14;
  }
  v4 = -2147020579;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12E,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)0x800710DDLL);
  return v4;
}

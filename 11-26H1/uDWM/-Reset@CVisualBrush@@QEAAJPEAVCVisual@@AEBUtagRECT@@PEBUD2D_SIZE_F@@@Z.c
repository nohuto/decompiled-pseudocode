/*
 * XREFs of ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180083DA8 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800B98EC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z @ 0x1800D061C (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180083FD0 (-reset@-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil.c)
 *     ??$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@Z @ 0x18009B1B8 (--$query_to@UICompositionVisualSurfacePartner@Internal@Composition@UI@Windows@@@-$com_ptr_t@UICo.c)
 *     ??4?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B1EC (--4-$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20 (-SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVisualBrush::Reset(
        CVisualBrush *this,
        struct CVisual *a2,
        const struct tagRECT *a3,
        const struct D2D_SIZE_F *a4)
{
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // r9
  __int64 v10; // r10
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, GUID *, __int64); // r9
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF

  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)this);
  if ( *((_QWORD *)this + 1) )
    goto LABEL_14;
  v23 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v24);
  v11 = v9(v10, &GUID_cfa1658b_0123_4551_8891_89bdcc40322b, v8);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v24;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::reset(&v23);
    v11 = v15(v14, &v23);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 179LL;
      goto LABEL_12;
    }
    v16 = v27;
    v27 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v11 = wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::query_to<Windows::UI::Composition::Internal::ICompositionVisualSurfacePartner>(
            (__int64)&v23,
            (__int64)&v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 180LL;
      goto LABEL_12;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 72LL))(v27, 1LL);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 181LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 1,
      &v23);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v23);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v24);
LABEL_14:
    v25[0] = 0LL;
    if ( a2
      && (v25[0] = 0LL,
          v17 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)v25),
          v20 = v18(v19, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, v17),
          v12 = v20,
          v20 < 0) )
    {
      v21 = 190LL;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
      v12 = v20;
      if ( v20 >= 0 )
      {
        if ( a4 && (v20 = CVisualBrush::SetRealizationSize(this, a4), v12 = v20, v20 < 0) )
        {
          v21 = 208LL;
        }
        else
        {
          v20 = CVisualBrush::SetViewbox(this, a3);
          v12 = v20;
          if ( v20 >= 0 )
          {
            v12 = 0;
            goto LABEL_26;
          }
          v21 = 213LL;
        }
      }
      else
      {
        v21 = 193LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v20);
LABEL_26:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v25);
    return v12;
  }
  v13 = 178LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)(unsigned int)v11);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v24);
  return v12;
}

/*
 * XREFs of ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804A8178
 * Callers:
 *     ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804A4584 (-CreateOpacityAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@w.c)
 *     ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A6CD8 (-PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A70B4 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A78F4 (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804A8234 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804A8F80 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v11);
    v7 = v11;
    v12 = v11;
  }
  else
  {
    v6 = 0;
    v12 = 0LL;
    v7 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *a2, *a3);
  winrt::check_hresult((int *)&v11, v8, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}

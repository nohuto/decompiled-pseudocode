/*
 * XREFs of ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804973E4
 * Callers:
 *     ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804936D4 (-CreateOpacityAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@w.c)
 *     ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180495D80 (-PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180496238 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x180496ACC (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v13);
    v7 = v13;
    v9 = v13;
  }
  else
  {
    v6 = 0;
    v9 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v12, v6, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *a2, *a3);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}

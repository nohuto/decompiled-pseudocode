/*
 * XREFs of ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A4B54
 * Callers:
 *     ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A6CD8 (-PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A70B4 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1804A4494 (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A47A0 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1804A5EDC (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MMAEBUCompositionEasingFunction@Composition@UI@Windows@3@@Z @ 0x1804A686C (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *CAppThumbnailWindow::CreateThreeFingerScaleAnimation(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  __int64 **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp+28h]
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+38h]
  va_list va1; // [rsp+80h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v9 = a2;
  v4 = (__int64 **)(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 **)(a1 + 384),
    a2);
  v10 = 1670000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    a2,
    (__int64 *)va);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    v4,
    &v8,
    (unsigned int *)&unk_1807B0FD8,
    (unsigned int *)&unk_1807B0FD0);
  v10 = 0LL;
  if ( v8 )
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>, (__int64 *)va);
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(
    a2,
    v5,
    v6,
    (__int64 *)va);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)va);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a2;
}

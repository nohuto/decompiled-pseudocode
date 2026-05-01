/*
 * XREFs of ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A70B4
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A3000 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A4520 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A4B54 (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804A6088 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A7528 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804A8178 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  char *v4; // rdi
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // r8
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int32 *v17; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v17, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v16, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    v15 = 0LL;
    if ( v16 )
      (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v15);
    winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"ThumbnailScale");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v13,
      &v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    winrt::param::hstring::hstring(
      (winrt::param::hstring *)v13,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))");
    v3 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
           (__int64 **)this + 48,
           &v15,
           v13);
    v4 = (char *)this + 536;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 67, v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    v5 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 50);
    v15 = 0LL;
    if ( v5 )
      (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v15);
    winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"m_dragScalePropertySet");
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v13,
      &v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
    v15 = 0LL;
    if ( v6 )
      (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v15);
    winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"TransformMatrix");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v13,
      &v15);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v7);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
      v15 = 0LL;
      if ( v8 )
        (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v15);
      winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v13,
        &v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      v9 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
      v15 = 0LL;
      if ( v9 )
        (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v15);
      winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v13,
        &v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
      v15 = 0LL;
      if ( v10 )
        (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v15);
      winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 456,
        v13,
        &v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x388,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v11);
    return (unsigned int)v15;
  }
  return result;
}

/*
 * XREFs of ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A6CD8
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A6BD0 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?SetHost@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180267624 (-SetHost@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@Ta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A4520 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A473C (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A4B54 (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804A6088 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A7528 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804A8178 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  __int64 *v4; // rax
  char *v5; // rdi
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // r8
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // rcx
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  void (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int32 *v20; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v20, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v19, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
    v3 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
           (__int64 **)this + 48,
           &v18);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 50, v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"ThumbnailScale");
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
      (__int64 *)this + 50,
      v16);
    v18 = 0LL;
    if ( v19 )
      (**v19)(v19, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"ThumbnailScale");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    winrt::param::hstring::hstring(
      (winrt::param::hstring *)v16,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))");
    v4 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
           (__int64 **)this + 48,
           &v18,
           v16);
    v5 = (char *)this + 536;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 67, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v6 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 50);
    v18 = 0LL;
    if ( v6 )
      (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v18);
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"m_dragScalePropertySet");
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
    v18 = 0LL;
    if ( v7 )
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v8);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v9 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
      v18 = 0LL;
      if ( v9 )
        (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v16,
        &v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
      v18 = 0LL;
      if ( v10 )
        (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v16,
        &v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        if ( !(unsigned int)IsGamingFullScreenExperienceActive(v11) )
        {
          v12 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
          v18 = 0LL;
          if ( v12 )
            (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
          winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
          winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
            (char *)this + 456,
            v16,
            &v18);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
          *((_BYTE *)this + 170) = 1;
        }
      }
      else
      {
        v13 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
        v18 = 0LL;
        if ( v13 )
          (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v18);
        winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
        winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
          (char *)this + 456,
          v16,
          &v18);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x372,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v14);
    return (unsigned int)v18;
  }
  return result;
}

/*
 * XREFs of ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x1804A5AF0
 * Callers:
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804A7F50 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180142568 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1804A2890 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x1804A3284 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A47A0 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1804A5EDC (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x1804A679C (-InsertExpressionKeyFrame@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAni.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x1804A776C (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerToCacheScalar(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 (__fastcall ****v8)(_QWORD, void *, __int64 *); // r14
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v11)(_QWORD, void *, __int64 *); // rcx
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp+38h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a2;
  v8 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 **)(a1 + 384),
    &v16);
  v14[0] = *(_QWORD *)winrt::operator+((volatile signed __int32 *)&v15, L"m_compPropertySet.", a3);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
    &v16,
    v9,
    v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
  v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v15 = 0LL;
  if ( v10 )
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v15);
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v16,
    v14,
    &v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  v15 = 10000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v16,
    &v15);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(v8, &v13);
  if ( v16 )
  {
    v15 = 0LL;
    (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v15);
    v17 = v15;
  }
  else
  {
    v17 = 0LL;
  }
  v11 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v15 = 0LL;
  if ( v11 )
    (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v15);
  v14[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v13,
    a2,
    v14,
    &v15,
    &v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  return a2;
}

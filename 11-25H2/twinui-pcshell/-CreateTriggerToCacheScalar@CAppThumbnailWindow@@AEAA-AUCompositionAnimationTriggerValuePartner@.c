/*
 * XREFs of ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180494C30
 * Callers:
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804971BC (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180150860 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180491B70 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x1804924C4 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804938F8 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18049502C (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x18049589C (-InsertExpressionKeyFrame@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAni.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x180496954 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerToCacheScalar(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 (__fastcall ****v8)(_QWORD, void *, __int64 *); // r14
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, void *, volatile signed __int32 **); // rcx
  void (__fastcall ***v11)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF
  volatile signed __int32 *v18; // [rsp+B8h] [rbp+48h] BYREF

  v17 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a2;
  v8 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 **)(a1 + 384),
    &v17);
  v15[0] = *(_QWORD *)winrt::operator+((__int64)&v16, (__int64)L"m_compPropertySet.", a3);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
    &v17,
    v9,
    v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
  v10 = *(void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
  if ( v10 )
  {
    v18 = 0LL;
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v18);
    v16 = (__int64)v18;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v17,
    v15,
    &v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  v16 = 10000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v17,
    &v16);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(v8, &v14);
  if ( v17 )
  {
    v16 = 0LL;
    (**v17)(v17, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v16);
    v18 = (volatile signed __int32 *)v16;
  }
  else
  {
    v18 = 0LL;
  }
  v11 = *(void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
  if ( v11 )
  {
    v13 = 0LL;
    (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v13);
    v16 = (__int64)v13;
  }
  else
  {
    v16 = 0LL;
  }
  v15[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v14,
    a2,
    v15,
    &v16,
    (__int64 *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  return a2;
}

/*
 * XREFs of ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x180494AD0
 * Callers:
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804971BC (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180491B70 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x1804924C4 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804938F8 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18049502C (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x18049589C (-InsertExpressionKeyFrame@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAni.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x180496718 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerToCachePositionX(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 (__fastcall ****v6)(_QWORD, void *, __int64 *); // rbx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp+38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+48h] BYREF

  v13 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a2;
  v6 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 **)(a1 + 384),
    &v13);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"operation.Position.X");
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
    &v13,
    v7,
    v11);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"operation");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    &v13,
    v11,
    a1 + 464);
  v12 = 10000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v13,
    &v12);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(v6, &v10);
  if ( v13 )
  {
    v12 = 0LL;
    (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v12);
    v14 = v12;
  }
  else
  {
    v14 = 0LL;
  }
  v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v8 )
  {
    v15 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v15);
    v12 = v15;
  }
  else
  {
    v12 = 0LL;
  }
  v11[0] = *a3;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v10,
    a2,
    v11,
    &v12,
    &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a2;
}

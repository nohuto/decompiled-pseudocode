/*
 * XREFs of ?CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@HAEBUhstring@6@@Z @ 0x1804A48E0
 * Callers:
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A78F4 (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A4520 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A7528 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x1804A776C (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?SetScalarParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x1804A7828 (-SetScalarParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CAppThumbnailWindow::CreateScaleFactorAnimation(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v8[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp+28h]

  v10 = a2;
  v8[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 **)(a1 + 384),
    a2,
    v8);
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"operation");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v8,
    a1 + 464);
  v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v9 = 0LL;
  if ( v6 )
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v9);
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v8,
    &v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"polarity");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v8);
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"growthRate");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v8);
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"maxScale");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v8);
  return a2;
}

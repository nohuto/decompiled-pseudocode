/*
 * XREFs of ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804A4584
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804A8F80 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A4520 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x1804A776C (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804A8178 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CAppThumbnailWindow::CreateOpacityAnimation(__int64 a1, _QWORD *a2, char a3)
{
  __int64 **v5; // rsi
  const unsigned __int16 *v6; // rdx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v10[4]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v11[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+98h] [rbp+28h]
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  v13 = a2;
  v5 = (__int64 **)(a1 + 384);
  v6 = L"m_compPropertySet.isDraggingRight ? 0.0f : 1.0f";
  if ( !a3 )
    v6 = L"m_compPropertySet.isDraggingRight ? 1.0f : 0.0f";
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, v6);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    &v14,
    v10);
  v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v12 = 0LL;
  if ( v7 )
    (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v12);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v14,
    v11,
    &v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  v12 = 0LL;
  if ( v14 )
    (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v12);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"opacityState");
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    a1 + 392,
    v11,
    &v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"m_compPropertySet.opacityState");
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    a2,
    v11);
  v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v12 = 0LL;
  if ( v8 )
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v12);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v11,
    &v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return a2;
}

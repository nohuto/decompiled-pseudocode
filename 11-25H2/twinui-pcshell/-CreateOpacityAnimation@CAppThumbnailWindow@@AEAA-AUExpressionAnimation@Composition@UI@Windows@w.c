/*
 * XREFs of ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804936D4
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180493670 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x180496954 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804973E4 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CAppThumbnailWindow::CreateOpacityAnimation(__int64 a1, _QWORD *a2, char a3)
{
  __int64 **v5; // rsi
  const unsigned __int16 *v6; // rdx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  __int64 v11[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+28h]
  void (__fastcall ***v15)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  v14 = a2;
  v5 = (__int64 **)(a1 + 384);
  v6 = L"m_compPropertySet.isDraggingRight ? 0.0f : 1.0f";
  if ( !a3 )
    v6 = L"m_compPropertySet.isDraggingRight ? 1.0f : 0.0f";
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, v6);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    &v15,
    v11);
  v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v7 )
  {
    v10 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v10);
    v13 = v10;
  }
  else
  {
    v13 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v15,
    v12,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  if ( v15 )
  {
    v10 = 0LL;
    (**v15)(v15, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v10);
    v13 = v10;
  }
  else
  {
    v13 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"opacityState");
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    a1 + 392,
    v12,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"m_compPropertySet.opacityState");
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    a2,
    v12);
  v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v8 )
  {
    v10 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v10);
    v13 = v10;
  }
  else
  {
    v13 = 0LL;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"m_compPropertySet");
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v12,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return a2;
}

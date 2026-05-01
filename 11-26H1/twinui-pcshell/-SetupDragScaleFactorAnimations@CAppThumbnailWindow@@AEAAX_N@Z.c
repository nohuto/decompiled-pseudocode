/*
 * XREFs of ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A78F4
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804A8F80 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180142568 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802A7974 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@HAEBUhstring@6@@Z @ 0x1804A48E0 (-CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windo.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804A8178 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CAppThumbnailWindow::SetupDragScaleFactorAnimations(CAppThumbnailWindow *this, unsigned __int8 a2)
{
  int v2; // ebx
  volatile signed __int32 *v4; // rax
  __int64 *v5; // rax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rax
  __int64 *v8; // rax
  void (__fastcall ***v9)(_QWORD, void *, volatile signed __int32 **); // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, volatile signed __int32 **); // [rsp+98h] [rbp+38h] BYREF

  v2 = a2;
  winrt::hstring::hstring(
    (winrt::hstring *)&v15,
    L"(polarity * ((operation.Position.X - m_compPropertySet.touchPosAtDirectionChangeThreshold) * growthRate))");
  v4 = winrt::operator+(
         (volatile signed __int32 *)&v10,
         L"Clamp(m_compPropertySet.scaleFactorAtDirectionChangeThresholdSecondApp + ",
         (__int64 *)&v15);
  v5 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v14, (__int64)v4, (__int64)L", 1.0f, maxScale)");
  v6 = 2 * v2 - 1;
  CAppThumbnailWindow::CreateScaleFactorAnimation((__int64)this, &v9, v6, v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  v7 = winrt::operator+(
         (volatile signed __int32 *)&v12,
         L"Clamp(m_compPropertySet.scaleFactorAtDirectionChangeThresholdFirstApp - ",
         (__int64 *)&v15);
  v8 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v11, (__int64)v7, (__int64)L", 1.0f, maxScale)");
  CAppThumbnailWindow::CreateScaleFactorAnimation((__int64)this, &v16, v6, v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  v14 = 0LL;
  if ( v9 )
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v14);
  winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"scaleFactorSecondApp");
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    (char *)this + 392,
    v13,
    &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  v14 = 0LL;
  if ( v16 )
    (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v14);
  winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"scaleFactorFirstApp");
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    (char *)this + 392,
    v13,
    &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
}

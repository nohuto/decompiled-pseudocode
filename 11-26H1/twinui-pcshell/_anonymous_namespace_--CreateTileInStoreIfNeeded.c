/*
 * XREFs of _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A0014 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?TileId@?$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18044B188 (-TileId@-$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@w.c)
 *     ??$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISecondaryTilePrivate@StartScreen@UI@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1805E122C (--$as@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@Utype@-$abi@UIUnknown@Founda.c)
 *     wil::scope_exit__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___ @ 0x1805E2330 (wil--scope_exit__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___.c)
 *     _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E27CC (_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_--_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_.c)
 *     _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E3194 (_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_--__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_.c)
 *     ?RemoveAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@I@Z @ 0x1805EC2BC (-RemoveAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 *__fastcall anonymous_namespace_::CreateTileInStoreIfNeeded(
        volatile signed __int32 *a1,
        __int64 a2,
        volatile signed __int32 *a3)
{
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int32 *v11; // [rsp+20h] [rbp-29h] BYREF
  volatile signed __int32 *v12[3]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v14[64]; // [rsp+60h] [rbp+17h] BYREF

  v11 = a1;
  v12[2] = a3;
  v12[0] = 0LL;
  if ( *(_QWORD *)a3 )
  {
    v6 = (volatile signed __int32 **)winrt::impl::consume_Windows_UI_StartScreen_ISecondaryTile<winrt::Windows::UI::StartScreen::ISecondaryTile>::TileId(
                                       (__int64 *)a3,
                                       &v11);
    if ( v12 != v6 )
    {
      v7 = *v6;
      *v6 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(v12, (__int64)v7);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    winrt::impl::as<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v11,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3);
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::RemoveAt(&v11);
    winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore((__int64 *)&v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  v8 = std::wstring::wstring((__int64)v13, a2);
  v9 = lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_((__int64)v14, v8);
  wil::scope_exit__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___((__int64)a1, v9);
  lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_((__int64)v14);
  std::wstring::_Tidy_deallocate(v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a1;
}

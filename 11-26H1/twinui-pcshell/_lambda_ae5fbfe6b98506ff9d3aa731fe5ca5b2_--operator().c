/*
 * XREFs of _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::operator() @ 0x1805E421C
 * Callers:
 *     wil::details::lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___::_lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___ @ 0x1805E32F8 (wil--details--lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___--_lambda_call__lambda_ae5f.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x1805E1CDC (--$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPri.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::operator()(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v4; // rbx
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  if ( a1[4] )
  {
    try
    {
      winrt::get_activation_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(
        &v12,
        a2,
        a3);
      v4 = a1[4];
      winrt::param::hstring::hstring((__int64)v9, a1);
      v7 = 0;
      v8 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 72LL))(v12, v9[0], v4);
      winrt::check_hresult(&v11, v5, (__int64)&v7);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v6);
    }
  }
}

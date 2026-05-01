/*
 * XREFs of ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x18034F230
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18002CAA8 (--4hstring@winrt@@QEAAAEAU01@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18028FEA0 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180290720 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIGameController@Input@Gaming@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18033EE84 (--$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winr.c)
 *     ?FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z @ 0x180346FAC (-FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z.c)
 *     ?HardwareProductId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18034B430 (-HardwareProductId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@G.c)
 *     ?HardwareVendorId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18034B49C (-HardwareVendorId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Ga.c)
 *     ?IsWireless@?$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18034C08C (-IsWireless@-$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall GamingOverlayExperienceManager::OnUINavigationControllerAdded(
        GamingOverlayExperienceManager *this,
        struct IInspectable a2,
        const struct winrt::Windows::Gaming::Input::UINavigationController *a3)
{
  double v6; // xmm0_8
  unsigned __int16 v7; // ax
  _QWORD *v8; // rax
  unsigned int v9; // r8d
  unsigned __int16 v10; // ax
  _QWORD *v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  __int64 *v14; // rbx
  unsigned int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v19[4]; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+70h] [rbp+Fh] BYREF
  __time64_t Time; // [rsp+78h] [rbp+17h] BYREF
  struct winrt::impl::hstring_header *v23; // [rsp+80h] [rbp+1Fh] BYREF
  struct winrt::impl::hstring_header *v24; // [rsp+88h] [rbp+27h] BYREF

  v19[2] = a2.lpVtbl;
  Time = 0LL;
  _time64(&Time);
  v6 = _o__difftime64(Time, *((_QWORD *)this + 207));
  *((_QWORD *)this + 207) = Time;
  if ( v6 > (double)(winrt::impl::consume_Windows_Gaming_Input_IGameController<winrt::Windows::Gaming::Input::IUINavigationController>::IsWireless((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3) != 0
                   ? 6
                   : 3) )
  {
    v24 = 0LL;
    v23 = 0LL;
    winrt::impl::as<winrt::Windows::Gaming::Input::IGameController,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v21,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3);
    if ( v21 )
    {
      winrt::Windows::Gaming::Input::RawGameController::FromGameController(
        (const struct winrt::Windows::Gaming::Input::IGameController *)&v18,
        (__int64)&v21);
      if ( v18 )
      {
        v7 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareProductId(&v18);
        v8 = (_QWORD *)std::to_wstring((__int64)v20, v7);
        std::wstring::operator std::basic_string_view<unsigned short>(v8, v19);
        winrt::hstring::operator=(&v24, (__int64)v19, v9);
        std::wstring::_Tidy_deallocate(v20);
        v10 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareVendorId(&v18);
        v11 = (_QWORD *)std::to_wstring((__int64)v20, v10);
        std::wstring::operator std::basic_string_view<unsigned short>(v11, v19);
        winrt::hstring::operator=(&v23, (__int64)v19, v12);
        std::wstring::_Tidy_deallocate(v20);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v19[3] = &v21;
    v14 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v21, (const struct winrt::hstring *)&v24, v13);
    v16 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v18, (const struct winrt::hstring *)&v23, v15);
    GamingOverlayExperienceManager::SignalGamepadConnect(v17, v16, v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
  }
  if ( a2.lpVtbl->QueryInterface )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2.lpVtbl);
}

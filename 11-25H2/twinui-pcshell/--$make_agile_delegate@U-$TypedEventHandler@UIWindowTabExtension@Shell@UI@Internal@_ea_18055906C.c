/*
 * XREFs of ??$make_agile_delegate@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x18055906C
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18055B95C (-add@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveT.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU?$com_ptr@UIAgileReference@impl@winrt@@@winrt@@AEBUguid@2@@Z @ 0x18032B0DC (--0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU-$com_ptr@UIAgileReference@impl@winrt@@.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180332790 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_67186d08e288f9bbdb2b33b2b97f3247_@@@?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_67186d08e288f9bbdb2b33b2b97f3247_@@@Z @ 0x180558370 (--$-0V_lambda_67186d08e288f9bbdb2b33b2b97f3247_@@@-$TypedEventHandler@UIWindowTabExtension@Shell.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( *a2 && (v8 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), v8) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    *a1 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  }
  else
  {
    v10 = winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>>;
    v7 = 0LL;
    winrt::impl::get_agile_reference(&v8, (__int64)&v10, *a2, (__int64)&v7);
    if ( v7 )
    {
      v5 = _lambda_1d99fdbe0740601814aa3a75b33e3225_::_lambda_1d99fdbe0740601814aa3a75b33e3225_((__int64)v9, &v7, &v10);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>(
        a1,
        v5);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
    }
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  }
  return a1;
}

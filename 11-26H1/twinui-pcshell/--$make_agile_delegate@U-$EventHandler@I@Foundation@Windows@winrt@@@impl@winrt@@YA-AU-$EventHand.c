/*
 * XREFs of ??$make_agile_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x18065FD14
 * Callers:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x180660BE8 (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0_lambda_caf9332fe06d9b8ebc17db7293bf542f_@@QEAA@$$QEAU?$com_ptr@UIAgileReference@impl@winrt@@@winrt@@AEBUguid@2@@Z @ 0x18032823C (--0_lambda_caf9332fe06d9b8ebc17db7293bf542f_@@QEAA@$$QEAU-$com_ptr@UIAgileReference@impl@winrt@@.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180331C70 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_35585a79f0f393063e67310a040fd1c0_@@@?$EventHandler@I@Foundation@Windows@winrt@@QEAA@V_lambda_35585a79f0f393063e67310a040fd1c0_@@@Z @ 0x18065F71C (--$-0V_lambda_35585a79f0f393063e67310a040fd1c0_@@@-$EventHandler@I@Foundation@Windows@winrt@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>>(
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
    v10 = winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<unsigned int>>;
    v7 = 0LL;
    winrt::impl::get_agile_reference(&v8, (__int64)&v10, *a2, (__int64)&v7);
    if ( v7 )
    {
      v5 = _lambda_caf9332fe06d9b8ebc17db7293bf542f_::_lambda_caf9332fe06d9b8ebc17db7293bf542f_((__int64)v9, &v7, &v10);
      winrt::Windows::Foundation::EventHandler<unsigned int>::EventHandler<unsigned int>(a1, v5);
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

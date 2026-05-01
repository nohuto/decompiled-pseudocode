/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1802D7A70
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1806DD714 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1806DD8BB (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 *     _winrt::to_hresult_::_1_::catch$13 @ 0x1806E0A0A (_winrt--to_hresult_--_1_--catch$13.c)
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1806E0A70 (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1806E0B11 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1806E0BB5 (_winrt--to_hresult_--_1_--catch$17.c)
 *     _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::catch$57 @ 0x180703D10 (_Util--FileMappingHelpers--ReadBufferFromSharedMemory_--_1_--catch$57.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     SetErrorInfo_0 @ 0x1802D4169 (SetErrorInfo_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  void (__fastcall ***v4)(_QWORD, void *, IErrorInfo **); // rcx
  void (__fastcall **v5)(_QWORD, void *, IErrorInfo **); // rax
  IErrorInfo *v6; // rbx
  IErrorInfo *perrinfo; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void (__fastcall ****)(_QWORD, void *, IErrorInfo **))(a1 + 16);
  if ( v4 )
  {
    v5 = *v4;
    perrinfo = 0LL;
    (*v5)(v4, &winrt::impl::guid_v<winrt::impl::IErrorInfo>, &perrinfo);
    v6 = perrinfo;
    SetErrorInfo_0(0, perrinfo);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&perrinfo);
  }
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}

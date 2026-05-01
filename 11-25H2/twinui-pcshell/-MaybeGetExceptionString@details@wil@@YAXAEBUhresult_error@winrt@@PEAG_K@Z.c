/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1802E0A74
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1806B653A (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1806B66E1 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1802E0B0C (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct winrt::hresult_error *a2,
        unsigned __int16 *a3)
{
  winrt::hstring *v5; // rax
  const unsigned __int16 *v6; // rax
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = (winrt::hstring *)winrt::hresult_error::message(this, &v7);
    v6 = winrt::hstring::c_str(v5);
    StringCchPrintfW((unsigned __int16 *)a2, (__int64)a3, L"winrt::hresult_error: %ls", v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  }
}

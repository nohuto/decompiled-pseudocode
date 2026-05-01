/*
 * XREFs of ??$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6@@winrt@@YA?A_PAEBUguid@0@@Z @ 0x180656F0C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x18065CA60 (std--_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt--guid_ea_18065CA60.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid@5@@Z @ 0x18066FE40 (--0RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid@5@.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::guid const &>(
        _QWORD *a1,
        const struct winrt::guid *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs *v6; // [rsp+40h] [rbp+8h]

  v6 = (winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs *)operator new(0x28uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::RemoteDesktopConnectedEventArgs(
    v6,
    a2);
  *a1 = v4 + 2;
  result = a1;
  *v4 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::`vftable';
  return result;
}

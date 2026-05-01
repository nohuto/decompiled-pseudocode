/*
 * XREFs of ??$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6@AEAW4CloudPCState@3456@@winrt@@YA?A_P$$QEAUguid@0@AEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18065705C
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0RemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid@5@W4CloudPCState@2345@@Z @ 0x18066FD7C (--0RemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUguid.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::guid,enum winrt::Windows::Internal::Shell::CloudPCState &>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  _QWORD *v6; // rcx
  _QWORD *result; // rax
  void *v8; // [rsp+40h] [rbp+8h]

  v8 = operator new(0x30uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::RemoteDesktopStateChangedEventArgs(
    v8,
    a2,
    *a3);
  *a1 = v6 + 2;
  result = a1;
  *v6 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::`vftable';
  return result;
}

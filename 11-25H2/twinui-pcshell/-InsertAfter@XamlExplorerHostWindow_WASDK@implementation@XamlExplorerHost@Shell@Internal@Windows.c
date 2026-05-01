/*
 * XREFs of ?InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180444E20
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_strong@?$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@QEAA?AU?$com_ptr@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801F5C9C (-get_strong@-$implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1802174BC (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180444DAC (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::InsertAfter(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, char *); // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  GUID v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread(this);
  winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::get_strong(
    (__int64)this,
    &v15);
  try
  {
    v4 = (_QWORD *)((char *)this + 104);
    if ( !*((_QWORD *)this + 13) )
    {
      v14 = CLSID_ImmersiveShell;
      winrt::create_instance<IServiceProvider>((__int64)&v13, (int)&v14);
      v5 = v13;
      v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v13 + 24LL);
      if ( *v4 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 13);
      v7 = v6(
             v5,
             &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
             &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
             (char *)this + 104);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x12E,
          (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
          (const char *)(unsigned int)v7,
          v12);
      if ( v13 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v13);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v4 + 40LL))(*v4, *((_QWORD *)this + 5), a2);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
        (const char *)(unsigned int)v8,
        v12);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v4 + 40LL))(*v4, *((_QWORD *)this + 8), a2);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x137,
        (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
        (const char *)(unsigned int)v9,
        v12);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13A,
                           (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
                           v10);
  }
  return result;
}

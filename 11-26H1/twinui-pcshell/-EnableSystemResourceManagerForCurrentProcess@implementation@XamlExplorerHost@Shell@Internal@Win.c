/*
 * XREFs of ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18007D99C
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18007D72C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1801D2DE4 (--$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x18029F10C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@winrt@@YA?A_PXZ @ 0x1802B9DA0 (--$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIReso.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::EnableSystemResourceManagerForCurrentProcess(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64 *); // rdi
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v9 = 0LL;
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(&v8);
  v1 = v8;
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  v3 = v2(v1, &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v3,
      (int)pv);
  winrt::impl::as<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v7,
    v9);
  pv = 0LL;
  wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
    &pv,
    L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri");
  v4 = v7;
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v7 + 48LL))(v7, pv);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v5,
      (int)pv);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  if ( v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
}

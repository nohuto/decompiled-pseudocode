/*
 * XREFs of ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1801B5940
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B500C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1801B5A78 (--$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x1802B2CC8 (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@winrt@@YA?A_PXZ @ 0x1802C2C9C (--$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIReso.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::EnableSystemResourceManagerForCurrentProcess(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64 *); // rdi
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v8 = 0LL;
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(&v7);
  v1 = v7;
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 56LL);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  v3 = v2(v1, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v3,
      v6);
  winrt::impl::as<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    v8);
  pv = 0LL;
  wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
    &pv,
    L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri");
  v4 = v6;
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v6 + 48LL))(v6, pv);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v5,
      v6);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v6);
  if ( v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
}

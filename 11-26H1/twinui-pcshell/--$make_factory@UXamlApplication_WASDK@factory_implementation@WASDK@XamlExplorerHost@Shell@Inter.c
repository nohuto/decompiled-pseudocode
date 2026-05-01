/*
 * XREFs of ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18045272C
 * Callers:
 *     ??$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18045270C (--$make@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x180242AA0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$create_and_initialize@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@1@XZ @ 0x180452490 (--$create_and_initialize@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Sh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>(
        __int64 *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v8; // [rsp+38h] [rbp-31h] BYREF
  int v9; // [rsp+44h] [rbp-25h] BYREF
  __int64 v10[2]; // [rsp+48h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-11h] BYREF
  __int128 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+70h] [rbp+7h] BYREF
  char v14[8]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v15[4]; // [rsp+80h] [rbp+17h] BYREF

  v8 = a1;
  winrt::impl::get_static_lifetime_map(&v7);
  v10[0] = (__int64)L"Windows.Internal.Shell.XamlExplorerHost.WASDK.XamlApplication_WASDK";
  v10[1] = 67LL;
  winrt::param::hstring::hstring((__int64)v15, v10);
  v13 = 0LL;
  v2 = v7;
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, v15[0], &v13);
  if ( v13 )
  {
    *a1 = v13;
  }
  else
  {
    v3 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,>();
    v4 = (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
    v8 = (__int64 *)v4;
    v10[0] = (__int64)&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock);
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, v15[0], &v13);
    if ( v13 )
    {
      *a1 = v13;
    }
    else
    {
      v14[0] = 0;
      v11 = 0;
      v12 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v2 + 80LL))(v2, v15[0], v4, v14);
      winrt::check_hresult(&v9, v5, (__int64)&v11);
      v8 = 0LL;
      *a1 = v4;
    }
    ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return a1;
}

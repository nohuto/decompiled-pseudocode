/*
 * XREFs of ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18065E51C
 * Callers:
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18065EAB8 (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x180242AA0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$create_and_initialize@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUWindowsTracker@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18065E194 (--$create_and_initialize@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>(
        __int64 *a1)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 v9[2]; // [rsp+48h] [rbp-11h] BYREF
  int v10; // [rsp+58h] [rbp-1h] BYREF
  __int128 v11; // [rsp+60h] [rbp+7h]
  __int64 v12[8]; // [rsp+70h] [rbp+17h] BYREF
  char v13; // [rsp+C8h] [rbp+6Fh] BYREF
  int v14; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+7Fh] BYREF

  winrt::impl::get_static_lifetime_map(&v7);
  v9[0] = (__int64)L"Windows.Internal.Shell.WindowsTracker";
  v9[1] = 37LL;
  winrt::param::hstring::hstring((__int64)v12, v9);
  v15 = 0LL;
  v2 = v7;
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, v12[0], &v15);
  if ( v15 )
  {
    *a1 = v15;
  }
  else
  {
    v3 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,>();
    v4 = (unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL);
    v8 = v4;
    v9[0] = (__int64)&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock);
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, v12[0], &v15);
    if ( v15 )
    {
      *a1 = v15;
    }
    else
    {
      v13 = 0;
      v10 = 0;
      v11 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v2 + 80LL))(v2, v12[0], v4, &v13);
      winrt::check_hresult(&v14, v5, (__int64)&v10);
      v8 = 0LL;
      *a1 = v4;
    }
    ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return a1;
}

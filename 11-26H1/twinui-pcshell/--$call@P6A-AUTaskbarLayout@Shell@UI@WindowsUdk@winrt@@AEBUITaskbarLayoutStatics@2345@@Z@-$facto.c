/*
 * XREFs of ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskbarLayout@Shell@UI@WindowsUdk@2@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x180204AC8
 * Callers:
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801C6B60 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUITaskbarLayoutStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1803A90B4 (--$get_activation_factory@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AUITaskba.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 *v5; // rax
  char v6; // di
  _DWORD *v8; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+88h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = 1;
  v9[1] = 33;
  v10 = L"WindowsUdk.UI.Shell.TaskbarLayout";
  v8 = v9;
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>(&v11, &v8);
  v12 = 0LL;
  if ( !v11 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v5 = v12;
  if ( !v12 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v6 )
  {
    v12 = &qword_1808DB948;
    _InterlockedIncrement64(&qword_1808DB948);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB950);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>);
    _InterlockedDecrement64(&qword_1808DB948);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  return a2;
}

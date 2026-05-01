/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x180613180
 * Callers:
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1806134A4 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x1806130B8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // r14
  volatile signed __int32 **v2; // r15
  volatile signed __int32 **v3; // rsi
  unsigned int v4; // r8d
  volatile signed __int32 **v5; // rax
  winrt::impl::timespan_awaiter *v6; // rcx
  __int16 v7; // ax
  volatile signed __int32 **v8; // rsi
  volatile signed __int32 **v9; // rdi
  unsigned int v10; // r8d
  volatile signed __int32 **v11; // rax
  volatile signed __int32 **v12; // rsi
  volatile signed __int32 **v13; // rdi
  unsigned int v14; // r8d
  volatile signed __int32 **v15; // rax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        v1 = *(_QWORD *)(a1 + 280);
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          v1,
          (_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 32) = a1 + 24;
        v2 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 24), L"Win32");
        *(_QWORD *)(a1 + 48) = a1 + 40;
        v3 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 40), L"Install");
        *(_QWORD *)(a1 + 256) = a1 + 16;
        v5 = (volatile signed __int32 **)winrt::hstring::hstring(
                                           (winrt::hstring *)(a1 + 56),
                                           (const struct winrt::hstring *)(a1 + 288),
                                           v4);
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          v1,
          (_BYTE *)(a1 + 64),
          v5,
          v3,
          v2,
          0);
        v6 = (winrt::impl::timespan_awaiter *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 88) = 600000000LL;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = 0;
        v7 = 4;
        goto LABEL_4;
      case 4:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 72));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 72));
        *(_QWORD *)(a1 + 120) = a1 + 112;
        v8 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 112), L"Win32");
        *(_QWORD *)(a1 + 136) = a1 + 128;
        v9 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 128), L"Update");
        v11 = (volatile signed __int32 **)winrt::hstring::hstring(
                                            (winrt::hstring *)(a1 + 144),
                                            (const struct winrt::hstring *)(*(_QWORD *)(a1 + 256) + 272LL),
                                            v10);
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          *(_QWORD *)(a1 + 280),
          (_BYTE *)(a1 + 152),
          v11,
          v9,
          v8,
          1);
        v6 = (winrt::impl::timespan_awaiter *)(a1 + 160);
        *(_QWORD *)(a1 + 160) = 0LL;
        *(_QWORD *)(a1 + 168) = 0LL;
        *(_QWORD *)(a1 + 176) = 3000000000LL;
        *(_QWORD *)(a1 + 184) = 0LL;
        *(_DWORD *)(a1 + 192) = 0;
        v7 = 6;
LABEL_4:
        *(_WORD *)(a1 + 8) = v7;
        winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
          v6,
          a1);
        return;
      case 5:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 72));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_14;
      case 6:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 160));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 160));
        *(_QWORD *)(a1 + 208) = a1 + 200;
        v12 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 200), L"Win32");
        *(_QWORD *)(a1 + 224) = a1 + 216;
        v13 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)(a1 + 216), L"Update");
        v15 = (volatile signed __int32 **)winrt::hstring::hstring(
                                            (winrt::hstring *)(a1 + 232),
                                            (const struct winrt::hstring *)(*(_QWORD *)(a1 + 256) + 272LL),
                                            v14);
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          *(_QWORD *)(a1 + 280),
          (_BYTE *)(a1 + 240),
          v15,
          v13,
          v12,
          2);
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_14;
      case 7:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 160));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_14:
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 288));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x130);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}

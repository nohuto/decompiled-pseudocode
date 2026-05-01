/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x180265020
 * Callers:
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1801D57DC (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800CBF9C (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800CC4B4 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800CC838 (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800CD9F0 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1801870F4 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x180202FB0 (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x180206918 (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1(
        char *a1)
{
  RTL_SRWLOCK *v2; // rbx
  char *v3; // rsi
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // r13
  RTL_SRWLOCK *v6; // r15
  _OWORD *v7; // r14
  bool v8; // bl
  __int64 ForegroundWindow; // rdx
  __int64 v10; // rax
  HWND TabProxyWindowOwnerWindow; // rbx
  HWND TabProxyWindowHwnd; // rax
  bool v13; // [rsp+20h] [rbp-68h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        v2 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 27);
        v3 = a1 + 16;
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 2, v2 + 77);
        *((_QWORD *)a1 + 24) = v3;
        if ( *(PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                         &v2[78],
                         a1 + 24,
                         a1 + 224) == v2[79].Ptr )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 2);
LABEL_14:
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1, (const struct std::nothrow_t *)0xF0);
        }
        else
        {
          v4 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                (__int64)&v2[78],
                                (unsigned __int8 *)a1 + 224);
          *((_OWORD *)a1 + 2) = *winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
                                   v4,
                                   (__int128 *)a1 + 3);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 2);
          *((_QWORD *)a1 + 8) = 0LL;
          *((_QWORD *)a1 + 9) = 0LL;
          *((_QWORD *)a1 + 10) = 10000000LL;
          *((_QWORD *)a1 + 11) = 0LL;
          *((_DWORD *)a1 + 24) = 0;
          *((_WORD *)a1 + 4) = 4;
          winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
            a1 + 64,
            a1);
        }
        break;
      case 4:
        winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 64));
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 64));
        v5 = (RTL_SRWLOCK *)*((_QWORD *)a1 + 27);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 13, v5 + 77);
        if ( *(PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                         &v5[78],
                         a1 + 112,
                         a1 + 224) != v5[79].Ptr )
        {
          v6 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                (__int64)&v5[78],
                                (unsigned __int8 *)(*((_QWORD *)a1 + 24) + 208LL));
          v7 = a1 + 120;
          winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(v6, (__int128 *)(a1 + 120));
          v8 = memcmp_0(a1 + 120, a1 + 32, 0x10uLL) == 0;
          a1[136] = v8;
          *((_OWORD *)a1 + 9) = *(_OWORD *)(a1 + 120);
          v13 = winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(
                  v6,
                  (__int64)(a1 + 144));
          a1[137] = v13;
          ForegroundWindow = (unsigned int)GetForegroundWindow();
          v10 = *((_QWORD *)a1 + 28);
          a1[138] = ForegroundWindow == v10;
          if ( v8 && v13 && ForegroundWindow == v10 )
          {
            *((_OWORD *)a1 + 10) = *v7;
            TabProxyWindowOwnerWindow = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(
                                                v6,
                                                (__int64)(a1 + 160));
            *((_OWORD *)a1 + 11) = *v7;
            TabProxyWindowHwnd = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(
                                         v6,
                                         (__int64)(a1 + 176));
            winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
              (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)v5,
              TabProxyWindowHwnd,
              TabProxyWindowOwnerWindow);
          }
          else
          {
            WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>((__int64)(a1 + 136));
          }
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 13);
        goto LABEL_14;
      case 5:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 64));
        goto LABEL_14;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}

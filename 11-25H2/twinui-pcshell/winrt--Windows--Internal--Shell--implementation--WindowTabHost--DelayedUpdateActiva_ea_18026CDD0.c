/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18026CDD0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$2 @ 0x18026CD68 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 * Callees:
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x180053440 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x180063E40 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x1800A3300 (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800A3728 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800A3788 (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18014B650 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18018CC58 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x18021039C (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033F024 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1(
        char *a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 *v3; // r8
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // r13
  RTL_SRWLOCK *v6; // r15
  _OWORD *v7; // r14
  __int64 v8; // rax
  bool v9; // bl
  __int64 ForegroundWindow; // rdx
  HWND TabProxyWindowOwnerWindow; // rbx
  HWND TabProxyWindowHwnd; // rax
  char v13; // [rsp+20h] [rbp-68h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        v2 = *(RTL_SRWLOCK **)(a1 + 209);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 2, v2 + 77);
        *((_QWORD *)a1 + 24) = a1 + 9;
        if ( (PVOID)*std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                       &v2[78].Ptr,
                       (_QWORD *)a1 + 3,
                       a1 + 217) == v2[79].Ptr )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 2);
LABEL_16:
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1, (const struct std::nothrow_t *)0xF0);
        }
        else
        {
          v4 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                &v2[78].Ptr,
                                v3);
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
        v5 = *(RTL_SRWLOCK **)(a1 + 209);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)a1 + 13, v5 + 77);
        if ( (PVOID)*std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                       &v5[78].Ptr,
                       (_QWORD *)a1 + 14,
                       a1 + 217) != v5[79].Ptr )
        {
          v6 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                &v5[78].Ptr,
                                (__int64 *)(*((_QWORD *)a1 + 24) + 208LL));
          v7 = a1 + 120;
          winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(v6, (__int128 *)(a1 + 120));
          v8 = *((_QWORD *)a1 + 15) - *((_QWORD *)a1 + 4);
          if ( *((_QWORD *)a1 + 15) == *((_QWORD *)a1 + 4) )
            v8 = *((_QWORD *)a1 + 16) - *((_QWORD *)a1 + 5);
          v9 = v8 == 0;
          a1[136] = v8 == 0;
          *((_OWORD *)a1 + 9) = *v7;
          v13 = winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(
                  v6,
                  (__int64)(a1 + 144));
          a1[137] = v13;
          ForegroundWindow = (unsigned int)GetForegroundWindow();
          a1[138] = ForegroundWindow == *(_QWORD *)(a1 + 217);
          if ( v9 && v13 && ForegroundWindow == *(_QWORD *)(a1 + 217) )
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
            WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>();
          }
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 13);
        goto LABEL_16;
      case 5:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::impl::timespan_awaiter *)(a1 + 64));
        goto LABEL_16;
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

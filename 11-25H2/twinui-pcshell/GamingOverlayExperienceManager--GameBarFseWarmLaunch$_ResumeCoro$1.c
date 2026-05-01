/*
 * XREFs of GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x1803443B0
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034435C (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033F024 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F524 (--$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??$query@UIInspectable@@@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@PEAPEAUIInspectable@@@Z @ 0x18034013C (--$query@UIInspectable@@@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@PEAPEAUIInspectab.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180349B9C (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x18035ACB8 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  unsigned int v4; // r14d
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_18;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = *(_QWORD *)(a1 + 97);
        wil::com_weak_query<GamingOverlayExperienceManager *>((__int64 *)a1 + 2, (__int64 *)a1 + 3);
        a1[32] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        if ( NexusPolicyManager::IsLegacyNexusEnabled(*(NexusPolicyManager **)(*(_QWORD *)(a1 + 97) + 968LL))
          || (v4 = 10,
              v5 = (unsigned int *)(a1 + 36),
              *((_DWORD *)a1 + 9) = 0,
              SHRegGetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\GameBar",
                L"FseWarmLaunchDelaySeconds",
                (unsigned int *)a1 + 9) >= 0)
          && (v4 = *v5) == 0 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        }
        else
        {
          v6 = 10000000LL * v4;
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = 0LL;
          *((_QWORD *)a1 + 7) = v6;
          *((_QWORD *)a1 + 8) = 0LL;
          *((_DWORD *)a1 + 18) = 0;
          if ( v6 )
          {
            *((_WORD *)a1 + 4) = 6;
            winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
              (winrt::impl::timespan_awaiter *)(a1 + 40),
              (__int64)a1);
            return;
          }
LABEL_12:
          winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 40));
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 5);
          *((_QWORD *)a1 + 10) = 0LL;
          if ( *((_QWORD *)a1 + 2) )
            wil::details::weak_query_policy::query<IInspectable>(*((_QWORD *)a1 + 2), (_QWORD *)a1 + 10);
          if ( *((_QWORD *)a1 + 10) )
          {
            v7 = GamingOverlayExperienceManager::LaunchGameBar(
                   *(_QWORD *)(a1 + 97),
                   L"ms-gamebar://launch/?gamingFullScreenActive=true",
                   7LL);
            if ( v7 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1548,
                (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
                (const char *)(unsigned int)v7);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 10);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        }
LABEL_18:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x70);
        break;
      case 5:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        goto LABEL_18;
      case 6:
        goto LABEL_12;
      case 7:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 5);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        goto LABEL_18;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}

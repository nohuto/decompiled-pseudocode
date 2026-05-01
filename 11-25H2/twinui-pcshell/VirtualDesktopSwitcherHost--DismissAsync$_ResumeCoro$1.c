/*
 * XREFs of VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x180686790
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x180686724 (VirtualDesktopSwitcherHost--DismissAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180234ED4 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?IsAnyProviderActive@?$consume_Windows_Internal_Shell_IRemoteSessionWindowManager@UIRemoteSessionWindowManager@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180248EF8 (-IsAnyProviderActive@-$consume_Windows_Internal_Shell_IRemoteSessionWindowManager@UIRemoteSessio.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // eax
  __int64 *v3; // rsi
  int v4; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    LOWORD(v4) = *(_WORD *)(a1 + 8);
    switch ( (__int16)v4 )
    {
      case -1:
      case 3:
        goto LABEL_17;
      case 2:
        v1 = *(_QWORD *)(a1 + 49);
        if ( *(_DWORD *)(v1 + 528) == 1 || *(_DWORD *)(a1 + 57) == 1 && (*(_BYTE *)(v1 + 457) || *(_BYTE *)(v1 + 458)) )
          goto LABEL_17;
        *(_QWORD *)(a1 + 16) = 0LL;
        v2 = (**(__int64 (__fastcall ***)(__int64, GUID *))v1)(v1, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3);
        if ( v2 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C60,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
            (const char *)(unsigned int)v2,
            v4);
        *(_QWORD *)(a1 + 24) = v1 + 440;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 24), (void (*)(void *, void *))a1) )
        {
LABEL_13:
          winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 24));
          v3 = *(__int64 **)(a1 + 49);
          if ( winrt::impl::consume_Windows_Internal_Shell_IRemoteSessionWindowManager<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsAnyProviderActive(v3 + 59) )
            VirtualDesktopSwitcherHost::StartDismissAnimation((VirtualDesktopSwitcherHost *)v3);
          else
            (*(void (__fastcall **)(__int64 *))(v3[1] + 40))(v3 + 1);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
LABEL_17:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
        }
        break;
      case 4:
        goto LABEL_13;
      case 5:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
        goto LABEL_17;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}

/*
 * XREFs of _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180600B80
 * Callers:
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::operator() @ 0x180600C94 (_lambda_190ccd1a8be9aac816201cee4203407b_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1806040E8 (-_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherT.c)
 */

void __fastcall lambda_190ccd1a8be9aac816201cee4203407b___ResumeCoro_1::operator()(__int64 a1)
{
  char v2; // al
  __int64 *v3; // rdi
  __int64 v4; // rsi

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_4;
    case 2:
      try
      {
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 56) + 40LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        v2 = winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 16), (void (*)(void *, void *))a1);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_a1bf07eabb51e841d7b59a4e813e5668__const___::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
      }
      if ( !v2 )
        goto LABEL_3;
      return;
    case 4:
LABEL_3:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 16));
      v3 = *(__int64 **)(a1 + 56);
      v4 = *v3;
      *(_QWORD *)(a1 + 32) = v3[2];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 32));
      CLauncherTipContextMenu::_ExecuteShutdownCommand(v4, a1 + 32, v3 + 3);
LABEL_4:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
      break;
    default:
      __debugbreak();
      break;
  }
}

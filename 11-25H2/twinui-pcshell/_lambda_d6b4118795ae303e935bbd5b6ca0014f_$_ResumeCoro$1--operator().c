/*
 * XREFs of _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x1805DC470
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2::operator() @ 0x1805DC408 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801F0248 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 */

void __fastcall lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator()(__int64 a1)
{
  char v2; // al
  __int64 v3; // rax
  CLauncherTipContextMenu *v4; // rdi

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_4;
    case 2:
      try
      {
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 49) + 24LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        v2 = winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 16), (void (*)(void *, void *))a1);
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_7dcf87eb4336ac1cd65e4151029d03fa__const___::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
      }
      if ( !v2 )
        goto LABEL_3;
      return;
    case 4:
LABEL_3:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 16));
      v3 = *(_QWORD *)(a1 + 49);
      v4 = *(CLauncherTipContextMenu **)v3;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v3 + 16);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 32));
      CLauncherTipContextMenu::_ExecuteCommand(v4, (__int64 *)(a1 + 32));
LABEL_4:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
      break;
    default:
      __debugbreak();
      break;
  }
}

/*
 * XREFs of ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1800F3DDC
 * Callers:
 *     ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x1800F3B60 (-RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApp.c)
 *     ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x1800F3EE8 (-_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x1800F3EBC (--_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowIconLoader::_LoadAsyncIcon(CWindowIconLoader *this, int a2)
{
  __int64 v2; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rbx
  unsigned int v6; // edx

  v2 = a2;
  v4 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
    *((_DWORD *)v5 + 2) = v2;
    *((_DWORD *)v5 + 3) = 0;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, void (*)(HWND, unsigned int, unsigned __int64, __int64), __int64 *))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 2),
            127LL,
            v2,
            0LL,
            CWindowIconLoader::_SendMessageCallback,
            v5) )
      CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'(
        (CWindowIconLoader::SendMessageCallbackInfo *)v5,
        v6);
  }
}

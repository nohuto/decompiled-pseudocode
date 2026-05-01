/*
 * XREFs of ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1800F16D4
 * Callers:
 *     ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x1800F0E0C (-_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z.c)
 *     ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x1800F1460 (-RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x1800F1778 (--_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, void (__fastcall *)(HWND, __int64, CWindowIconLoader **, HICON), __int64 *))(**((_QWORD **)this + 4) + 24LL))(
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

/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x180162774
 * Callers:
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180162B88 (-Initialize@CursorManager@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18004384C (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180094BFC (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180097E2C (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,CursorManager *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 **a3,
        _QWORD *a4)
{
  void *v8; // rax
  int v9; // edi
  MessageProxyReconnectAdapter *v10; // rax
  struct IMessageProxyReconnectAdapterOwner *v11; // r9
  MessageProxyReconnectAdapter *v12; // rbx
  void *v14; // [rsp+20h] [rbp-18h] BYREF
  MessageProxyReconnectAdapter *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( v8 )
  {
    v10 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter((MessageProxyReconnectAdapter *)v8);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach((__int64 *)&v15, (__int64)v10);
    v14 = 0LL;
    v11 = (struct IMessageProxyReconnectAdapterOwner *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL));
    v12 = v15;
    v9 = MessageProxyReconnectAdapter::RuntimeClassInitialize(v15, a2, *a3, v11);
    if ( v9 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return (unsigned int)v9;
}

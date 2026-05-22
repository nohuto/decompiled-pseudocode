/*
 * XREFs of ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x18005816C
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180057D20 (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18004384C (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x180094BFC (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],InputServiceProxy *>(
        MessageProxyReconnectAdapter **a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  MessageProxyReconnectAdapter *v8; // rax
  int v9; // edi
  MessageProxyReconnectAdapter *v10; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  MessageProxyReconnectAdapter *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (MessageProxyReconnectAdapter *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return (unsigned int)-2147024882;
  v10 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v8);
  v13 = v10;
  v12[0] = 0LL;
  v9 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
         v10,
         a2,
         a3,
         (struct IMessageProxyReconnectAdapterOwner *)((*a4 + 8LL) & -(__int64)(*a4 != 0LL)));
  if ( v9 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v10 + 16LL))(v10);
    return (unsigned int)v9;
  }
  if ( v10 )
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
  *a1 = v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(v12);
  return 0LL;
}

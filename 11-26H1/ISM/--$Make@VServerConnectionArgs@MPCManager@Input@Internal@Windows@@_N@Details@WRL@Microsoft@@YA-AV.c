/*
 * XREFs of ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x1801641FC
 * Callers:
 *     ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x18016849C (-OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ.c)
 *     ?add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18016B100 (-add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCManagerClien.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z @ 0x180164918 (--0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnectionArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnection.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ServerConnectionArgs,bool>(
        __int64 *a1,
        bool *a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  if ( v4 )
  {
    v5 = Windows::Internal::Input::MPCManager::ServerConnectionArgs::ServerConnectionArgs(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)v4,
           *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release();
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return a1;
}

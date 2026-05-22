/*
 * XREFs of ?add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18016B100
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AABCC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x1801641FC (--$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA-AV.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18016503C (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@I.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnectionArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCManagerClient::add_ServerConnectionChanged(__int64 a1, struct IUnknown *a2, struct IUnknown **a3)
{
  int v5; // edi
  const char *v6; // r9
  int v7; // eax
  volatile int *v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
           a1 + 1672,
           a2,
           a2->lpVtbl[1].QueryInterface,
           a3);
    if ( v5 >= 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1592) + 248LL) != 0LL;
      Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ServerConnectionArgs,bool>(&v13, &v12);
      if ( !v13 )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          299LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
          v6);
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))a2->lpVtbl[1].QueryInterface)(
             a2,
             (a1 - 8) & -(__int64)(a1 != 32),
             v13);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x12D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
          (const char *)(unsigned int)v7,
          v10);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release(
        v13,
        v8);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}

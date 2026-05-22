/*
 * XREFs of ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x18016B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AABCC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801690B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x18016EF04 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 */

__int64 __fastcall MPCManagerClient::get_MPCConstantManagerClient(
        MPCManagerClient *this,
        struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient **a2)
{
  __int64 v4; // rcx
  struct MPCManagerClientConnection *v5; // rsi
  MPCConstantManagerClient *v6; // rbx
  void *v7; // rax
  volatile int *v8; // rdx
  const char *v9; // r9
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 213);
  if ( !v4 )
  {
    v5 = (struct MPCManagerClientConnection *)*((_QWORD *)this + 200);
    v6 = 0LL;
    v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v7;
    if ( v7 )
    {
      v6 = MPCConstantManagerClient::MPCConstantManagerClient((MPCConstantManagerClient *)v7, v5);
      v13 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v13);
    v10 = *((_QWORD *)this + 213);
    *((_QWORD *)this + 213) = v6;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(
        v10,
        v8);
    v4 = *((_QWORD *)this + 213);
    if ( !v4 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        281LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        v9);
  }
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::QueryInterface(
           v4,
           &GUID_4e663a2d_1db5_4a2f_98d7_4ba9bf42d201,
           a2);
}

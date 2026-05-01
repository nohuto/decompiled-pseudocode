/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call @ 0x180186970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180053480 (--1Item@AgileRegistrationList@@QEAA@XZ.c)
 *     ??$?0PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@?$__compressed_pair@PEAVICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@$$QEAPEAVICortanaWNFService@Cortana@TwinUI@@$$QEAU?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@1@@Z @ 0x1800F6E58 (--$-0PEAVICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortana@TwinUI.c)
 *     _lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_ @ 0x1804389B8 (_lambda_5fb34dca825284ea67ff945056291927_--_lambda_5fb34dca825284ea67ff945056291927_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_774bfa34314c79ae2272b980e777e42b___ @ 0x180442DBC (Windows--Internal--ComTaskPool--QueueTask__lambda_774bfa34314c79ae2272b980e777e42b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9378343b320afa124df06e8933a6190f___ @ 0x180442EF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_9378343b320afa124df06e8933a6190f___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call(
        __int64 a1,
        char *a2)
{
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v15 = *a2;
  v2 = v15;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 280) + 232LL))(*(_QWORD *)(v3 + 280));
  if ( v2 )
  {
    if ( !*(_BYTE *)(v3 + 176) )
    {
      *(_BYTE *)(v3 + 176) = 1;
      v16 = *(int *)(v3 + 296);
      v9 = wistd::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::__compressed_pair<TwinUI::Cortana::ICortanaWNFService *,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
             &v17,
             &v16);
      v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_9378343b320afa124df06e8933a6190f___(
              v11,
              v10,
              *(unsigned int *)(v3 + 544),
              v9);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAF1,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v12);
    }
  }
  v4 = (v3 + 48) & -(__int64)(v3 != 0);
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))((v3 + 48) & -(__int64)(v3 != 0));
  v5 = lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_(v13, v3, &v16, &v15);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_774bfa34314c79ae2272b980e777e42b___(
         v7,
         v6,
         *(unsigned int *)(v3 + 544),
         v5);
  AgileRegistrationList::Item::~Item((AgileRegistrationList::Item *)v13);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAFC,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}

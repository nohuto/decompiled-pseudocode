/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e43182f143830c6c61b3f5140f894413___1_long_::Invoke @ 0x18041A980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180057ED4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e43182f143830c6c61b3f5140f894413___1_long_::Invoke(
        __int64 a1,
        int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16), a2 >= 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24));
    v6 = v4;
    if ( (v4 & 0x80000000) == 0 )
      return 0;
    v5 = 911LL;
  }
  else
  {
    v5 = 910LL;
    v6 = (unsigned int)v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
    (const char *)v6);
  Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  return v4;
}

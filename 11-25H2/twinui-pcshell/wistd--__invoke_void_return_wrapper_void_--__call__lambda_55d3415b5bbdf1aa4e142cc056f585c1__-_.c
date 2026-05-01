/*
 * XREFs of wistd::__invoke_void_return_wrapper_void_::__call__lambda_55d3415b5bbdf1aa4e142cc056f585c1__&_ @ 0x18029ABA0
 * Callers:
 *     wistd::__function::__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl(void)_::operator() @ 0x1802C31F0 (wistd--__function--__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9917394d6d8e3b544302b082b76e41d8___ @ 0x18029ABFC (Windows--Internal--ComTaskPool--QueueTask__lambda_9917394d6d8e3b544302b082b76e41d8___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__invoke_void_return_wrapper_void_::__call__lambda_55d3415b5bbdf1aa4e142cc056f585c1____(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v2 = Windows::Internal::ComTaskPool::QueueTask__lambda_9917394d6d8e3b544302b082b76e41d8___(v1, &v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v4);
}

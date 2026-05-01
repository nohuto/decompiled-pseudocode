/*
 * XREFs of wistd::__function::__func__lambda_383a1ad20d5032ad96979058c699feb6__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18048C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1f254b9d55396987f0765b6e37247d78___ @ 0x18048ABA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_1f254b9d55396987f0765b6e37247d78___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_383a1ad20d5032ad96979058c699feb6__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        int *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v5 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v6 = *a2;
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_1f254b9d55396987f0765b6e37247d78___(v3, (__int64)v5);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x80,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)v5);
}

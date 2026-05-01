/*
 * XREFs of wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_::operator() @ 0x1802DA7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d5fd06e0f869390ff79948baa2523d20___ @ 0x1802DA02C (Windows--Internal--ComTaskPool--QueueTask__lambda_d5fd06e0f869390ff79948baa2523d20___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl__EA_EVENT_HEADER_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  bool v4[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4[0] = (*a2 & 0x3FC000) != 0;
  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_d5fd06e0f869390ff79948baa2523d20___(v2, v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v5);
}

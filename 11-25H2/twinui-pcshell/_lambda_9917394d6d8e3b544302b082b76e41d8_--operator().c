/*
 * XREFs of _lambda_9917394d6d8e3b544302b082b76e41d8_::operator() @ 0x1802B87E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9917394d6d8e3b544302b082b76e41d8___::Run @ 0x1802CFFE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9917394d6d8e3b544302b082b76e41d8___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BF074 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_9917394d6d8e3b544302b082b76e41d8_::operator()(AgileGitPtr *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v2 = AgileGitPtr::CopyLocal(this, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 24LL))(v8);
    v3 = v5;
    if ( v5 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
    v4 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return v3;
}

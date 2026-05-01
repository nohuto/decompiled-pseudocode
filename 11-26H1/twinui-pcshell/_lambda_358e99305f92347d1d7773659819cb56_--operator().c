/*
 * XREFs of _lambda_358e99305f92347d1d7773659819cb56_::operator() @ 0x1800521BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___::Run @ 0x1802B04B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18005227C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_358e99305f92347d1d7773659819cb56_::operator()(AgileGitPtr *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v2 = AgileGitPtr::CopyLocal(this, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 56LL))(v8);
    v3 = v5;
    if ( v5 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
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

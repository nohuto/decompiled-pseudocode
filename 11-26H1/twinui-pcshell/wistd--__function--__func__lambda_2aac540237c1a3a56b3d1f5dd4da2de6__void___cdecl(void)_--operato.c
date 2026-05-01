/*
 * XREFs of wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_::operator() @ 0x1804599B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A2B38 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v2 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 8),
         &GUID_71880306_f2db_0330_10a8_e1abbd3d18cb,
         &v7);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 928LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v2);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  }
  v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 24LL))(v7);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 932LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
}

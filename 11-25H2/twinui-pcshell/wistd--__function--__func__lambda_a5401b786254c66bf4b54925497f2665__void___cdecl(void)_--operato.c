/*
 * XREFs of wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::operator() @ 0x18044D330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AB028 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__::operator()(
        __int64 a1)
{
  Microsoft::WRL::AgileRef *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = (Microsoft::WRL::AgileRef *)(a1 + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v2 = Microsoft::WRL::AgileRef::InternalResolve(v1, &GUID_71880306_f2db_0330_10a8_e1abbd3d18cb, &v7);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 922LL;
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
    v4 = 926LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
}

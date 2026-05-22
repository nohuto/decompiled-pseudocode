/*
 * XREFs of ?Initialize@InjectionRawInputProvider@@AEAAJXZ @ 0x1800E2508
 * Callers:
 *     ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800E21E0 (-Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UISystemInputRouterHitTest@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E1934 (--$As@UISystemInputRouterHitTest@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InjectionRawInputProvider::Initialize(InjectionRawInputProvider *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int v4; // edi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8)
                                                                                               + 72LL))(v2 + 8);
  v8 = v3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v8);
  if ( !v3 )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  v6 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<ISystemInputRouterHitTest>(&v8, (__int64 *)this + 4);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}

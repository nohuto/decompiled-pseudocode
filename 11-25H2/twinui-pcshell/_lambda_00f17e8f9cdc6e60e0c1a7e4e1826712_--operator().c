/*
 * XREFs of _lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_::operator() @ 0x18030BFD4
 * Callers:
 *     wistd::__function::__func__lambda_00f17e8f9cdc6e60e0c1a7e4e1826712__void___cdecl(void)_::operator() @ 0x18030C630 (wistd--__function--__func__lambda_00f17e8f9cdc6e60e0c1a7e4e1826712__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x18013DE68 (--0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_::operator()(RTL_SRWLOCK **a1)
{
  char *v2; // rsi
  RTL_SRWLOCK *i; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  CAutoSRWSharedLock::CAutoSRWSharedLock((CAutoSRWSharedLock *)&v9, *a1 + 66);
  v2 = 0LL;
  for ( i = *a1; v2 < (*a1)[68].Ptr; i = *a1 )
  {
    v8 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)i[67].Ptr + (_QWORD)v2);
    v5 = **v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v6 = v5(v4, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v8);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    ++v2;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
}

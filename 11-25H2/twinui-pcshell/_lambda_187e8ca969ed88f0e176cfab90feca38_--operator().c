/*
 * XREFs of _lambda_187e8ca969ed88f0e176cfab90feca38_::operator() @ 0x18052EB88
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::Run @ 0x180530FD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab_ea_180530FD0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_187e8ca969ed88f0e176cfab90feca38_::operator()(void ***a1)
{
  LPVOID v2; // rbx
  __int64 (__fastcall *v3)(LPVOID, _QWORD, void **); // rdi
  void **v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  CoCreateInstance(&GUID_c2cf3110_460e_4fc1_b9d0_8a1c0c9cc4bd, 0LL, 4u, &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc, &v9);
  v2 = v9;
  if ( v9
    && (v3 = *(__int64 (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)v9 + 32LL),
        v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(*a1),
        v5 = v3(v2, 0LL, v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5AE,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v6;
}

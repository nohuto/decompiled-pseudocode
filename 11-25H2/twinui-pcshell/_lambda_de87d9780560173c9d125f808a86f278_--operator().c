/*
 * XREFs of _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804D8640
 * Callers:
 *     _lambda_de87d9780560173c9d125f808a86f278_::_lambda_invoker_cdecl_ @ 0x1804D79E0 (_lambda_de87d9780560173c9d125f808a86f278_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d45c45a1f8f4929b920127ae92a9fd69___ @ 0x1804D7DD4 (Windows--Internal--ComTaskPool--QueueTask__lambda_d45c45a1f8f4929b920127ae92a9fd69___.c)
 *     _lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_ @ 0x1804D8218 (_lambda_f45959a3646b89147a97246aec46a198_--__lambda_f45959a3646b89147a97246aec46a198_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_de87d9780560173c9d125f808a86f278_::operator()(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v2)(__int64, GUID *, __int64 *); // rax
  __int64 v3; // rdi
  int v5; // eax
  volatile int *v6; // rdx
  __int64 v7; // r8
  volatile int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+18h] BYREF

  v15 = a1;
  v2 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2;
  v3 = *(_QWORD *)(a2 + 184);
  v15 = 0LL;
  v5 = (*v2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v5,
      v11[0]);
  v15 = 0LL;
  v11[1] = a2;
  v16 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v16, v6);
  v11[0] = 0LL;
  v12[0] = v7;
  v12[1] = a2;
  v13 = v3;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, v8);
  Windows::Internal::ComTaskPool::QueueTask__lambda_d45c45a1f8f4929b920127ae92a9fd69___(v9, 0, v10, v12);
  lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_(v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
}

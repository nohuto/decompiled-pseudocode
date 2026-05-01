/*
 * XREFs of _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804EAB80
 * Callers:
 *     _lambda_de87d9780560173c9d125f808a86f278_::_lambda_invoker_cdecl_ @ 0x1804E9E50 (_lambda_de87d9780560173c9d125f808a86f278_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___ @ 0x1804EA2B8 (CreationThreadDispatcher--RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_de87d9780560173c9d125f808a86f278_::operator()(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v2)(__int64, GUID *, __int64 *); // rax
  __int64 v3; // rdi
  int v5; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v2 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2;
  v3 = *(_QWORD *)(a2 + 184);
  v8 = 0LL;
  v5 = (*v2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v5,
      v6[0]);
  v6[0] = v8;
  v8 = 0LL;
  v6[1] = a2;
  CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___(v3, (__int64)v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}

/*
 * XREFs of _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x1800B9480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800B99C8 (--1-$unique_ptr@V-$function@$$A6AXXZ@std@@U-$default_delete@V-$function@$$A6AXXZ@std@@@2@@std@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(&v3);
  return 0LL;
}

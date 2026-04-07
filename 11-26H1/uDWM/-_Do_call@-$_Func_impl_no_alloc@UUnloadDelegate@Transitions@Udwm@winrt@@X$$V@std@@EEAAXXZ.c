/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ @ 0x1800DDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Do_call(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  const char *v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt/Udwm.Transitions.h";
  v4 = 1149;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return winrt::check_hresult(&v7, v2, (__int64)&v4);
}

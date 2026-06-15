/*
 * XREFs of wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_::__clone @ 0x180158590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *a2 = &off_18017AD78;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}

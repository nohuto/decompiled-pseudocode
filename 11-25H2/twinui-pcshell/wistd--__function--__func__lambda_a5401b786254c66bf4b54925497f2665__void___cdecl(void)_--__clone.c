/*
 * XREFs of wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::__clone @ 0x180450DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_18071AFB8;
  *a2 = &off_18071AFB8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}

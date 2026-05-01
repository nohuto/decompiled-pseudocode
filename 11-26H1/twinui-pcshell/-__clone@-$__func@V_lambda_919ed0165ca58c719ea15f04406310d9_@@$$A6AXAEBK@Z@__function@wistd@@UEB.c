/*
 * XREFs of ?__clone@?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AXAEBK@Z@23@@Z @ 0x180474820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  void **result; // rax
  __int64 v3; // rcx

  result = &wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::`vftable';
  *a2 = &wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::`vftable';
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}

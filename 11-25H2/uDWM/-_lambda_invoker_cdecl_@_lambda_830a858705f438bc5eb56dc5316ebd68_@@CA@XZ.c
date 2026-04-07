/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_830a858705f438bc5eb56dc5316ebd68_@@CA@XZ @ 0x1800EA2B0
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18009B80C (InitOnceBeginInitialize_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}

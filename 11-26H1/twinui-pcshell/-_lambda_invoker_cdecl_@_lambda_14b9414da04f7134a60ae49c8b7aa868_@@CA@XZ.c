/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_14b9414da04f7134a60ae49c8b7aa868_@@CA@XZ @ 0x1804F2590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_14b9414da04f7134a60ae49c8b7aa868_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(
             &`GamingPosturePositionerTelemetryProvider::Instance'::`2'::wrapper,
             1u,
             &v1,
             &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}

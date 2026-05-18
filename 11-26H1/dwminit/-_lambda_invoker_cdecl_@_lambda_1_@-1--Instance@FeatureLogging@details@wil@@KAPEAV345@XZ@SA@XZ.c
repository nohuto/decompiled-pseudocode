/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@FeatureLogging@details@wil@@KAPEAV345@XZ@SA@XZ @ 0x180010C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `wil::details::FeatureLogging::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 1u, &v0, &v1) )
  {
    if ( !v0 )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, 0LL);
  }
}

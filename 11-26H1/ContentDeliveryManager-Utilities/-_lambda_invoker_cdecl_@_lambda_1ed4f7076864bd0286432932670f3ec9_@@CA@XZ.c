/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1ed4f7076864bd0286432932670f3ec9_@@CA@XZ @ 0x180045C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_1ed4f7076864bd0286432932670f3ec9_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(
             &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
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

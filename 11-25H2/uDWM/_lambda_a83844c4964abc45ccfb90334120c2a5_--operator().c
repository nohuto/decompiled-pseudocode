/*
 * XREFs of _lambda_a83844c4964abc45ccfb90334120c2a5_::operator() @ 0x180076954
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18003AABC (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     wil::details::lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___::_lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___ @ 0x180076934 (wil--details--lambda_call__lambda_a83844c4964abc45ccfb90334120c2a5___--_lambda_call__lambda_a838.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v2 = **a1;
  v6 = 0;
  v7 = 0;
  v5 = _xmm;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 240LL))(v2, &v5);
  v3 = *a1[1];
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 64) + 32LL))(*(_QWORD *)(v3 + 64));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 24) + 40LL))(*(_QWORD *)(v3 + 24));
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[2] + 32LL))(*a1[2]);
}

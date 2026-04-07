/*
 * XREFs of _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator() @ 0x18000F610
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     wil::details::lambda_call__CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1___::_lambda_call__CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1___ @ 0x18007C96C (wil--details--lambda_call__CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_2_--_lambda.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = **a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0LL;
  (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v2 + 240LL))(v2, &si128);
  v3 = *a1[1];
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 72) + 32LL))(*(_QWORD *)(v3 + 72));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 24) + 40LL))(*(_QWORD *)(v3 + 24));
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[2] + 32LL))(*a1[2]);
}

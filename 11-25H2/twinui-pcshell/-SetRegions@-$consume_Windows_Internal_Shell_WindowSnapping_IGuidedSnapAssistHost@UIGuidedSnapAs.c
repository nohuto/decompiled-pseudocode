/*
 * XREFs of ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x180583B30
 * Callers:
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180231BF8 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
        __int64 *a1,
        __m128i *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0;
  v7 = 0LL;
  v3 = 8LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
    v3 = a2->m128i_i64[0];
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 48LL))(v2, a2->m128i_u32[2], v3);
  return winrt::check_hresult(&v8, v4, (__int64)&v6);
}

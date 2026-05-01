/*
 * XREFs of ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x1805A7970
 * Callers:
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180222078 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
        __int64 **a1,
        __m128i *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int32 v6; // xmm0_4
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64 *, __int64, __int64); // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v12 = 0LL;
  v3 = 8LL;
  v4 = *v2;
  v5 = a2->m128i_i64[0];
  v6 = _mm_srli_si128(*a2, 8).m128i_u32[0];
  v11 = 0;
  v7 = a2->m128i_u32[2];
  v8 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v4 + 48);
  if ( v6 )
    v3 = v5;
  v9 = v8(v2, v7, v3);
  return winrt::check_hresult(&v13, v9, (__int64)&v11);
}

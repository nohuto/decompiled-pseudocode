/*
 * XREFs of ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x1805BCE08
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1801B0420 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch$19 @ 0x1806DE3E0 (__lambda_017e4516d3db66192a06ba57bc482270_--operator()_--_1_--catch$19.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        __int64 **a1,
        unsigned int *a2,
        __m128i *a3)
{
  __int64 *v3; // rcx
  __m128i v5; // xmm0
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64 *, __int64, _QWORD, __int64); // rax
  int v11; // eax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v14 = 0LL;
  v5 = *a3;
  v6 = 8LL;
  v7 = *v3;
  v8 = a3->m128i_i64[0];
  v13 = 0;
  v9 = *a2;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v7 + 64);
  if ( _mm_srli_si128(v5, 8).m128i_u32[0] )
    v6 = v8;
  v11 = v10(v3, v9, a3->m128i_u32[2], v6);
  return winrt::check_hresult(&v15, v11, (__int64)&v13);
}

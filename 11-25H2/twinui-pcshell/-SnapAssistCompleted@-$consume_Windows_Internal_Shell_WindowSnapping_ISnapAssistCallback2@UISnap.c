/*
 * XREFs of ?SnapAssistCompleted@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@3@U?$array_view@$$CB_K@3@@Z @ 0x180598B78
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1800F69F0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     __lambda_017e4516d3db66192a06ba57bc482270_::operator()_::_1_::catch$17 @ 0x1806B728C (__lambda_017e4516d3db66192a06ba57bc482270_--operator()_--_1_--catch$17.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        __int64 *a1,
        unsigned int *a2,
        __m128i *a3)
{
  __int64 v3; // rcx
  __int64 v5; // r9
  __m128i v6; // xmm0
  __int64 v7; // r8
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v10 = 0;
  v11 = 0LL;
  v5 = 8LL;
  v6 = *a3;
  v7 = a3->m128i_i64[0];
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) )
    v5 = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v3 + 64LL))(
         v3,
         *a2,
         a3->m128i_u32[2],
         v5);
  return winrt::check_hresult(&v12, v8, (__int64)&v10);
}

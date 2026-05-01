/*
 * XREFs of ?ReportEdgeGesture@?$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager@UIEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@3@AEBUGestureAnimationData@Input@UI@WindowsUdk@3@AEBUPoint@Foundation@83@@Z @ 0x180594B80
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180593C94 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportEdgeGesture(
        __int64 **a1,
        unsigned int *a2,
        __int128 *a3,
        unsigned int *a4)
{
  __m128 v4; // xmm1
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = (__m128)a4[1];
  v5 = *a1;
  v6 = *a2;
  v12 = 0LL;
  v11 = 0;
  v7 = *v5;
  v10 = *a3;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, unsigned __int64))(v7 + 48))(
         v5,
         v6,
         &v10,
         _mm_unpacklo_ps((__m128)*a4, v4).m128_u64[0]);
  return winrt::check_hresult(&v13, v8, (__int64)&v11);
}

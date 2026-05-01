/*
 * XREFs of ?ReportViewDragGesture@?$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager@UIEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@3@AEBW4ShellView@6UI@WindowsUdk@3@AEBUGestureAnimationData@Input@UI@WindowsUdk@3@AEBUPoint@Foundation@83@@Z @ 0x180594ED4
 * Callers:
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180594F48 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportViewDragGesture(
        __int64 **a1,
        unsigned int *a2,
        unsigned int *a3,
        __int128 *a4,
        unsigned int *a5)
{
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __m128 v8; // xmm1
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64, __int64, __int128 *, unsigned __int64); // rax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]

  v5 = *a1;
  v6 = *a3;
  v7 = *a2;
  v8 = (__m128)a5[1];
  v9 = *v5;
  v15 = 0LL;
  v14 = 0;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int128 *, unsigned __int64))(v9 + 56);
  v13 = *a4;
  v11 = v10(v5, v7, v6, &v13, _mm_unpacklo_ps((__m128)*a5, v8).m128_u64[0]);
  return winrt::check_hresult((int *)&a5, v11, (__int64)&v14);
}
